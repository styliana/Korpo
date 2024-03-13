#pragma once

#include "KorpoWorkers.h"
#include <iostream>

class Employee; // Forward declaration

class Manager : public KorpoWorkers {
private:
    int numSubordinates; // Liczba podwładnych

public:
    Manager(std::string name, std::string lastname, double salary, int podwladni);

    void IntroduceYourself() const override;

    // Funkcja dodająca podwładnego
    void addSubordinate();

    // Funkcja usuwająca podwładnego
    void deleteSubordinate();

    // Przyjacielska funkcja zmieniająca wynagrodzenie pracownika
    friend void changeSalary(Manager& manager, Employee& employee, double newSalary);
    double GetNewSalaryFromUser();
};
