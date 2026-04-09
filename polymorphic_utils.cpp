#include "polymorphic_utils.h"
#include <iostream>

void analyzeWorker(const IWorkable& worker) {
    std::cout << "Analyzing worker" << std::endl;
    worker.work();
    double eff = worker.getEfficiency();
    std::cout << "Efficiency: " << eff * 100 << "%" << std::endl;
    
    if (eff > 0.8) {
        std::cout << "Status: Excellent performer" << std::endl;
    } else if (eff > 0.5) {
        std::cout << "Status: Satisfactory" << std::endl;
    } else {
        std::cout << "Status: Needs improvement" << std::endl;
    }
    std::cout << std::endl;
}