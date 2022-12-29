// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class mother{
    public:
     void display(){
         cout<<"This is mother class function."<<endl;
     }
};

class daughter: public mother{
    public:
     void display(){
         cout<<"This is duaghter class function."<<endl;
     }
};
int main() {
   daughter D1;
   D1.display();
    return 0;
}
