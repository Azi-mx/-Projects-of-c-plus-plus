// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class bhura{
  string name;
  string b;
  public:
  bhura(string naam,string type){
      this->name=naam;
      this->b=type;
  }
  string getName()const{
      cout<<name<<b<<endl;
  }
};
int main() {
   const bhura b1("Bhura ","ladka");
   b1.getName();
    return 0;
}
