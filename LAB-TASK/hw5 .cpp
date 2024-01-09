#include <iostream>
using namespace std;

void getNumbers() {

    //Dynamic Memory Allocation
    int input;
    string reply;
    int element;
    int arr[3];
    int *ptr;
    cout<<"Enter the first three element: ";
    for (int i = 0; i<3;i++){
        cin>>arr[i];
    }

    cout<<"Do you want to add more elements?"<<endl;
    cin>>reply;

    if(reply=="YES"||reply=="yes"){

        cout<<"How many elements do you want to add?"<<endl;
        cin>>element;

        ptr=new int [element+3]; //Dynamic Memory Allocation

        for (int i = 0; i<3;i++){

        ptr[i]=arr[i];
    }

        cout<<"Enter the elements that you want to add "<<endl;

        for(int i=3; i<element+3; i++){
            cin>>ptr[i];
        }

        cout<<"Inputted elements are: ";

        for(int i=0; i<element+3; i++){
            cout<<ptr[i]<<" ";
        }

        delete [] ptr; //Memory Deallocation

    }
    else{
        cout<<"Inputted element is: "<<input<<endl;
    }

}


int main() {
    getNumbers();

    return 0;
}

