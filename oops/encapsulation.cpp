#include<iostream>
using namespace std;

// encapsulation is use to hide sensitive data by making it private 
class EmpData{
private:
    int id;
    int salary;
    string name;

// we encapsulated employee data 

public:
    void setEmpData(int id_param,int s_param,string n_param){
        id=id_param;
        salary=s_param;
        name=n_param;
    }

    void getEmpData(){
        cout<<"id: "<<id<<endl<<"name: "<<name<<endl<<"Salary: "<<salary;
    }

};

int main(){
    EmpData Employee1;
    Employee1.setEmpData(9585,120000,"Kunal singh jaswal");
    Employee1.getEmpData();
    return 0;
}