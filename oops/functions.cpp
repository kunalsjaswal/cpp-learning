#include <iostream>
using namespace std;

void fnx1(); //function declaration

void default_parameter(string name="kunal"){
    cout<<"hello my name is "<<name<<endl;
}

int main(){
    fnx1();
    default_parameter();
    default_parameter("kunal singh jaswal");
}

//function initialization
void fnx1(){
    cout<<"function after main"<<endl;
}