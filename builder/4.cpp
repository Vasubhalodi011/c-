#include <iostream>
#include <string>
using namespace std;

class IndianState {
public:
    static std::string capital;
    static std::string language;
    static int population;

    static void displayDetails() {
        std::cout << "Capital: " << capital << std::endl;
        std::cout << "Language: " << language << std::endl;
        std::cout << "Population: " << population << std::endl;
    }
};

std::string IndianState::capital = "";
std::string IndianState::language = "";
int IndianState::population = 0;

int main() {
    IndianState::capital = "New Delhi";
    IndianState::language = "Hindi";
    IndianState::population = 1300000000;

    IndianState::displayDetails();

    return 0;
}

