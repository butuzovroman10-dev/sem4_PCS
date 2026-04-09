#include "Company.h"
#include "polymorphic_utils.h"
#include <memory>
#include <iostream>

int main() {
    Company myCompany("TechCorp");

    myCompany.addEmployee(std::make_unique<Developer>("Alice", 101, 75000, "C++", 450));
    myCompany.addEmployee(std::make_unique<Manager>("Bob", 102, 90000, 8, 5));
    myCompany.addEmployee(std::make_unique<Tester>("Charlie", 103, 65000, 25, "Selenium"));
    myCompany.addEmployee(std::make_unique<Developer>("Diana", 104, 80000, "Python", 600));
    myCompany.addEmployee(std::make_unique<Manager>("Eve", 105, 95000, 12, 7));

    myCompany.showAllWork();

    myCompany.analyzeAllEfficiency();

    myCompany.demonstrateTypeChecking();

    std::cout << "\n===== Testing virtual destructor =====" << std::endl;
    std::unique_ptr<IWorkable> ptr = std::make_unique<Developer>("Test", 999, 1, "Java", 100);
    ptr->work();

    return 0;
}