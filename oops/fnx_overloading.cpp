#include<iostream>
using namespace std;

void fn1(){
    cout<<"this is void function return nothing"<<endl;
} 

int fn1(int a,int b){
    cout<<"this is int function returns sum"<<endl;
}

string fn1(string s){
    cout<<"this is string function returns string"<<endl;
}

int main(){
    fn1();
    fn1(10,5);
    fn1("kunal");

}