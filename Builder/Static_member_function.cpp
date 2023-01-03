// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class states{
  public:

  static void func(){
       static char GJ[20]={"Gujarat"};
       static char AP[20]={"Arunachal Pradesh"};
       static char ASM[20]={"Assam"};
       static char BR[20]={"Bihar"};
       static char CHD[20]={"Chhattisgarh"};
       static char GOA[20]={"Goa"};
       cout<<GJ<<endl;
       cout<<AP<<endl;
       cout<<ASM<<endl;
       cout<<BR<<endl;
       cout<<CHD<<endl;
       cout<<GOA<<endl;
  }

};
int main() {
    cout<<"The States of India are the following: "<<endl;

    states s1;
    s1.func();
    return 0;
}
