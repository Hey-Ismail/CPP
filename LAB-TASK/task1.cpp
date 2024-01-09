#include<iostream>
using namespace std;

class Account
{
protected :
    double SalaryBalance = 500000;
    string Name,Occupation;
    char PhoneNumber[11];
    string SalaryAccountNumber = "101.23a.4b";

public:

    void GetParentSalaryAccInfo(string name,string occupation,char phone[11])
    {
        Name = name;
        Occupation = occupation;
        for(int i = 0; i < 12; i++) 
      {
         PhoneNumber[i] = phone[i];
      }

    }
    void PrintSalaryinfo()
    {
        cout<<"Name: "<<Name<<endl;
        cout<<"Occupation: " <<Occupation<<endl;
        cout<<"Phone Number: "<<PhoneNumber<<endl;
        cout<<"Account Number: "<<SalaryAccountNumber<<endl;
        cout<<"Salary Balance: "<<SalaryBalance<<endl;

    }
    ~Account()
    {
        cout<<"Updated Balance: "<<SalaryBalance<<endl;
    }
    Account
    {
        cout<<"Default Destructor";
    };
};

class Utility : public Account
{
private:

    double ElectricityBill,GasBill,Transportation,Food;

protected :

    double HouseRent;

public:
    void SetUtilityInfo(double a,double b,double c,double d,double e)
    {
        ElectricityBill=a;
        GasBill=b;
        Transportation = c;
        Food = d;
        HouseRent = e;

    }
    void PrintUtilityInfo()
    {
        cout<<"Electricity Bill: "<<ElectricityBill<<endl;
        cout<<"GasBill: "<<GasBill<<endl;
        cout<<"Transportation: "<<Transportation<<endl;
        cout<<"Food: "<<Food<<endl;
        cout<<"House Rent: "<<HouseRent<<endl;
    }
    void Payment()
    {
        SalaryBalance = SalaryBalance-(ElectricityBill+GasBill+Transportation+Food+HouseRent);
    }
};

int main()
{
    Utility a1;
    a1.GetParentSalaryAccInfo("Ismail","Student","0182346572");
    a1.PrintSalaryinfo();
    a1.SetUtilityInfo(2000,1000,3000,5000,10000);
    a1.PrintUtilityInfo();
    a1.Payment();
}

