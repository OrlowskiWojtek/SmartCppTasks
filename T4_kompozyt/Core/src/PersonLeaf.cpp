#include "include/PersonLeaf.hpp"

std::ostream &operator<<(std::ostream &os, Job job) {
    switch (job) {
    case Job::WORKER:
        os << "Worker";
        break;
    case Job::DEVELOPER:
        os << "Developer";
        break;
    case Job::MANAGER:
        os << "Manager";
        break;
    case Job::ASSASIN:
        os << "Assasin";
        break;
    case Job::BOSS:
        os << "Boss";
        break;
    }

    return os;
}

PersonLeaf::PersonLeaf(std::string name, std::string surname, Job job)
    : m_name(name)
    , m_surname(surname)
    , m_job(job) {

    switch (m_job) {
    case Job::WORKER:
        work_value = 1;
        break;
    case Job::DEVELOPER:
        work_value = 2;
        break;
    case Job::MANAGER:
        work_value = 3;
        break;
    case Job::ASSASIN:
        work_value = 100;
        break;
    case Job::BOSS:
        work_value = -3;
        break;
    }
}

void PersonLeaf::print_details() {
    std::cout << "===WORKERS DETAILS===\n";
    std::cout << "Name:      " << m_name << "\n";
    std::cout << "Last name: " << m_surname << "\n";
    std::cout << "Job:       " << m_job << std::endl;
}

int PersonLeaf::count_work() { return work_value; }
