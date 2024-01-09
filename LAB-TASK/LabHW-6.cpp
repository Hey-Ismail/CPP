#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int arr[3][3],transpose[3][3];
    int i,j;

    cout<<"Enter matrix Elements: ";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The Matrix is..."<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
    cout<<"The transpose Matrix is..."<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
