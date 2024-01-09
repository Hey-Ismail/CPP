#include<iostream>
using namespace std;

class SalaryAccount{
protected :
    double SalaryBalance = 205000;
    string Name,Occupation;
    char PhoneNumber[11];
    string SalaryAccountNumber = "101.23a.4b";

public:
    SalaryAccount(string a,string b,char phone[])
    {
        Name=a;
        Occupation=b;
        for(int i = 0; i < 12; i++) 
      {
         PhoneNumber[i] = phone[i];
      }
    }
     void PrintSalary()
    {
        cout<<"Name: "<<Name<<endl;
        cout<<"Occupation: "<<Occupation<<endl;
        cout<<"Phone Number: "<<PhoneNumber<<endl;
        cout<<"Account Number: "<<SalaryAccountNumber<<endl;
        cout<<"Salary Balance: "<<SalaryBalance<<endl;

    }

    double TaxReturnSalary()
    {
        int tax;
        if(SalaryBalance>=20000)
        {
           tax=SalaryBalance*0.3;
           SalaryBalance=SalaryBalance-tax;
           cout<<"Tax: "<<tax<<endl;

        }
    }
    ~SalaryAccount()
    {
        cout<<"Updated balance: "<<SalaryBalance<<endl;
    }


};

int main()
{
    SalaryAccount ac1("Ismail","Student","01812360672");
    ac1.PrintSalary();
    ac1.TaxReturnSalary();
}
