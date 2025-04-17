#include<iostream>
using namespace std;

int main(){
    int a = 6;
    cout<<a<<endl; // 6
    cout<<&a<<endl;

    cout<<a+1<<endl; // 7
    cout<<&a+1<<endl;

   
    cout<<*&a<<endl; // 6
    // cout<<*a;
return 0;
}