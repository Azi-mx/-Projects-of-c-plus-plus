// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class B;
class A{
  int n1=6;
  public:
  friend int add(A,B);
};
class B{
  int n2=6;
  friend int add(A,B);
};

int add(A a,B b){
    return a.n1+b.n2;
}
int main() {
    A obj1;
    B obj2;
    cout<<"Addition of both is: "<<add(obj1,obj2)
    return 0;
}
