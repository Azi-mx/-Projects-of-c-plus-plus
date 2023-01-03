// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class cpy{
  int x,y;
  public:
  cpy(int x1,int y1){
      x=x1;
      y=y1;
  }
  cpy(const cpy& c3){
      x=c3.x;
      y=c3.y;
   cout<<x<<"\n"<<y;
  }


};
int main() {
   cpy c1(10,20);
   cpy c3=c1;

    return 0;
}
