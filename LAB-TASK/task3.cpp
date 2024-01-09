#include <iostream>
using namespace std;

class Calculator 
{
public:
    int add(int a, int b) 
    {
        int add = a+b;
        cout<<"int sum: "<<add<<endl;
    }

    float add(float a,float b, float c)
    {
        float add = a+b+c;
        cout<<"float sum: "<<add<<endl;
    }

};

int main()
{
    Calculator a1;
    a1.add(3,7);
    a1.add(3.5,4.5,2.0); 

    return 0;
}
