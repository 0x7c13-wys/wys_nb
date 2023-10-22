#include<stdio.h>

#include<iostream>
using namespace  std;


int main(){
    char a = 'a';
    system("stty -echo");                  //用户输入时不显示
    cin >> a;
    cout << a << endl;
    return 0;
}