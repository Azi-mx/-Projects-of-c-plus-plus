#include <iostream>
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
      void setdata(double a,string b,string c,string d){
        acc_no=a;
        mobile_no=b;
        mail=c;
        name=d;
      }
      double getacc_no()
      {
        return acc_no;
      }
      string getmobile_no()
      {
        return mobile_no;
      }
      string getmail()
      {
        return mail;
      }
      string getname()
      {
        return name;
      }
};
int main() {
    Bank b[100];
    int choice;
    int count =0,flag;
    double acc;
    string mobile_no;
    string mail;
    string name;
    string user_id, password;
    while(choice<4){
            cout<<"\n\nWelcome to Red and white Bank\n\n"<<endl;
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
                cout<<"Password Matched\n Successfully logged in"<<endl;
            }
            else
            {
                cout<<"Password Incorrect"<<endl;
            }
            break;
        case 2:
            cout<<"Welcome to staff registration portal\n\n"<<endl;
            cout<<"Enter your name: "<<endl;
            cin>>name;
            cout<<"Enter your mail: "<<endl;
            cin>>mail;
            cout<<"Enter your mobile no: "<<endl;
            cin>>mobile_no;
            cout<<"Enter your account number: "<<endl;
            cin>>acc;
            b[count].setdata(acc,mobile_no,mail,name);
            cout<<"Data added successfully added in the database"<<endl;
            break;
        case 3:
            cout<<"Welcome to the staff Portal"<<endl;
            cout<<"Enter the Account number"<<endl;
            cin>>acc;
            cout<<"Enter the Mail or mobile number"<<endl;
            cin>>mail;
            for(int i=0;i<count;i++)
            {
            if(acc==b[i].getacc_no() && mail==b[i].getmobile_no() || mail==b[i].getmail())
            {
                flag++;
            }
            }
            if(flag==0)
            {
                cout<<"Log in failed"<<endl;
            }
            else
            {
                int choice1;
                cout<<"Logged in successfully"<<endl;
                cout<<"Account Name: "<<b[0].getname();
                cout<<"Account Number: "<<b[0].getacc_no();
                cout<<"Account mail: "<<b[0].getmail();
                cout<<"Account number: "<<b[0].getmobile_no();
            cout<<"\n Press 1 to Deposit money \n 2 for Withdraw money\n 3 to Transfer Money\n Press any key to exit"<<endl;
            cin>>choice1;
            switch(choice1)
            {
            case 1:
                int ac_balance;
                cout<<"Enter the amount you want to add in your balance: "<<endl;
                cin>>ac_balance;
                b[flag].balance = b[flag].balance+ac_balance;
                break;
            case 2:
                int withdraw_bal;
                cout<<"Enter the amount you want to withdraw: "<<endl;
                cin>>withdraw_bal;
                if (b[flag].balance < withdraw_bal)
                            {
                                cout << "\nAmount more the balance!!";
                            }
                else
                {
                    b[flag].withdraw = b[flag].balance - withdraw_bal;
                    cout<<"Take the cash from the withdraw box"<<endl;
                }
                break;
            case 3:
                            int withdraw1;
                            cout << "\nEnter the amount you want to tranfer\n";
                            cin >> withdraw1;
                            if (b[flag].balance < withdraw1)
                            {
                                cout << "\nAmount more the balance!!";
                            }
                            else
                            {
                                b[flag].balance = b[flag].balance - withdraw1;
                                cout << "\n Tranfer the money from your account";
                            }
                            break;
                            default:
                            break;
            }
            }
            break;
            default:
                cout<<"Sorry for the incovinience"<<endl;


        }
        if (choice==2)
                    {
                        count++;
                    }
    }
    return 0;
}
