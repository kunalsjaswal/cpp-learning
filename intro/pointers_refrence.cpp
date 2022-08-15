#include<iostream>
using namespace std;

int main(){
    string name="kunal";
    string name2="kunal singh jaswal";

    string &kRef=name;  //reference 

    // cout<<&kRef<<endl<<&name;  same result kRef==name

    // for normal & is used for memory address but,
    // pointers are variables that store memory address as there value

    string* ptr=&name;  // or string *ptr

    //cout<< ptr<<endl<<&name<<endl;  //same output
    //cout<< *ptr<<endl;    dereferencing i.e value stored at the address

    // to change the value of inital variable. if we change ref var then it will not change but,
    // if we change pointer then its value will change but address remains same

    cout<<"name: "<<name<<endl;
    cout<<"&name: "<<&name<<endl;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl<<endl;

    *ptr="kunal singh jaswal";

    cout<<"name: "<<name<<endl;
    cout<<"&name: "<<&name<<endl;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl<<endl;

    // now ptr is refrencing to name2 so if *ptr changes name2 changes
    ptr=&name2;
    *ptr="rohan";
    

    cout<<"name: "<<name<<endl;
    cout<<"&name: "<<&name<<endl;
    cout<<"name2: "<<name2<<endl;
    cout<<"&name2: "<<&name2<<endl;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl<<endl;

    return 0;
}