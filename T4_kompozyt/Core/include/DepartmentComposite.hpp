#ifndef DEPARTMENT_COMPOSITE_HPP
#define DEPARTMENT_COMPOSITE_HPP

#include "WorkerInterace.hpp"
#include <string>
#include <vector>
#include <memory>

class DepartmentComposite: public WorkerInterface{
private:
    std::string m_department_name;
    int m_workers_count;
    int m_subdepartments_count;

    std::vector<std::unique_ptr<WorkerInterface>> subworkers;

public:
    DepartmentComposite() = delete;
    DepartmentComposite(std::string dep_name);
    DepartmentComposite(DepartmentComposite&);

    void reset();
    void add_element(std::unique_ptr<WorkerInterface> subworker);

    int count_work() override;
    void print_details() override;
};

#endif
