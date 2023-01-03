// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
using namespace std;
class movie{
   char movie_name[20];
   int cast;
    public:
    movie(){
        strcpy(movie_name,"Main hoo na");
        cast = 120;
    }
    movie(char n[],int x){
        strcpy(movie_name,n);
        cast = x;
    }
    movie(movie& c3){
        strcpy(movie_name,c3.movie_name);
        cast=c3.cast;
    }
    void display(){
        cout<<"Movie name is "<<movie_name<<" and the cast is "<<cast<<endl;
    }
};
int main() {
    movie c2;
    movie c1("Agneepath",150);
    movie c3(c1);

    cout<<"Default constructor is called:"<<endl;
    c2.display();
    cout<<"Parameterized constructor is called:"<<endl;
    c1.display();
    cout<<"copy constructor is called:"<<endl;
    c3.display();
    return 0;
}
