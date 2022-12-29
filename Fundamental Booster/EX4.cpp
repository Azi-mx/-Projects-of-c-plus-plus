#include <iostream>
using namespace std;

int main()
{   
    int i;
    string check;
    cout<<"Enter the string";
    cin>>check;

    for(i=0;i<check.length();i++){
        if(check[i]=='a'||check[i]=='e'||check[i]=='i'||check[i]=='o'||check[i]=='u'){
            if(check[i]=='A'||check[i]=='E'||check[i]=='I'||check[i]=='O'||check[i]=='U'){
            cout<<"It is a vowel";
            }
        }
        else{
            cout<<"it is a consonant";
        }
    } 
}