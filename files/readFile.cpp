#include<iostream>
#include<fstream>

using namespace std;
// ifstream is used to read file

int main(){

    string text;

    ifstream file1("demoFile1.txt");

    while(getline(file1,text)){
        cout<<text<<endl;
    }

    file1.close();
    return 0;
}