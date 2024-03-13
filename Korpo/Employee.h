#pragma once
#include "KorpoWorkers.h"

class Manager; // Forward declaration needed

class Employee : public KorpoWorkers {
public:
    Employee(std::string name, std::string lastname, int salary);

};
