#pragma once

#include "KorpoWorkers.h"
#include <iostream>

class Employee; // Forward declaration is needed

class Manager : public KorpoWorkers {
private:
    int numSubordinates;

public:
    Manager(std::string name, std::string lastname, double salary, int podwladni);

    void IntroduceYourself() const override;

    // Funkcja dodaj¹ca podw³adnego
    void addSubordinate();

    // Funkcja usuwaj¹ca podw³adnego
    void deleteSubordinate();

    // Przyjacielska funkcja zmieniaj¹ca wynagrodzenie pracownika
    friend void changeSalary(Manager& manager, Employee& employee, double newSalary);
    double GetNewSalaryFromUser();
};
