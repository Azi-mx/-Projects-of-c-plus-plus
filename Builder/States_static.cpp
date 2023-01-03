// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Some{
    public:
   static string state1;
   static string state2;
   static string state3;
   static string state4;
   static void getstate(){
       cout<<"\n\nThese are the states of the india:"<<endl;
        cout<<state1<<endl;
        cout<<state2<<endl;
        cout<<state3<<endl;
        cout<<state4<<endl;
    }

};
string Some::state1="Gujarat";
string Some::state2="Maharashtra";
string Some::state3="Punjab";
string Some::state4="Bihar";
int main() {
   Some s1;
   s1.getstate();
  //Some::getstate();
    return 0;
}
