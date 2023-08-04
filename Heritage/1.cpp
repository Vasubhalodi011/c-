#include <iostream>
#include <string.h>
using namespace std;

class Mother {
   public:
    void display() {
        cout << "This is the mother class." << endl;
    }
};

class Daughter : public Mother {
   public:
    void display() {
        cout << "This is the daughter class." << endl;
    }
};

int main() {
    Daughter daughter;
    daughter.display();

    return 0;
}

