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





/*
输入学生信息
@S:传入顺序表，通过顺序表读取并修改学生信息
*/
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

