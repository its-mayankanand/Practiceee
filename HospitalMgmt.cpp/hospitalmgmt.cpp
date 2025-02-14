#include <iostream>
#include <vector>
using namespace std;

// Base class: Person
class Person 
{
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}

    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class: Patient
class Patient : public Person 
{
    int patientID;
    string disease;
public:
    Patient(string n, int a, int id, string dis) : Person(n, a), patientID(id), disease(dis) {}

    void displayPatient() 
    {
        displayPerson();
        cout << "Patient ID: " << patientID << ", Disease: " << disease << endl;
    }
};

// Hospital Class
class Hospital {
    vector<Patient> patients;
public:
    void addPatient(string name, int age, int id, string disease) {
        patients.push_back(Patient(name, age, id, disease));
        cout << "Patient added successfully!\n";
    }

    void displayPatients() {
        if (patients.empty()) {
            cout << "No patients in the hospital.\n";
            return;
        }
        for (auto &p : patients) {
            p.displayPatient();
            cout << "------------------------\n";
        }
    }
};

int main() 
{
    Hospital hospital;
    int choice;

    while (true) 
    {
        cout << "\nHospital Management System\n";
        cout << "1. Add Patient\n";
        cout << "2. Display Patients\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) 
        {
            string name, disease;
            int age, id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Patient ID: ";
            cin >> id;
            cout << "Enter Disease: ";
            cin >> disease;
            hospital.addPatient(name, age, id, disease);
        } 
        else if (choice == 2) 
        {
            hospital.displayPatients();
        } 
        else if (choice == 3) 
        {
            cout << "Exiting...\n";
            break;
        } 
        else 
        {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
