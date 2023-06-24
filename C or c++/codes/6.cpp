#include<stdio.h>

#include<iostream>
using namespace  std;


int main(){
    char a = 'a';
    system("stty -echo");
    cin >> a;
    cout << a << endl;
    return 0;
}