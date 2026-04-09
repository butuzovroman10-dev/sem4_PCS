#include "TaskProject.h"
#include <iostream>

TaskProject::TaskProject(const std::string& name, int prio)
    : projectName(name), priority(prio) {}

void TaskProject::assignEmployee(Employee* emp) {
    assignedEmployees.push_back(emp);
}

void TaskProject::removeEmployee(Employee* emp) {
    for (auto it = assignedEmployees.begin(); it != assignedEmployees.end(); ++it) {
        if (*it == emp) {
            assignedEmployees.erase(it);
            break;
        }
    }
}

void TaskProject::executeProject() const {
    std::cout << "Executing project: " << projectName 
              << " (Priority: " << priority << ")" << std::endl;
    for (const auto& emp : assignedEmployees) {
        emp->work();
    }
}

std::string TaskProject::getProjectName() const {
    return projectName;
}

int TaskProject::getPriority() const {
    return priority;
}