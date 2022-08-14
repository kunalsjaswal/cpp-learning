#include<iostream>
using namespace std;



int main(){
    const float pi=3.14;
    
    float num1=15e2;  //1500
    double num2=25E4;

    string fName="kunal";
    string lName="singh jaswal";

    string name=fName.append(lName);  // we can also use +
    name[0]='K';  // to change any word of string 

    string str; 
     //cin it will take only one word

    getline(cin,str);
    cout<<str.size();
}