#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;

public:
    void setPersonInfo(string person_name, int person_age) {
        name = person_name;
        age = person_age;
    }

    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years old" << endl;
    }
};

// Derived class EmploymentDetails
class EmploymentDetails : public Person {
protected:
    string position;
    double salary;

public:
    void setEmploymentDetails(string job_position, double job_salary) {
        position = job_position;
        salary = job_salary;
    }

    void displayEmploymentDetails() {
        cout << "Position: " << position << endl;
        cout << "Salary: $" << salary << endl;
    }
};

// Derived class Employee using multiple inheritance
class Employee : public Person, public EmploymentDetails {
public:
    void setEmployeeInfo(string employee_name, int employee_age, string job_position, double job_salary) {
        setPersonInfo(employee_name, employee_age);
        setEmploymentDetails(job_position, job_salary);
    }

    void displayEmployeeInfo() {
        displayPersonInfo();
        displayEmploymentDetails();
    }
};

int main() {
    Employee employee;
    employee.setEmployeeInfo("John Doe", 30, "Software Engineer", 75000);
    cout << "Employee Information:" << endl;
    employee.displayEmployeeInfo();

    return 0;
}

