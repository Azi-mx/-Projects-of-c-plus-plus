// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class hotel{
    int id;
    string name;
    string type;
    int staff_size;
    char room_size[20];
    int establish_year;
    char address[20];
    string rating_type;
    char website[20];
    public:
    void get_det(){
        cout<<"Enter the ID of the hotel: "<<endl;
        cin>>this->id;
        cout<<"Enter the name of the hotel: "<<endl;
        cin>>this->name;
        cout<<"Enter the staff size of the hotel: "<<endl;
        cin>>this->staff_size;
        cout<<"Enter the room size of the hotel: "<<endl;
        cin>>this->room_size;
        cout<<"Enter the establish year of the hotel: "<<endl;
        cin>>this->establish_year;
        cout<<"Enter the address of the hotel: "<<endl;
        cin>>this->address;
        cout<<"Enter the rating type of the hotel: "<<endl;
        cin>>this->rating_type;
        cout<<"Enter the website of the hotel: "<<endl;
        cin>>this->website;
    }
    void set_det(){
        cout<<"The entered ID of the hotel is: "<<this->id<<endl;
        cout<<"The entered name of the hotel is: "<<this->name<<endl;
        cout<<"The entered staff size of the hotel is: "<<this->staff_size<<endl;
        cout<<"The entered room size of the hotel is: "<<this->room_size<<endl;
        cout<<"The entered establish year of the hotel is: "<<this->establish_year<<endl;
        cout<<"The entered address of the hotel is: "<<this->address<<endl;
        cout<<"The entered rating type of the hotel is: "<<this->rating_type<<endl;
        cout<<"The entered website of the hotel is: "<<this->website<<endl;
    }
};
int main() {
 hotel h1;
 h1.get_det();
 h1.set_det();

    return 0;
}
