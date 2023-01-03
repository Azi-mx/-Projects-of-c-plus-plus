#include<iostream>
using namespace std;

class Highschool{
    public :
        int stud_id;
        string stud_name;
        int stud_roll_no;
        int stu_age;
        double stu_contact;
        string stu_address;
    public:
        static int stu_standard;
        static string stu_edu_institude;
int getId()
{
    return this->stud_id;
}
string getName()
{
    return this->stud_name;
}
int getRoll_no()
{
    return stu_standard;
}
int getAge()
{
    return this->stu_age;
}
double getStud_contact()
{
    return this->stu_contact;
}
string getEducation()
{
    return stu_edu_institude;
}
int getStadard()
{
    return stu_standard;
}
string getAddress()
{
    return stu_address;
}
void setdata(int a,string b,int c,int e,double f,string h)
{
    stud_id=a;
    stud_name=b;
    stud_roll_no=c;
    stu_age=e;
    stu_contact=f;
    stu_address=h;
}
};
int Highschool :: stu_standard=4;
string Highschool :: stu_edu_institude="Red and white";
class College{
    public :
        int stud_id;
        string stud_name;
        int stud_roll_no;
        static int stu_standard;
        int stu_age;
        double stu_contact;
        static string stu_edu_institude;
        string stu_address;
    int getId()
    {
        return this->stud_id;
    }
    string getName()
    {
        return this->stud_name;
    }
    int getRoll_no()
    {
        return stud_roll_no;
    }
    int getAge()
    {
        return this->stu_age;
    }
    double getStud_contact()
    {
        return this->stu_contact;
    }
    int getStadard()
    {
        return stu_standard;
    }
    string getEducation()
    {
        return stu_edu_institude;
    }
    string getAddress()
    {
        return stu_address;
    }
    void setdata(int a,string b,int c,int e,double f,string h)
    {
        stud_id=a;
        stud_name=b;
        stud_roll_no=c;
        stu_age=e;
        stu_contact=f;
        stu_address=h;
    }
    };
int College :: stu_standard=5;
string College :: stu_edu_institude="Red and white Ahmedabad";
int main()
{
    Highschool h1[30];
    College c1[30];
    int stud_id;
    string stud_name;
    int stud_roll_no;
    int stu_age;
    double stu_contact;
    string stu_address;

    cout<<"====Enter Highschool student information====\n"<<endl;

    for(int i=0;i<2;i++){
    cout<<"\nEnter the Student id "<<endl;
    cin>>stud_id;
    cout<<"\nEnter the Student Name "<<endl;
    cin>>stud_name;
    cout<<"\nEnter the ROll Number "<<endl;
    cin>>stud_roll_no;
    cout<<"\nEnter the student Age"<<endl;
    cin>>stu_age;
    cout<<"\nEnter the Student Contanct "<<endl;
    cin>>stu_contact;
    cout<<"\nEnter the student Address"<<endl;
    cin>>stu_address;
    h1[i].setdata(stud_id,stud_name,stud_roll_no,stu_age,stu_contact,stu_address);
    }

    cout<<"====Enter Collage student information====\n"<<endl;

    for(int i=0;i<2;i++){
    cout<<"Enter the Student id "<<endl;
    cin>>stud_id;
    cout<<"\nEnter the Student Name "<<endl;
    cin>>stud_name;
    cout<<"\nEnter the ROll Number "<<endl;
    cin>>stud_roll_no;
    cout<<"\nEnter the student Age"<<endl;
    cin>>stu_age;
    cout<<"\nEnter the Student Contanct "<<endl;
    cin>>stu_contact;
    cout<<"\nEnter the student Address"<<endl;
    cin>>stu_address;
    c1[i].setdata(stud_id,stud_name,stud_roll_no,stu_age,stu_contact,stu_address);
    }

    cout<<"\nHigh School Student Details  :-"<<endl;

    for(int i=0;i<2;i++){
    cout<<"\nStudent id :"<<h1[i].getId()<<endl;
    cout<<"\nStudent Name :"<<h1[i].getName()<<endl;
    cout<<"\nStudent Roll Numvber :"<<h1[i].getRoll_no()<<endl;
    cout<<"\nStudent standard :"<<h1[i].getStadard()<<endl;
    cout<<"\nStudent Age :"<<h1[i].getAge()<<endl;
    cout<<"\nStudent Contact :"<<h1[i].getId()<<endl;
    cout<<"\nStudent School Name :"<<h1[i].getEducation()<<endl;
    cout<<"\nStudent Student Address :"<<h1[i].getAddress()<<endl;
    cout<<"\n______________"<<endl;
    }

    cout<<"\nCollege Student Details :- "<<endl;

    for(int i=0;i<2;i++){
    cout<<"\nStudent id :"<<c1[i].getId()<<endl;
    cout<<"\nStudent Name :"<<c1[i].getName()<<endl;
    cout<<"\nStudent Roll Numvber :"<<c1[i].getRoll_no()<<endl;
    cout<<"\nStudent standard :"<<c1[i].getStadard()<<endl;
    cout<<"\nStudent Age :"<<c1[i].getAge()<<endl;
    cout<<"\nStudent Contact :"<<c1[i].getId()<<endl;
    cout<<"\nStudent School Name :"<<c1[i].getEducation()<<endl;
    cout<<"\nStudent Student Address :"<<c1[i].getAddress()<<endl;
    cout<<"\n______________"<<endl;
    }
    }

