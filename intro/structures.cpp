#include<iostream>
using namespace std;

// struct is use to store different variables 

int main(){
    struct{
        string name;
        int age;
        string city;
    }info;


// one structure for different fields 
    struct{
        string name;
        string price;
    }car1,car2;

    car1.name="BMW";
    car1.price="50 L";
    car2.name="Buggati";
    car2.price="2 Cr";


    // named structure 

    struct Struct1
    {
        int age;
        string name;
    };
    Struct1 kunal;
    kunal.age=21;
    kunal.name="kunal";
    

    info.name="kunal singh jaswal";
    info.age=21;
    info.city="Himachal pradesh";
    

    cout<<info.name<<endl<<info.age<<endl<<info.city;
    return 0;
}