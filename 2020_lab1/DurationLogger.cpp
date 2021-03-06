//
// Created by fruggeri on 6/25/20.
//

#include "DurationLogger.h"
#include <iostream>

DurationLogger::DurationLogger(const std::string &name): name(name) {
    this->duration = std::clock();
    std::cout << " >>>>>>>>>>>>>> starting " << this->name << std::endl;
}

DurationLogger::~DurationLogger() {
    this->duration = std::clock() - this->duration;
    std::cout << " <<<<<<<<<<<<<<< ending " << this->name << ": " << this->duration << " clock ticks" << std::endl;
}
