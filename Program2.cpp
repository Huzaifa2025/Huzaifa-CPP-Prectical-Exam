#include<iostream>

using namespace std;

class Employee{
    private:
        string name;
        int salary;
        string designation;

    public:
        void setInfo()
        {
            cout << endl;
            cout << "- - - Set Employee Information - - -" << endl << endl;

            cout << "Enter Employee Name : ";
            getline(cin, name);
            // cin.ignore();

            cout << "Enter Employee Salary : ";
            cin >> salary;

            cout << "Enter Employee Designation : ";
            cin >> designation;
        }

        void getInfo()
        {
            cout << endl;
            cout << "- - - User Enterd Employee Information - - -" << endl << endl;
            cout << "Employee Name : " << name << endl;
            cout << "Employee Salary : " << salary << endl;
            cout << "Employee Designation : " << designation << endl;
        }
};

int main()
{
    Employee e;

    e.setInfo();
    e.getInfo();

    return 0;
}