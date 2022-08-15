#include<iostream>
#include<fstream>
using namespace std;

int main(){

    string name;
    int age;
    string addr;
// file in write mode     
    ofstream empFile("empFile.txt");


    cout<<"Enter your name: ";
    getline(cin,name);

    cout<<"Enter your city: ";
    getline(cin,addr);

    cout<<"Enter your age: ";
    cin>>age;



    empFile<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Address: "<<addr;
    empFile.close();


cout<<endl<<"Employee Data "<<endl;
// file in read mode 
    string result;

    ifstream EmpData("empFile.txt");
    while (getline(EmpData,result))
    {
        cout<<result<<endl;
    }
    EmpData.close();

    return 0;
}