#include<iostream>
using namespace std;

int sumToN(int n){
    if (n>0)
    {
        return n + sumToN(n-1); 
    }else{
        return 0;
    }
} 

int main(){
    int result=sumToN(20);
    cout<<result;

}