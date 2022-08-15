#include<iostream>
using namespace std;

class Football{
    public:
        void parentFnx(){
            cout<<"this is the Origin"<<endl;
        }

};

class Games{
public:
    void displayGame(){
        cout<<"Fav game"<<endl;
    }
};

class Fifa20:public Football{
    public:
        void fifaFnx20(){
            cout<<"This is fifa 20"<<endl;
        }
};


class Fifa22:public Fifa20{
    public:
        void fifaFnx22(){
            cout<<"This is Fifa 22"<<endl;
        }
};

class FavGame:public Football,public Games{
    public:
        void fav(){
            cout<<"My favourite game is fifa"<<endl;
        }

};

int main(){
    Fifa22 obj;
    obj.parentFnx();
    obj.fifaFnx20();
    obj.fifaFnx22();

    FavGame obj2;
    obj2.fav();
    return 0;
}