#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int arr1[3][3],arr2[3][3]; 
    int i,j,k;
    int result[3][3] = {0};

    cout<<"Enter the elements of first matrix:";
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"First Matrix elements:"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the elements of second matrix:";
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<"Second Matrix elements:"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                result[i][j]=result[i][j]+arr1[i][k]*arr2[k][j];
            }
        }

    }
        cout<<"Multiplication of two matrices is:"<<endl;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}
