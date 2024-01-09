#include<iostream>
using namespace std;
int main ()
{
    int arr[3][3];
    int even[3], odd[3], negative[3];
    int x=0, y=0, z=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        if(arr[0][i]%2==0)
        {
            even[x]=arr[0][i];
            x++;
        }
    }

    for(int i=0; i<3; i++)
    {
        if(arr[1][i]%2 !=0)
        {
            odd[y]=arr[1][i];
                   y++;
        }
    }
    for(int i=0; i<3; i++)
    {
        if(arr[2][i] <0 )
        {
            odd[z]=arr[2][i];
                   z++;
        }
    }

    cout<<"This is even number:";
    for(int i=0; i<x; i++)
    {
        cout<<even[i]<<" "<<endl;
    }
    cout<<"This is odd number:";
    for(int i=0; i<y; i++)
    {
        cout<<odd[i]<<" "<<endl;
    }
    cout<<"This is negative number:";
    {
        for(int i=0; i<z; i++)
            cout<<negative[i]<<" "<<endl;
    }
    return 0;

}
