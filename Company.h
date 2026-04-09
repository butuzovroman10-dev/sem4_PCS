#ifndef COMPANY_H
#define COMPANY_H

#include <vector>
#include <memory>
#include <iostream>
#include <typeinfo>
#include "IWorkable.h"
#include "Employee.h"
#include "Developer.h"
#include "Manager.h"
#include "Tester.h"
#include "polymorphic_utils.h"

class Company {
private:
    std::string companyName;
    std::vector<std::unique_ptr<IWorkable>> employees;

public:
    Company(const std::string& name);
    
    void addEmployee(std::unique_ptr<IWorkable> emp);
    
    void showAllWork() const;
    
    void analyzeAllEfficiency() const;
    
    void demonstrateTypeChecking() const;
    
    ~Company() = default;
};

#endif