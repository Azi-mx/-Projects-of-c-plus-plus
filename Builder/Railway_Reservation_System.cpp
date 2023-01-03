// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
class SaveData{
  private:
  int train_no;
  string train_name;
  string source;
  string destination;
  string time;
  public:
  void setdata(int a,string b,string c,string d,string e){
      this->train_no=a;
     this-> train_name=b;
      this->source=c;
      this->destination=d;
      this->time=e;
  }
  int getTrain_no(){
      return this->train_no;
  }
  string getTrain_name(){
      return this->train_name;
  }
  string getSource(){
      return this->source;
  }
  string getDestination(){
      return this->destination;
  }
  string getTime(){
      return this->time;
  }
};
class Train{
  private:
  int train_no;
  string train_name;
  string source;
  string destination;
  string time;
  public:
  void setdata(int a,string b,string c,string d,string e){
      this->train_no=a;
     this-> train_name=b;
      this->source=c;
      this->destination=d;
      this->time=e;
  }
  int getTrain_no(){
      return this->train_no;
  }
  string getTrain_name(){
      return this->train_name;
  }
  string getSource(){
      return this->source;
  }
  string getDestination(){
      return this->destination;
  }
  string getTime(){
      return this->time;
  }
};

int main() {
   int i,n,count = 0,count1=0,train_no;
   string train_name;
   string source;
   string destination;
   string time;
 SaveData s[3],s1;
 Train t1;
s[0].setdata(8056,"Rajdhani","Delhi","Ahmedabad","16:00");
s[1].setdata(10056,"Humsafar","Kerala","Bihar","14:00");
s[2].setdata(12547,"Shatabdi","Mumbai","Ajmer","18:00");
cout<<"==================Train Details====================="<<endl;
for(i=0;i<3;i++){
    cout<<"Train No.: "<<s[i].getTrain_no()<<endl;
    cout<<"Train Name: "<<s[i].getTrain_name()<<endl;
    cout<<"Train coming from: "<<s[i].getSource()<<endl;
    cout<<"Train going to: "<<s[i].getDestination()<<endl;
    cout<<"Train time: "<<s[i].getTime()<<endl;
    cout<<"-----------------------------------------------"<<endl;
}
cout<<"\n\n\n Enter your choice: 1 For booking \n 2 for search by Train number\n For exit press any key\n\n"<<endl;
    cin>>n;
    switch(n){
        case 1:
        cout<<"\n Welcome to Booking Site\n"<<endl;
        cout<<"\nEnter Train number: "<<endl;
        cin>>train_no;
        cout<<"\nEnter Train Name: "<<endl;
        cin>>train_name;
        cout<<"\nFrom Where: "<<endl;
        fflush(stdout);
        cin>>source;
        cout<<"\nWhere to: "<<endl;
        cin>>destination;
         cout<<"\nEnter the time: "<<endl;
        cin>>time;
        s1.setdata(train_no,train_name,source,destination,time);
        for(i=0;i<3;i++){
            if(train_no==s[i].getTrain_no() && train_name==s[i].getTrain_name() &&
               source==s[i].getSource() && destination==s[i].getDestination() && time==s[i].getTime())
            {
              t1.setdata(train_no,train_name,source,destination,time);
            count=1;
            }
        }
        if(count==0)
        {
          cout<<"Invalid reservation"<<endl;
        }
        else
        {
            cout<<"Reservation Confirmed"<<endl;
        }
        break;
        case 2:
            cout<<"Enter the train no."<<endl;
            cin>>train_no;

            for(i=0;i<3;i++)
                {
                    if(train_no==s[i].getTrain_no()){
                        cout<<"Train Name: "<<s[i].getTrain_name()<<endl;
                        cout<<"Train source: "<<s[i].getSource()<<endl;
                        cout<<"Train destination: "<<s[i].getDestination()<<endl;
                        cout<<"Train time: "<<s[i].getTime()<<endl;
                        count1=1;
                    }
                }
                if(count1==0)
                {
                        cout<<"Not found"<<endl;
                }
            break;
        default:
            cout<<"Problem in Page"<<endl;
    }
    return 0;
}
