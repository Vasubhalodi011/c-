#include <iostream>
#include <string.h>
using namespace std;

class Employee {
  private:
    int id;
    char name[100];
    char role[100];
    int salary;
    int experience;
    char address[100];
    char email[100];
    char contact[100];

public:
    // Setter methods
    void setId(int empId) {
        id = empId;
    }

    void setName(char empName) {
        name = empName;
    }

    void setRole(char empRole) {
        role = empRole;
    }

    void setSalary(int empSalary) {
        salary = empSalary;
    }

    void setExperience(int empExperience) {
        experience = empExperience;
    }

    void setAddress(char empAddress) {
        address = empAddress;
    }

    void setEmail(char empEmail) {
        email = empEmail;
    }

    void setContact(char empContact) {
        contact = empContact;
    }

    // Getter methods
    int getId() const {
        return id;
    }

    std::string getName() const {
        return name;
    }

    std::string getRole() const {
        return role;
    }

    double getSalary() const {
        return salary;
    }

    int getExperience() const {
        return experience;
    }

    std::string getAddress() const {
        return address;
    }

    std::string getEmail() const {
        return email;
    }

    std::string getContact() const {
        return contact;
    }
};

int main() {
    std::vector<Employee> employees;

    // Get 5 records for employees
    for (int i = 0; i < 5; ++i) {
        Employee employee;

        int id;
        std::string name, role, address, email, contact;
        double salary;
        int experience;

        std::cout << "Enter Employee ID: ";
        std::cin >> id;

        std::cin.ignore(); // Ignore the newline character left in the input buffer

        std::cout << "Enter Employee Name: ";
        std::getline(std::cin, name);

        std::cout << "Enter Employee Role: ";
        std::getline(std::cin, role);

        std::cout << "Enter Employee Salary: ";
        std::cin >> salary;

        std::cout << "Enter Employee Experience (in years): ";
        std::cin >> experience;

        std::cin.ignore();

        std::cout << "Enter Employee Address: ";
        std::getline(std::cin, address);

        std::cout << "Enter Employee Email: ";
        std::getline(std::cin, email);

        std::cout << "Enter Employee Contact: ";
        std::getline(std::cin, contact);

        employee.setId(id);
        employee.setName(name);
        employee.setRole(role);
        employee.setSalary(salary);
        employee.setExperience(experience);
        employee.setAddress(address);
        employee.setEmail(email);
        employee.setContact(contact);

        employees.push_back(employee);
    }

    // Display the employee records
    std::cout << "\nEmployee Records:\n";
    for (const auto& emp : employees) {
        std::cout << "ID: " << emp.getId() << ", Name: " << emp.getName() << ", Role: " << emp.getRole()
                  << ", Salary: " << emp.getSalary() << ", Experience: " << emp.getExperience()
                  << ", Address: " << emp.getAddress() << ", Email: " << emp.getEmail() << ", Contact: " << emp.getContact() << std::endl;
    }

    return 0;
}

