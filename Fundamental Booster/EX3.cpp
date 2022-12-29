#include <iostream>
using namespace std;
void togglechar(char s[]){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+'a'-'A';
        }
        else if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]+'A'-'a';
        }
    }
}
int main()
{
    char check[] = "azim";

    togglechar(check);
    cout<<check;
}
