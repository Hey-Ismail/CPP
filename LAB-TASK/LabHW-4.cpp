#include<iostream>
using namespace std;

int main()
{
    char arr[2][2];
    cout<<"Enter the numbers: ";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            //cout<<"row :"<<i<<"column :"<<j<<endl;
            cin>>arr[i][j];

            if(arr[i][j]=='@' || arr[i][j]=='#' || arr[i][j]=='$' || arr[i][j]=='%')
            {
                cout<<"Invalid input"<<endl;
                return 0;
            }
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
