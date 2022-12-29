// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define MAX 10
class School{
  char name[30];
  int RollNo;
  int total;
  float perc;
  public:
void getter();
void setter();
};
  void School::getter(){
      cout<<"Enter the Name of the student: "<<endl;
      cin>>name;
      cout<<"Enter the RollNo of the student: "<<endl;
      cin>>RollNo;
      cout<<"Enter the total marks obtained by the student from 500 Marks: "<<endl;
      cin>>total;
      perc=(float)total/500*100;
  }
    void School::setter(){
        cout << "Student details:\n";

      cout<<"Name: "<<name<<",Roll no.: "<<RollNo<<",Marks:"<<perc<<endl;

  }
int main() {
    School s1[MAX];
    int i,n;
    cout<<"Enter the number of student details you want to enter: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"Enter the detail of student "<<i<<endl;
        s1[i].getter();
    }

     for(i=1;i<=n;i++){
         cout<<"The details of student "<<i<<endl;
        s1[i].setter();
    }

    return 0;
}
