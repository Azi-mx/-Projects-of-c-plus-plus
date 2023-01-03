//
using namespace std;
class Bank{
    private:
  double acc_no;
  string mobile_no;
  string mail;
  string name;
  public:
      double balance;
      double withdraw;
      void setdata(){

      }
};
int main() {
    int choice;
    int count =0,flag;
    double acc;
    string mobile_no;
    string mail;
    string name;
    string user_id, password;
    while(choice<4){
        cout<<"\n\n Press 1. for Administrator login \n 2. for Registration as staff \n 3. For Login as a staff"<<endl;
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"\nWelcome to Administrator Portal\n"<<endl;
            cout<<"Enter the User ID"<<endl;
            cin>>user_id;
            cout<<"Enter the Password"<<endl;
            cin>>password;
            if(user_id=="Azimmm" && password=="Azim@143"){
                cout<<""
            }
        }
    }
    return 0;
}
