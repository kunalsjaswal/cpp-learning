#include<iostream>
using namespace std;

int main(){
    string name="kunal";
    string &kRef=name;  //reference 

    // cout<<&kRef<<endl<<&name;  same result kRef==name

    // for normal & is used for memory address but,
    // pointers are variables that store memory address as there value

    string* ptr=&name;  // or string *ptr

    cout<< ptr<<endl<<&name<<endl;  //same output
    cout<< *ptr<<endl;   // dereferencing i.e value stored at the address

    // to change the value of inital variable. if we change ref var then it will not change but,
    // if we change pointer then its value will change but address remains same

    *ptr="kunal singh jaswal";

    cout<<name<<endl<<*ptr<<endl<<ptr<<endl<<&name<<endl;

    return 0;
}