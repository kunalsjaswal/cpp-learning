#include<iostream>
using namespace std;

class privateAccess{

    private: 
        int a=10;
    public:
        int b=20;
    protected:
        int c=30;

    public:
    void fnx(){
        cout<<a<<endl;
    }
};
class protectedAccess: public privateAccess{
    public: 
    void fnx2(){
        cout<<c<<endl;
        // accessing protected members from parent class 
    }
};


int main(){

privateAccess obj;
protectedAccess obj2;

// we can't access private members/functions outside the class.
//we can access protected in inheritance
obj.fnx();
obj2.fnx2();

}