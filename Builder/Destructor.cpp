
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class dest{
    public:
    dest(){
        cout<<"Constructor is called."<<endl;
    }
  ~dest(){
      cout<<"The destructor is called."<<endl;
  }
};
int main() {
    dest d1;
    return 0;
}
