#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status; 


/*
创建数据类型
*/
typedef struct{
    char name[10];                          //名字
    int age;                                //年龄
}Stu;

/*
创建链表
*/
typedef struct LNode{
    Stu data;                               //数据域
    struct LNode *next;                     //指针域
}LNode, *LinkList;

/*
初始化链表
*/
Status InitList(LinkList &L){
    L = new LNode;                          //创建头结点
    L->next = NULL;                         //头结点指针域置空
    return OK;
}



/*
链表的取值
*/
Status GetElem(LinkList &L, int i, Stu &e){                     //取第i个元素的数据域,并赋值给e
    LinkList p = L->next;                   //p指向第一个结点
    int j = 1;                              //计数器
    while(p && j < i){                      //p不为空且计数器j还没有等于i时，循环继续
        p = p->next;                        //p指向下一个结点
        j++;                                //计数器加1
    }
    if(!p || j > i){                        //p为空或者计数器j大于i时，说明第i个元素不存在
        return ERROR;
    }
    e = p->data;                            //取第i个元素的数据域
    return OK;
}



/*
链表的查找
*/
LNode *LocateElem(LinkList &L, Stu e){                      //查找数据域为e的结点
    LinkList p = L->next;                   //p指向第一个结点
    while(p && p->data.age != e.age){       //p不为空且p的数据域不等于e时，循环继续
        p = p->next;                        //p指向下一个结点
    }
    return p;                               //返回p
}





/*
链表的插入
*/
Status ListInsert(LinkList &L, int i, Stu e){
    LinkList p = L;                         //p指向头结点
    int j = 0;                              //计数器
    while(p && j < i - 1){                  //p不为空且计数器j还没有等于i-1时，循环继续
        p = p->next;                        //p指向下一个结点
        j++;                                //计数器加1
    }
    if(!p || j > i - 1){                    //p为空或者计数器j大于i-1时，说明第i个元素不存在
        return ERROR;
    }
    LinkList s = new LNode;                 //创建新结点
    s->data = e;                            //将e赋值给新结点的数据域
    s->next = p->next;                      //将新结点插入到第i个结点之前
    p->next = s;
    return OK;
}

Status ListDelete(LinkList &L, int i){
    LinkList p = L;                         //p指向头结点
    int j = 0;                              //计数器
    while(p->next && j < i - 1){            //p的下一个结点不为空且计数器j还没有等于i-1时，循环继续
        p = p->next;                        //p指向下一个结点
        j++;                                //计数器加1
    }
    if(!(p->next) || j > i - 1){            //p的下一个结点为空或者计数器j大于i-1时，说明第i个元素不存在
        return ERROR;
    }
    LinkList q = p->next;                   //q指向第i个结点
    p->next = q->next;                      //将第i个结点从链表中删除
    delete q;                               //释放第i个结点的空间
    return OK;
}