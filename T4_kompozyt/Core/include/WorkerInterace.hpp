#ifndef WORKER_INTERFACE_HPP
#define WORKER_INTERFACE_HPP

class WorkerInterface{
protected:
    int work_value;

public:
    virtual int count_work() = 0;
    virtual void print_details() = 0;
};

#endif
