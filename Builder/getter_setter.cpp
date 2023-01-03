// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class employee{
  int id;
  string name;
  string role;
  int salary;
  int experience;
  char address[25];
  string email;
  int contact;
  public:
  void getter(){
      cout<<"Enter the id: "<<endl;
      cin>>id;
      cout<<"Enter the name: "<<endl;
      cin>>name;
      cout<<"Enter the role: "<<endl;
      cin>>role;
      cout<<"Enter the salary: "<<endl;
      cin>>salary;
      cout<<"Enter the experience: "<<endl;
      cin>>experience;
      cout<<"Enter the adress: "<<endl;
      cin>>address;
      cout<<"Enter the email: "<<endl;
      cin>>email;
      cout<<"Enter the contact number: "<<endl;
      cin>>contact;
  }
  void setter(){
      cout<<"The id is: "<<id<<endl;
      cout<<"The name is: "<<name<<endl;
      cout<<"The role is: "<<role<<endl;
      cout<<"The salary is: "<<salary<<endl;
      cout<<"The experience is: "<<experience<<endl;
      cout<<"The adress is: "<<address<<endl;
      cout<<"The email is: "<<email<<endl;
      cout<<"The contact number is: "<<contact<<endl;
  }
};
int main() {
    employee e1[5];
    int i;
    for(i=0;i<1;i++){
        e1[i].getter();
        e1[i].setter();
    }

    return 0;
}
