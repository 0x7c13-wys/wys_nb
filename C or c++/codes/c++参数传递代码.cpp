/* // #传值
#include <iostream>
using namespace std;
void swap(float m,float n)
{float temp;
 temp=m;
 m=n;
 n=temp;
}
int main()
{float a,b;
 cin>>a>>b;
 swap(a,b);
cout<<a<<endl<<b<<endl;
}
 */


















/* 

// #传地址-指针变量作参数 
#include <iostream>
using namespace std;
void swap(float m,float n)
{float temp;
 temp=m;
 m=n;
 n=temp;
}
int main()
{float a,b;
 cin>>a>>b;
 swap(a,b);
cout<<a<<endl<<b<<endl;
}
 */



// #传地址-引用类型作参数
/* #include <iostream>
using namespace std;
void swap(float& m,float& n)
{float temp;
 temp=m;
 m=n;
 n=temp;
}
int main()
{float a,b;
 cin>>a>>b;
 swap(a,b);
cout<<a<<endl<<b<<endl;
} */

#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100



typedef struct {
    char ISBN[20];
    char name[20];
    float price;
}book;

typedef struct {
    ElemType *elem;
    int length;
}SqLlist;

SqLlist L;


















int main(){

}