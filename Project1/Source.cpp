
#include <iostream>
using namespace std;

//class Employee {
//public:
//    Employee() {
//        cout << "call to emp Ctr\n";
//    }
//    virtual int EmpName()
//    {
//        cout << "Call to Emp class Name\n";
//        return 0;
//    }
//    int EmpID()
//    {
//        cout << "Call to Emp class ID\n";
//        return 0;
//    }
//};
//class Manager : public Employee
//{
//public:
//    Manager() {
//        cout << "call @Managr ctr\n";
//    }
//    /*int EmpName() {
//        cout << "call @ManagrEmp name\n";
//        return 0;
//    }*/
//    /*int EmpID() {
//        cout << "call @ManagrEmp ID\n";
//        return 0;
//    }*/
//};
//class Labour : public Employee {
//public:
//    Labour() {
//        cout << "call to Labour Ctr\n";
//    }
//    int EmpName() {
//        cout << "call @LabourEmp name\n";
//        return 0;
//    }
//    int EmpID() {
//        cout << "call @LabourEmp ID\n";
//        return 0;
//    }
//};

class Vehicle {
public:
    virtual int GetNumberOfTyres() = 0; 
    /*{
        cout << "4 tyre @Vehicle\n";
        return 0;
    }*/
};

class i20 : public Vehicle {
public:
    int GetNumberOfTyres() {
        cout << "4 tyre @Auto\n";
        return 0;
    }
};

class baleno : public Vehicle {
public:
    int GetNumberOfTyres() {
        cout << "4 tyre @Auto\n";
        return 0;
    }
};

class AutoRicshaw : public Vehicle{
public:
    int GetNumberOfTyres() {
        cout << "3 tyre @Auto\n";
        return 0;
    }
   
};

class Bike : public Vehicle{
public:
    int GetNumberOfTyres() {
        cout << "2 tyre @bike\n";
        return 0;
    }
};

class cycle : public Vehicle {
public:
    int GetNumberOfTyres() {
        cout << "2 tyre @cycle\n";
        return 0;
    }
};


int main() {
    Vehicle* Obj = new AutoRicshaw();
    Obj->GetNumberOfTyres();

    Vehicle* Obj1 = new i20();
    Obj1->GetNumberOfTyres();

    Vehicle* Obj2 = new baleno();
    Obj2->GetNumberOfTyres();

    Vehicle* obj3 = new Bike();
    obj3->GetNumberOfTyres();

    Vehicle* obj4 = new cycle();
    obj4->GetNumberOfTyres();

    return 0;
}
