// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class stu1{
  int phone;
};
class stu2: private stu1{
    public:
    int id;
    string name;
};

int main() {
    // Write C++ code here
  stu2 detail;
  cout<<"Enter the id of the student"<<endl;
  cin>>detail.id;
  cout<<"The ID of the student is : "<<detail.id<<endl;

    return 0;
}
