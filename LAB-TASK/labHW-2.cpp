#include<iostream>
using namespace std;
int main ()
{
    int arr[4][3];
    int arrOdd[12];
    int x=0;
    cout<<"Enter the elements:";

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]%2 !=0)
            {
                arrOdd[x]=arr[i][j];
                x++;
            }
        }
    }
    cout<<"The odd numbers are:";
    for(int i=0; i<x; i++)
    {
        cout<<arrOdd[i]<<" ";
    }
    return 0;
}
