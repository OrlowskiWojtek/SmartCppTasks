#ifndef PERSON_LEAF_HPP
#define PERSON_LEAF_HPP

#include "WorkerInterace.hpp"
#include <string>
#include <iostream>

enum class Job{WORKER, DEVELOPER, MANAGER, ASSASIN, BOSS}; 
std::ostream& operator<<(std::ostream&, Job);

class PersonLeaf: public WorkerInterface{
    std::string m_name;
    std::string m_surname;
  
    Job m_job;
public:
    PersonLeaf() = delete;
    PersonLeaf(std::string name, std::string surname, Job job);

    int count_work() override;
    void print_details() override;
};

#endif
