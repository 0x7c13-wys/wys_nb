/* 


#define MAX_STUDENG 500;

#include<iostream>
using namespace std;






struct date{                        //日期
    int year;                       //年
    int month;                      //月
    int day;                        //日
}

struct grdae{                       //成绩
    int Chinese;                    //语文成绩
    int Maths;                      //数学成绩
    int English;                    //英语成绩
    int C_design;                   //C成绩
    int PE;                         //体育成绩
    int sum;                        //总成绩
}



typedef struct information{                 //学生信息
    char name[10];                          //名字
    int ID;                                 //学号
    char sex[2];                            //性别
    struct date birthday;                   //生日
    struct date regiday;                    //入学日期
    struct grdae exam;                      //考试成绩
}


typedef struct{                            
    int length;                     
    information *elem;
}Sqlist;                                    //顺序表

Sqlist S;

voiud Init_list(Sqlist &S){
    S.elem = new information[MAX_STUDENG];
    S.length = 0;
}
 */





/* 


输入学生信息
@S:传入顺序表，通过顺序表读取并修改学生信息

void infromation_Input(Sqlist &S){
    char choose = 'A';
    for(int i = 0; i < S.length; i++){
        cout << "\n\n\n\n\t\t\t\t" << "请输入学生姓名:" << endl;
        cin >> S.elem[i].name;
        system("cls");
        cout << "\n\n\n\n\t\t\t\t" << "请输入学生学号:" << endl;
        cin >> S.elem[i].ID;
        system("cls");
        cout << "\n\n\n\n\t\t\t\t" << "请输入学生性别:" << endl;
        cin >> S.elem[i].sex;
        system("cls");
        cout << "\n\n\n\n\t\t\t\t" << "请输入学生生日:" << endl;
        cout << "\n\n\n\n\t\t\t\t" << "年/月/日  以空格隔开:" << endl;
        cin >> L.elem[i].birthday.year >> L.elem[i].birthday.month >> L.elem[i].birthday.day;
        system("cls");
        cout << "\n\n\n\n\t\t\t\t" << "请输入学生入学日期:" << endl;
        cout << "\n\n\n\n\t\t\t\t" << "年/月/日  以空格隔开:" << endl;
        cin >> L.elem[i].rediday.year >> L.elem[i].regiday.month >> L.elem[i].regiday.day;
        system("cls");
        cout << "\n\n\n\n\t\t\t\t" << "学生信息录入成功!" << endl;
        Sleep(1000);
        cout << "\n\n\n\n\t\t\t\t" << "是否继续输入?(Y/N)" << endl;
        cin >> choose;
        if(choose == 'N'){
            break;
        }
    }
}


*/


#define MAX_SIZE 1000

#define OK 1
#define ERROR 0   
#define OVERFLOW -2
#include<iostream>
using namespace std;

typedef int Status; //Status 是函数返回值类型，其值是函数结果状态代码。

/*
创建数据类型
*/
typedef struct{
    char name[10];                          //名字
    int age;                                //年龄
}Stu;

/*
创建顺序表
*/
typedef struct{
    int length;                     //顺序表长度
    Stu *elem;                      //顺序表元素
}Sqlist;

Sqlist L;


/*
初始化顺序表
*/
Status Init_List(Sqlist &L){
    L.elem = new Stu[MAX_SIZE];             //为顺序表分配空间
    if(!L.elem){
        exit(OVERFLOW);                     //分配失败
    }
    L.length = 0;                           //初始化顺序表长度
    return OK;
}


/*
顺序表的取值
*/
Status GetElem(Sqlist L, int i, Stu &e){
    if(i < 1 || i > L.length){                  //判断i的范围是否有效
        return ERROR;               
    }
    e = L.elem[i - 1];
    return OK;
}



/*
顺序表的查找
*/
Status LocateElem(Sqlist L, Stu e){
    for(int i = 0; i < L.length; i++){
        if(L.elem[i].age == e.age){
            return i + 1;
        }
    }
    return ERROR;
}

/*
顺序表的插入
*/
Status ListInsert(Sqlist &L, int i, Stu e){
    if(i < 1 || i > L.length + 1){                  //判断i的范围是否有效
        return ERROR;               
    }
    if(L.length == MAX_SIZE){                       //判断顺序表是否已满
        return ERROR;
    }
    for(int j = L.length - 1; j >= i - 1; j--){     //将第i个元素及之后的元素后移
        L.elem[j + 1] = L.elem[j];
    }
    L.elem[i - 1] = e;                              //将e插入到第i个位置
    L.length++;                                     //顺序表长度加1
    return OK;
}

/*
顺序表的删除
*/
Status ListDelete(Sqlist &L, int i){
    if(i < 1 || i > L.length){                  //判断i的范围是否有效
        return ERROR;               
    }
    for(int j = i; j < L.length; j++){          //将第i个元素之后的元素前移
        L.elem[j - 1] = L.elem[j];
    }
    L.length--;                                 //顺序表长度减1
    return OK;
}
