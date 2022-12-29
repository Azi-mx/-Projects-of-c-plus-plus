#include <iostream>
using namespace std;

int main()
{
    int i,count=0;
    string check;
    cout<<"Enter the string\n";
    cin>>check;

    for(i=0;i<check.length();i++){
        if(isdigit(i)==false){
            count = 1;
            break;
        }
        else{
            count = 0;
        }
    }
    if(count==0){
        cout<<"It is an integer";
    }
    else{
        cout<<"It is a string";
    }
}
