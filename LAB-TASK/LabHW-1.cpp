#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int arr1[3][3]= {10,50,35,2,66,56,1,100,55};
    int arr2[3][3]= {100,50,80,200,5,75,1,5,9};
    int arr3[3][3]= {50,20,3,202,35,44,5,106,30};
    int arr4[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            arr4[i][j]=arr1[i][j]+arr2[i][j]-arr3[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr4[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
