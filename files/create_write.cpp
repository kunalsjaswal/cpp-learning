#include<iostream>
#include<fstream>
using namespace std;

// to create and write use ofstream 

int main(){

// created and opened file
    ofstream file1("demoFile1.txt");

    file1<<"Hello the content of this file has been written using ofstream.";
    
    file1.close();

    return 0;
}