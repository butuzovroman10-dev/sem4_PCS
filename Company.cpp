#include "Company.h"

Company::Company(const std::string& name) : companyName(name) {}

void Company::addEmployee(std::unique_ptr<IWorkable> emp) {
    employees.push_back(std::move(emp));
}

void Company::showAllWork() const {
    std::cout << "\n===== " << companyName << " - All employees working =====" << std::endl;
    for (const auto& emp : employees) {
        emp->work();
        std::cout << "-----------------------------------" << std::endl;
    }
}

void Company::analyzeAllEfficiency() const {
    std::cout << "\n===== Efficiency Analysis =====" << std::endl;
    for (const auto& emp : employees) {
        analyzeWorker(*emp);
    }
}

void Company::demonstrateTypeChecking() const {
    std::cout << "\n===== Runtime Type Information =====" << std::endl;
    for (const auto& emp : employees) {
        std::cout << "Object type: " << typeid(*emp).name() << std::endl;
        
        if (auto dev = dynamic_cast<Developer*>(emp.get())) {
            std::cout << "This is a Developer. Can access specific method: "
                      << dev->getName() << std::endl;
        } else if (auto mgr = dynamic_cast<Manager*>(emp.get())) {
            std::cout << "This is a Manager. Specific: "
                      << mgr->getName() << std::endl;
        } else if (auto tst = dynamic_cast<Tester*>(emp.get())) {
            std::cout << "This is a Tester. Specific: "
                      << tst->getName() << std::endl;
        }
    }
    std::cout << std::endl;
}