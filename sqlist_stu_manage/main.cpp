#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


#include<iostream>
using namespace  std;






#include"screen.h"
void welcome();                     //程序启动时播放
void systemIn();                    //选择 1.信息管理 还是 2.成绩管理
void GradeWelcome_menu();           //选择成绩管理时播放
void InformationWelcome_menu();     //选择信息管理时播放




void  printfquit();                 //程序退出时播放





#include"Sqlist.h"
void infromation_Input(Sqlist &S);          //输入学生信息
void grade_input(Sqlist &S);                //输入学生成绩


int main(){
    welcome();
    Sleep(300);


    systemIn();

    int temp_1 = 0;


    while(1){

        cin >> temp_1;

        if(temp_1 == 1){
            InformationWelcome_menu();

        }
        if(temp_1 == 2){
            GradeWelcome_menu();

        }
        if(temp_1 == 0){
            exit(0);
        }



    }






    

}

