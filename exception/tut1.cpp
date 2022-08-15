#include<iostream>
using namespace std;

int main(){

    try
    {
        int age;
        cout<<"age: ";
        cin>>age;
        if(age>=18){
            cout<<"You Are an Adult now . drink Beer Cheers!!!!!";
        }
        else{
            throw (age);
        }
    }
    catch(...) // int num
    {
        // cout<<"Heyy you are a kiddo of age "<<num<<" drink milk."; 12

        cout<<"Heyy you are a kiddo go drink milk.";   
    }
    
    return 0;
}