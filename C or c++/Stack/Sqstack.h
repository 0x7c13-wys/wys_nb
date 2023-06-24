#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status; 


#define MAX_SIZE 1000


/*
创建数据类型
*/
typedef struct{
    char name[10];                          //名字
    int age;                                //年龄
}Stu;

/*
顺序栈的定义
*/
typedef struct{
    Stu *base;                        //栈底指针
    Stu *top;                         //栈顶指针
    int stacksize;                    //栈可用的最大容量
}SqStack;



/*
顺序栈的初始化
*/
Status InitStack(SqStack &S){
    S.base = new Stu[MAX_SIZE];       //为栈分配一个最大容量为MAX_SIZE的数组空间
    if(!S.base){                      //存储分配失败
        exit(OVERFLOW);
    }
    S.top = S.base;                   //top初始为base，空栈
    S.stacksize = MAX_SIZE;           //stacksize置为栈的最大容量MAX_SIZE
    return OK;
}


/*
入栈
*/
Status Push(SqStack &S, Stu e){
    if(S.top - S.base == S.stacksize){    //栈满
        return ERROR;
    }
    *S.top++ = e;                         //元素e压入栈顶，栈顶指针加1
    return OK;
}


/*
出栈
*/
Status Pop(SqStack &S, Stu &e){
    if(S.top == S.base){                  //栈空
        return ERROR;
    }
    e = *--S.top;                         //栈顶指针减1，将栈顶元素赋给e
    return OK;
}




/*
取栈顶元素
*/
Stu GetTop(SqStack &S){
    if(S.top != S.base){                //栈非空
        return *(S.top - 1);            //返回栈顶元素的值，栈顶指针不变
    }
}