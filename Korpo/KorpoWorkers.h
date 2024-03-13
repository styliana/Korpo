#pragma once

#include <string> // Include necessary header file

class Manager; // Forward declaration of Manager class
class Employee; // Forward declaration of Employee class

class KorpoWorkers {
protected:
    std::string name;
    std::string lastname;
    double salary; // Changed to double to match Manager's constructor

public:
    KorpoWorkers(std::string name, std::string lastname, double salary);

    virtual void IntroduceYourself() const;

    // Method to change salary
    void changeSalary(double newSalary);

    // Method to get salary
    double getSalary() const;


    // Friend function declaration
    friend void changeSalary(Manager& manager, Employee& employee, double newSalary);
    //    double GetNewSalaryFromUser();
};
