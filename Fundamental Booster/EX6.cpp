#include <iostream>
using namespace std;


int main(){
    int siz,i;
    cout<<"Enter the size of array"<<endl;
    cin>>siz;

    int arr[siz];
    cout<<"Enter the inner element of the array:"<<endl;
    for(i=0;i<siz;i++){
        cin>>arr[i];
    }

    for(i=0;i<siz;i++){
        cout<<"\n"<<arr[i]*arr[i]*arr[i];
    }
}

