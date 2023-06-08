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
链栈的定义
*/
typedef struct StackNode{
    Stu data;                               //数据域
    struct StackNode *next;                 //指针域
}StackNode, *LinkStack;


/*
链栈的初始化
*/
Status InitStack(LinkStack &S){
    S = NULL;                               //栈顶指针置空
    return OK;
}

/*
入栈
*/
Status Push(LinkStack &S, Stu e){
    StackNode *p = new StackNode;           //创建新结点
    p->data = e;                            //新结点数据域赋值
    p->next = S;                            //新结点指针域指向栈顶
    S = p;                                  //栈顶指针指向新结点
    return OK;
}


/*
出栈
*/
Status Pop(LinkStack &S, Stu &e){
    if(!S){                                 //栈空
        return ERROR;
    }
    StackNode *p = S;                       //p指向栈顶
    e = p->data;                            //取栈顶元素
    S = S->next;                            //栈顶指针指向下一个结点
    delete p;                               //释放p
    return OK;
}


/*
取栈顶元素
*/
Stu GetTop(LinkStack &S){
    if( S != NULL){                         //栈不空
        return S->data;                     //返回栈顶元素
    }
}