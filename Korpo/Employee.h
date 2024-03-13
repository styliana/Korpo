#pragma once
#include "KorpoWorkers.h"

class Manager; // Forward declaration

class Employee : public KorpoWorkers {
public:
    Employee(std::string name, std::string lastname, int salary);

};
