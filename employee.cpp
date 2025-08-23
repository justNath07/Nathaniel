#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string empName, empId, address, mailId, mobileNo;
public:
    void getDetails() {
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, empName);
        cout << "Enter Employee ID: ";
        getline(cin, empId);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Mail ID: ";
        getline(cin, mailId);
        cout << "Enter Mobile No: ";
        getline(cin, mobileNo);
    }

    void displayDetails() {
        cout << "\n--- Employee Details ---\n";
        cout << "Name: " << empName << "\n";
        cout << "ID: " << empId << "\n";
        cout << "Address: " << address << "\n";
        cout << "Mail ID: " << mailId << "\n";
        cout << "Mobile No: " << mobileNo << "\n";
    }
};

class Salary : public Employee {
protected:
    double BP; 
    double DA, HRA, PF, staffClubFund, grossSalary, netSalary;
public:
    void getSalaryDetails() {
        cout << "Enter Basic Pay (BP): ";
        cin >> BP;

        DA = 0.97 * BP;
        HRA = 0.10 * BP;
        PF = 0.12 * BP;
        staffClubFund = 0.001 * BP;

        grossSalary = BP + DA + HRA;
        netSalary = grossSalary - PF - staffClubFund;
    }

    void displayPaySlip() {
        displayDetails();
        cout << "\n--- Salary Details ---\n";
        cout << "Basic Pay: " << BP << "\n";
        cout << "DA (97% of BP): " << DA << "\n";
        cout << "HRA (10% of BP): " << HRA << "\n";
        cout << "PF (12% of BP): " << PF << "\n";
        cout << "Staff Club Fund (0.1% of BP): " << staffClubFund << "\n";
        cout << "Gross Salary: " << grossSalary << "\n";
        cout << "Net Salary: " << netSalary << "\n";
    }
};


class AssistantProfessor : public Salary {};
class AssociateProfessor : public Salary {};
class Professor : public Salary {};

int main() {
    int choice;
    cout << "Select Employee Type:\n";
    cout << "1. Assistant Professor\n";
    cout << "2. Associate Professor\n";
    cout << "3. Professor\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        AssistantProfessor ap;
        ap.getDetails();
        ap.getSalaryDetails();
        ap.displayPaySlip();
    } 
    else if (choice == 2) {
        AssociateProfessor asp;
        asp.getDetails();
        asp.getSalaryDetails();
        asp.displayPaySlip();
    } 
    else if (choice == 3) {
        Professor prof;
        prof.getDetails();
        prof.getSalaryDetails();
        prof.displayPaySlip();
    } 
    else {
        cout << "Invalid Choice!";
    }

    return 0;
}

