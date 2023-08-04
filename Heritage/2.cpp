#include <iostream>
#include <string>
using namespace std;

class Animal {
  public :
    string name;
    int age;

  public :
    void set_value(string animal_name, int animal_age) {
        name = animal_name;
        age = animal_age;
    }
};

class Zebra : public Animal {
  public :
    void display() {
        cout << "Zebra Name: " << name << endl;
        cout << "Zebra Age: " << age << " years old" << endl;
        cout << "Place of Origin: Africa" << endl;
    }
};

class Dolphin : public Animal {
  public :
    void display() {
        cout << "Dolphin Name: " << name << endl;
        cout << "Dolphin Age: " << age << " years old" << endl;
        cout << "Place of Origin: Ocean" << endl;
    }
};

int main() {
    Zebra zebra;
    zebra.set_value("coco", 5);
    zebra.display();

    Dolphin dolphin;
    dolphin.set_value("Daisy", 10);
    dolphin.display();

    return 0;
}

