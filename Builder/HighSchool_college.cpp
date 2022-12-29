// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class HighSchool{
    public:
    static int id;
    static char stu_name[20];
    static int stu_roll_no;
    static int stu_standard;
    static int stu_age;
    static int stu_contact;
    static char stu_edu_institute_name[20];
    static char stu_address[20];

   static void input(){
        cout<<"Enter the ID of the student: "<<endl;
        cin>>id;
         cout<<"Enter the Name of the student: "<<endl;
        cin>>stu_name;
        cout<<"Enter the Roll no. of the student: "<<endl;
        cin>>stu_roll_no;
         cout<<"Enter the Standard of the student: "<<endl;
        cin>>stu_standard;
         cout<<"Enter the Age of the student: "<<endl;
        cin>>stu_age;
         cout<<"Enter the Contact of the student: "<<endl;
        cin>>stu_contact;
         cout<<"Enter the Institue of the student: "<<endl;
        cin>>stu_edu_institute_name;
         cout<<"Enter the Address of the student: "<<endl;
        cin>>stu_address;
    }

    static void output(){
        cout<<"The ID of the student is : "<<id<<endl;
        cout<<"The Name of the student is : "<<stu_name<<endl;
        cout<<"The Roll no. of the student is : "<<stu_roll_no<<endl;
        cout<<"The Standard of the student is : "<<stu_standard<<endl;
        cout<<"The Age of the student is : "<<stu_age<<endl;
        cout<<"The Contact of the student is : "<<stu_contact<<endl;
        cout<<"The Institue of the student is : "<<stu_edu_institute_name<<endl;
        cout<<"The Address of the student is : "<<stu_address<<endl;
    }
};

/*class College{
    public:
    int id;
    char stu_name[20];
    static int stu_roll_no;
    int stu_standard;
    int stu_age;
    int stu_contact;
    char stu_edu_institute_name[20];
    char stu_address[20];
    void input(){
        cout<<"Enter the ID of the student: "<<endl;
        cin>>id;
         cout<<"Enter the Name of the student: "<<endl;
        cin>>stu_name;
         cout<<"Enter the Standard of the student: "<<endl;
        cin>>stu_standard;
         cout<<"Enter the Age of the student: "<<endl;
        cin>>stu_age;
         cout<<"Enter the Contact of the student: "<<endl;
        cin>>stu_contact;
         cout<<"Enter the Institue of the student: "<<endl;
        cin>>stu_edu_institute_name;
         cout<<"Enter the Address of the student: "<<endl;
        cin>>stu_address;

    }
    void output(){
        cout<<"The ID of the student is : "<<id<<endl;
        cout<<"The Name of the student is : "<<stu_name<<endl;
        cout<<"The Standard of the student is : "<<stu_standard<<endl;
        cout<<"The Age of the student is : "<<stu_age<<endl;
        cout<<"The Contact of the student is : "<<stu_contact<<endl;
        cout<<"The Institue of the student is : "<<stu_edu_institute_name<<endl;
        cout<<"The Address of the student is : "<<stu_address<<endl;
    }
};*/
int main() {
    HighSchool h1;
   h1.input();
   h1.output();

   /* College c1;
    c1.input();
    c1.output();*/


    return 0;
}
