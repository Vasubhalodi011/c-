#include <iostream>
#include <string>
using namespace std;

class Room {
private:
    int roomNumber;
    string roomType;
    
public:
    void readRoomDetails() {
        cout << "Enter Room Number: ";
        cin >> roomNumber;
        
        cout << "Enter Room Type: ";
        cin.ignore();
        getline(cin, roomType);
    }
    
    void printRoomDetails() {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Room Type: " << roomType << endl;
    }
};

class House {
private:
    string houseName;
    string address;
    Room rooms[5];
    
public:
    void readHouseDetails() {
        cout << "Enter House Name: ";
        cin.ignore();
        getline(cin, houseName);
        
        cout << "Enter Address: ";
        getline(cin, address);
        
        cout << "Enter Room Details for each room: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Room " << i + 1 << " - " << endl;
            rooms[i].readRoomDetails();
        }
    }
    
    void printHouseDetails() {
        cout << "House Name: " << houseName << endl;
        cout << "Address: " << address << endl;
        cout << "Room Details: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Room " << i + 1 << " - " << endl;
            rooms[i].printRoomDetails();
        }
    }
};

int main() {
    House house;
    house.readHouseDetails();
    cout << "\nHouse Details:\n";
    house.printHouseDetails();
    return 0;
}
