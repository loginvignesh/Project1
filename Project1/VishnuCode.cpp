#include<iostream>
#include<vector>
#include<string>
#include<map>

using namespace std;


class Employees;
class Labours;



multimap<int, Labours*> Empmap;
class Employees
{
public:
    virtual void GetData() = 0;
    virtual int PutData() = 0;
    virtual int GetType() = 0;
};
class Labours :public Employees
{
    int Id;
    char Name[25];
    int Age;
    long Salary;





public:
    ~Labours()
    {




    }


    void GetData()
    {




        cout << "\n\tEnter Labour Id : ";
        cin >> Id;


        cout << "\n\tEnter Labour Name : ";
        cin >> Name;





        cout << "\n\tEnter Labour Age : ";
        cin >> Age;





        cout << "\n\tEnter Employee Salary : ";
        cin >> Salary;
    }





    int PutData()
    {
        cout << "\n" << Id << "\t" << Name << "\t" << Age << "\t" << Salary;
        return 0;
    }
    int GetType()
    {
        return 1;
    }




};
class Manager :public Employees
{





public:
    int Id;
    char Name[25];
    int Age;
    long Salary;
    Manager()
    {
        this->Id = -1;
        this->Age = -1;
        this->Salary = -1;
    }
    ~Manager()
    {
        for (auto i = hold_labours.begin(); i != hold_labours.end(); i++)
        {
            delete* i;
        }
    }
    void GetIncentive()
    {
    }


    void GetData()
    {


        cout << "\n\tEnter Manager Id : ";
        cin >> Id;


        cout << "\n\tEnter Manager Name : ";
        cin >> Name;


        cout << "\n\tEnter Manager Age : ";
        cin >> Age;




        cout << "\n\tEnter Manager Salary : ";
        cin >> Salary;
    }




    int PutData()
    {


        cout << "\n" << Id << "\t" << Name << "\t" << Age << "\t" << Salary << "\t";
        return 0;
    }
    void printdata()
    {


        vector <Labours*>::iterator labitr;
        for (labitr = hold_labours.begin(); labitr != hold_labours.end(); labitr++)
        {
            (*labitr)->PutData();
        }
    }
    int GetType()
    {
        return 2;
    }
    vector <Labours*> hold_labours;
};





int main()
{
    int i, j, split = 5, return_type;
    int size_of_labour, size_of_manager;
    cout << "enter how many manager u want :";
    cin >> size_of_manager;
    cout << "\nenter how many labours u want :";
    cin >> size_of_labour;




    Labours** L = new Labours * [size_of_labour];


    Manager** M = new Manager * [size_of_manager];
    int count = 0;
    while (size_of_manager > size_of_labour)
    {
        cout << "\nEnter more number of labours\n";
        cout << "enter how many manager u want :";
        cin >> size_of_manager;
        cout << "\nenter how many labours u want :";
        cin >> size_of_labour;
    }
    for (i = 0; i < size_of_manager; i++)
    {
        cout << "\n Enter details of Manager " << i + 1;
        M[i] = new Manager();


        M[i]->GetData();

        for (j = 0; j < size_of_labour / size_of_manager; j++)
        {
            cout << "\nEnter details of Labours " << count + 1;
            L[count] = new Labours();


            L[count]->GetData();
            Empmap.insert(pair<int, Labours*>(M[i]->Id, L[count]));
            M[i]->hold_labours.push_back(L[count]);
            count += 1;
        }


    }
    if (count < size_of_labour)
    {


        cout << "\nEnter details of Labours " << count + 1;
        L[count] = new Labours();
        L[count]->GetData();
        M[size_of_manager - 1]->hold_labours.push_back(L[count]);
        count += 1;


    }


    for (i = 0; i < size_of_manager; i++)
    {
        cout << "\n.........details of manager " << i + 1 << "............\n";
        cout << "\nId\tName\tAge\tSalary\n";
        M[i]->PutData();
        cout << "\n.........details of labour under manager " << i + 1 << "............\n";
        cout << "\nId\tName\tAge\tSalary\n";
        M[i]->printdata();
        /*delete M[i];*/
    }





    multimap<int, Labours*>::iterator empitr;
    for (empitr = Empmap.begin(); empitr != Empmap.end(); empitr++)
    {
        empitr->first;
        empitr->second;
        Employees* obj = empitr->second;
        return_type = obj->GetType();
        if (return_type == 1)
        {
            cout << "Labour type";


        }
        else
        {
            cout << "\nManager Type";


            ((Manager*)obj)->GetIncentive();
        }
    }
    cout << "\n\tKEY\tELEMENT\n";
    for (empitr = Empmap.begin(); empitr != Empmap.end(); ++empitr) {
        cout << '\n\t' << empitr->first
            << "\t" << empitr->second->PutData() << '\n';



    }
    cout << endl;


    //for (i = 0; i < size_of_labour; i++)
    //{
    //    cout << "\nEnter details of " << i + 1 << "Labours";
    //    L[i] = new Labours();
    //    Lid.push_back(L[i]->SetID());
    //    L[i]->GetData();
    //       
    //}


    //cout << "enter how many managers u want mantain these labours :";
    //cin >> size_of_manager;


    //Manager** M = new Manager * [size_of_manager];
    //for (i = 0; i < size_of_manager; i++)
    //{
    //    cout << "\n Enter details of " << i + 1 << " Manager";
    //    M[i] = new Manager();
    //    M[i]->GetData();
    //    for (j = 0; j < size_of_labour/2; j++)
    //        M[i]->hold_labours.push_back(L[j]);
    //}
    ///*cout << "\n-------Details of Manager----------";
    //for (i = 0; i < size_of_manager; i++)
    //{
    //    M[i]->SetID();
    //    M[i]->PutData();
    //    M[i]->printdata();
    //    delete M[i];
    //}*/
    //delete[] M;
    /*delete M;*/
    return 0;
}
