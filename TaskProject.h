#ifndef TASKPROJECT_H
#define TASKPROJECT_H

#include <string>
#include <vector>
#include "Employee.h"

class TaskProject {
private:
    std::string projectName;
    std::vector<Employee*> assignedEmployees;
    int priority;

public:
    TaskProject(const std::string& name, int prio);
    void assignEmployee(Employee* emp);
    void removeEmployee(Employee* emp);
    void executeProject() const;
    std::string getProjectName() const;
    int getPriority() const;
};

#endif