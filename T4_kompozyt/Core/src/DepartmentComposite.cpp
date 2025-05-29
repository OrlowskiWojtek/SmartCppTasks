#include "include/DepartmentComposite.hpp"
#include "include/PersonLeaf.hpp"
#include <algorithm>
#include <iostream>
#include <numeric>

DepartmentComposite::DepartmentComposite(std::string dep_name)
    : m_department_name(dep_name)
    , m_workers_count(0)
    , m_subdepartments_count(0) {}

DepartmentComposite::DepartmentComposite(DepartmentComposite& department){
    m_workers_count = department.m_workers_count;
    m_subdepartments_count = department.m_subdepartments_count;
    m_department_name = department.m_department_name;

    for(int i = 0; i < department.subworkers.size(); i++){
        subworkers.push_back(std::move(department.subworkers[i]));
    }
}

void DepartmentComposite::add_element(std::unique_ptr<WorkerInterface> subworker) {
    if (dynamic_cast<DepartmentComposite *>(subworker.get())) {
        m_subdepartments_count++;
    }
    if (dynamic_cast<PersonLeaf *>(subworker.get())) {
        m_workers_count++;
    }

    subworkers.push_back(std::move(subworker));
}

void DepartmentComposite::print_details() {
    std::cout << "====DEPARTMENT DETAILS===\n";
    std::cout << "department name: " << m_department_name << "\n";
    std::cout << "workers: " << m_workers_count << "\n";
    std::cout << "subdepartments_count: " << m_subdepartments_count << "\n";
    std::for_each(subworkers.begin(), subworkers.end(), [](std::unique_ptr<WorkerInterface> &subworker) {
        subworker->print_details();
    });
}

int DepartmentComposite::count_work() {
    int work = std::accumulate(
        subworkers.begin(), subworkers.end(), 0., [](int acc, std::unique_ptr<WorkerInterface> &worker) {
            return acc + worker->count_work();
        });

    return work;
}
