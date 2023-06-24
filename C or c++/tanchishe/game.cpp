#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


#include<iostream>
using namespace std;


#include"cursor.h"




#include"snake.h"
#include"screen.h"
#include"make_food.h"


int food_x = 0;                                                      //食物的横坐标
int food_y = 0;                                                      //食物的纵坐标
void MakeFood(int *food_x, int *food_y);              //生成食物  



void HideCursor();                      //将画面中的光标隐藏
void CursorJump(int x, int y);          //将光标跳转到指定的位置进行输出


void Initlist(Sqlist &S);           //初始化顺序表




void Creat_snake(Sqlist &S, int n);                          //创建一条蛇
void PrintSnake( int flag_printSnake, Sqlist S, int n);      // 打印蛇||覆盖蛇
void MoveSnake(int x, int y, Sqlist &S, int n);              //玩家蛇的移动
int move_judge(Sqlist &S, int n);                                //判断蛇移动后是否还活着
int move_judge_AI(Sqlist &S);                                      //判断人机移动后是否还活着
int food_judge(Sqlist &S, int n, int* food_x, int* food_y);                                //判断蛇有没有吃到食物






void printfquit();                      //在程序退出时播放
void welcome();                         //在程序启动时播放
void systemIn();                        //程序分为两个模块{单人战役，人机对战}   在此处选择进行操作的模块
void grade_menu();                      //选择战绩管理时播放的菜单
void singleplay_menu();                 //选择单人战役时播放的菜单
void AIplay_menu();                     //选择人机对战时播放的菜单
void game_line();                        //显示游戏的主体画面
void show_time();                       //在游戏右上角显示进行游戏的时长
void death_play();                      //在蛇死亡的时候播放


void Print_Grade(Sqlist S);             //打印玩家历史战绩




void color(int x);          //设置颜色



void singleplay(Sqlist &S, int n, int* food_x, int* food_y);                //单人战役
void easy_single(Sqlist &S, int n, int *food_x, int *food_y);               //单人战役->简单模式
void ordinary_single(Sqlist &S, int n, int *food_x, int *food_y);           //单人战役->普通模式
void hard_single(Sqlist &S, int n, int *food_x, int *food_y);               //单人战役->困难模式




void AIplay(Sqlist &S, int* food_x, int* food_y, int k);                       //人机对战
void easy_AI(Sqlist &S, int *food_x, int *food_y, int k);               //人机对战->简单模式
void ordinary_AI(Sqlist &S, int *food_x, int *food_y, int k);           //人机对战->普通模式
void hard_AI(Sqlist &S, int *food_x, int *food_y, int k);               //人机对战->困难模式

void AI_move_easy(Sqlist &S, int* food_x, int* food_y);              //人机对战  简单模式  人机的移动
void AI_move_ordinary(Sqlist &S, int* food_x, int* food_y);          //人机对战  普通模式  人机的移动
void AI_move_hard(Sqlist &S, int* food_x, int* food_y);              //人机对战  困难模式  人机的移动

void death_play_AI();                                                  //人机死亡后播放
void Init_AI(Sqlist &S);                                                //初始化人机





int main(){
    Sqlist S;
    HideCursor();
    welcome();
    Initlist(S);


    while(1){
        Creat_snake(S, S.length);
        systemIn();
        char x;
        x = _getch();
        switch (x){
        case '1':
            singleplay_menu();
            singleplay(S, S.length, &food_x, &food_y);
            break;
        
        case '2':
            AIplay_menu();
            AIplay(S, &food_x, &food_y, S.length);
            break;
        default :
            printfquit();
            break;
        }
    }
}









/*
单人战役菜单
    @S:接收顺序表
    @n:第n条蛇
    @food_x:食物的横坐标  传址调用
    @food_y:食物的纵坐标  传址调用
        菜单选择时
            选择 1：打印目前所有蛇的成绩
            选择 2：单人战役，简单模式
            选择 3：单人战役，普通模式
            选择 4：单人战役，困难模式
        
*/
void singleplay(Sqlist &S, int n, int* food_x, int* food_y){

    n -= 1;                                                 //在顺序表内第 n 条蛇的下标是 n - 1

    char x = '1';
    singleplay_menu();
    x = _getch();
    switch (x)
    {
    case '1':
        Print_Grade(S);                                     //打印所有蛇的战绩                            
        break;
    
    case '2':
        easy_single(S, n, food_x, food_y);                  //简单模式
        break;
    case '3':
        ordinary_single(S, n, food_x, food_y);              //普通模式
        break;
    case '4':
        hard_single(S, n, food_x, food_y);                  //困难模式
        break;
    
    default:
    printfquit();
    }

}






/*
单人战役  简单模式
    @S:接收顺序表
    @n:第n条蛇
    @food_x:食物的横坐标  传址调用
    @food_y:食物的纵坐标  传址调用

*/
void easy_single(Sqlist &S, int n, int* food_x, int* food_y){


    game_line();                                                         //打印游戏界面框架
    PrintSnake(1, S, n);
    
    char ch = 'D';
    int x = 1;
    int y = 0;
    MakeFood(food_x, food_y);
    while(move_judge(S, n)){
        Sleep(1000);
        if (food_judge(S, n, food_x, food_y)){             //判断 食物是否存在 或者 食物被吃掉了 
            MakeFood(food_x, food_y);                                       //生成一个新的食物
        }
        if (_kbhit()) {                                 // 检查是否有输入
            ch = _getch();                              // 获取字符
            if(ch == 'w' || ch == 'W'){
                y = -1;
                x = 0; 
            }
            if(ch == 's' || ch == 'W'){
                y = 1;
                x = 0; 
            }
            if(ch == 'a' || ch == 'A'){
                y = 0;
                x = -1; 
            }
            if(ch == 'd' || ch == 'D'){
                y = 0;
                x = 1; 
            }
        }  
        MoveSnake(x, y, S, n);                              // 在等待输入时，程序可以做其他事情
    }
    if(!move_judge(S, n)){
        death_play();
        system("pause");
    }
}



/*
单人战役  普通模式
    @S:接收顺序表
    @n:第n条蛇
    @food_x:食物的横坐标  传址调用
    @food_y:食物的纵坐标  传址调用

*/
void ordinary_single(Sqlist &S, int n, int* food_x, int* food_y){


    game_line();                                                         //打印游戏界面框架
    PrintSnake(1, S, n);
    
    char ch = 'D';
    int x = 1;
    int y = 0;
    MakeFood(food_x, food_y);
    while(move_judge(S, n)){
        Sleep(750);
        if (food_judge(S, n, food_x, food_y)){             //判断 食物是否存在 或者 食物被吃掉了 
            MakeFood(food_x, food_y);                                       //生成一个新的食物
        }
        if (_kbhit()) {  // 检查是否有输入
            ch = _getch();  // 获取字符
            if(ch == 'w' || ch == 'W'){
                y = -1;
                x = 0; 
            }
            if(ch == 's' || ch == 'W'){
                y = 1;
                x = 0; 
            }
            if(ch == 'a' || ch == 'A'){
                y = 0;
                x = -1; 
            }
            if(ch == 'd' || ch == 'D'){
                y = 0;
                x = 1; 
            }
        }  
        MoveSnake(x, y, S, n);                              // 在等待输入时，程序可以做其他事情
    }
    if(!move_judge(S, n)){
        death_play();
        system("pause");
    }
}







/*
单人战役  困难模式
    @S:接收顺序表
    @n:第n条蛇
    @food_x:食物的横坐标  传址调用
    @food_y:食物的纵坐标  传址调用

*/
void hard_single(Sqlist &S, int n, int* food_x, int* food_y){


    game_line();                                                         //打印游戏界面框架
    PrintSnake(1, S, n);
    
    char ch = 'D';
    int x = 1;
    int y = 0;
    MakeFood(food_x, food_y);
    while(move_judge(S, n)){
        Sleep(500);
        if (food_judge(S, n, food_x, food_y)){             //判断 食物是否存在 或者 食物被吃掉了 
            MakeFood(food_x, food_y);                                       //生成一个新的食物
        }
        if (_kbhit()) {                                     // 检查是否有输入
            ch = _getch();                                  // 获取字符
            if(ch == 'w' || ch == 'W'){
                y = -1;
                x = 0; 
            }
            if(ch == 's' || ch == 'W'){
                y = 1;
                x = 0; 
            }
            if(ch == 'a' || ch == 'A'){
                y = 0;
                x = -1; 
            }
            if(ch == 'd' || ch == 'D'){
                y = 0;
                x = 1; 
            }
        }  
        MoveSnake(x, y, S, n);                              // 在等待输入时，程序可以做其他事情
    }
    if(!move_judge(S, n)){
        death_play();
        system("pause");
    }
}















/*
人机对战菜单
    @S:接收顺序表
    @n:第n条蛇
    @food_x:食物的横坐标  传址调用
    @food_y:食物的纵坐标  传址调用
        菜单选择时
            选择 1：打印目前所有蛇的成绩
            选择 2：单人战役，简单模式
            选择 3：单人战役，普通模式
            选择 4：单人战役，困难模式
        
*/
void AIplay(Sqlist &S, int* food_x, int* food_y, int k){

    k = k - 1;                      //在顺序表内第 k 条蛇的下标是 k - 1

    char x = '1';
    AIplay_menu();
    x = _getch();
    switch (x)
    {
    case '1':
        Print_Grade(S);                                     //打印所有蛇的战绩                            
        break;
    
    case '2':
        easy_AI(S, food_x, food_y, k);                  //简单模式
        break;
    case '3':
        ordinary_AI(S, food_x, food_y, k);              //普通模式
        break;
    case '4':
        hard_AI(S, food_x, food_y, k);                  //困难模式
        break;
    
    default:
    printfquit();
    }

}



/*
人机对战  简单模式
@S:接受顺序表  获取蛇的信息
@n:接受人机蛇
@food_x && food_y : 当前游戏中食物的坐标  通过食物的坐标确定人机的移动方向
@k:接受玩家蛇
*/
void easy_AI(Sqlist &S, int *food_x, int *food_y, int k){

    game_line();                                                         //打印游戏界面框架
    PrintSnake(1, S, k);
    
    char ch = 'D';
    int x = 1;
    int y = 0;
    MakeFood(food_x, food_y);
    while(move_judge(S, k) && move_judge_AI(S)){
        Sleep(1000);
        if (food_judge(S, 20, food_x, food_y) || food_judge(S, k, food_x, food_y)){             //判断 食物是否存在 或者 食物被吃掉了 
            MakeFood(food_x, food_y);                                                          //生成一个新的食物
        }
        if (_kbhit()) {                                     // 检查是否有输入
            ch = _getch();                                  // 获取字符
            if(ch == 'w' || ch == 'W'){                     //通过获取的字符确定蛇的移动方向
                y = -1;
                x = 0; 
            }
            if(ch == 's' || ch == 'W'){
                y = 1;
                x = 0; 
            }
            if(ch == 'a' || ch == 'A'){
                y = 0;
                x = -1; 
            }
            if(ch == 'd' || ch == 'D'){
                y = 0;
                x = 1; 
            }
        }  
        MoveSnake(x, y, S, k);                              //在键盘没有输入时，程序执行的语句
        AI_move_easy(S, food_x, food_y);                 //玩家蛇按照上一次的按键移动  人机随后移动
    }
    if(!move_judge(S, k)){                                  //玩家失败了播放的画面
        death_play();
        system("pause");
    }
    if(!move_judge_AI(S)){                                  //人机失败播放的画面
        death_play_AI();
        system("pause");
        Init_AI(S);
        S.elem[k].score += 10;
    }

}






/*
人机对战  普通模式
@S:接受顺序表  获取蛇的信息
@n:接受人机蛇
@food_x && food_y : 当前游戏中食物的坐标  通过食物的坐标确定人机的移动方向
@k:接受玩家蛇
*/
void ordinary_AI(Sqlist &S, int *food_x, int *food_y, int k){

    game_line();                                                         //打印游戏界面框架
    PrintSnake(1, S, k);
    
    char ch = 'D';
    int x = 1;
    int y = 0;
    MakeFood(food_x, food_y);
    while(move_judge(S, k) && move_judge_AI(S)){
        Sleep(750);
        if (food_judge(S, 20, food_x, food_y) || food_judge(S, k, food_x, food_y)){             //判断 食物是否存在 或者 食物被吃掉了 
            MakeFood(food_x, food_y);                                                          //生成一个新的食物
        }
        if (_kbhit()) {                                     // 检查是否有输入
            ch = _getch();                                  // 获取字符
            if(ch == 'w' || ch == 'W'){                     //通过获取的字符确定蛇的移动方向
                y = -1;
                x = 0; 
            }
            if(ch == 's' || ch == 'W'){
                y = 1;
                x = 0; 
            }
            if(ch == 'a' || ch == 'A'){
                y = 0;
                x = -1; 
            }
            if(ch == 'd' || ch == 'D'){
                y = 0;
                x = 1; 
            }
        }  
        MoveSnake(x, y, S, k);                              //在键盘没有输入时，程序执行的语句
        AI_move_ordinary(S, food_x, food_y);                 //玩家蛇按照上一次的按键移动  人机随后移动
    }
    if(!move_judge(S, k)){                                  //玩家失败了播放的画面
        death_play();
        system("pause");
    }
    if(!move_judge_AI(S)){                                  //人机失败播放的画面
        death_play_AI();
        system("pause");
        Init_AI(S);
        S.elem[k].score += 30;
    }


}






/*
人机对战  困难模式
@S:接受顺序表  获取蛇的信息
@n:接受人机蛇
@food_x && food_y : 当前游戏中食物的坐标  通过食物的坐标确定人机的移动方向
@k:接受玩家蛇
*/
void hard_AI(Sqlist &S, int *food_x, int *food_y, int k){

    game_line();                                                         //打印游戏界面框架
    PrintSnake(1, S, k);
    
    char ch = 'D';
    int x = 1;
    int y = 0;
    MakeFood(food_x, food_y);
    while(move_judge(S, k) && move_judge_AI(S)){
        Sleep(500);
        if (food_judge(S, 20, food_x, food_y) || food_judge(S, k, food_x, food_y)){             //判断 食物是否存在 或者 食物被吃掉了 
            MakeFood(food_x, food_y);                                                          //生成一个新的食物
        }
        if (_kbhit()) {                                     // 检查是否有输入
            ch = _getch();                                  // 获取字符
            if(ch == 'w' || ch == 'W'){                     //通过获取的字符确定蛇的移动方向
                y = -1;
                x = 0; 
            }
            if(ch == 's' || ch == 'W'){
                y = 1;
                x = 0; 
            }
            if(ch == 'a' || ch == 'A'){
                y = 0;
                x = -1; 
            }
            if(ch == 'd' || ch == 'D'){
                y = 0;
                x = 1; 
            }
        }  
        MoveSnake(x, y, S, k);                              //在键盘没有输入时，程序执行的语句
        AI_move_hard(S, food_x, food_y);                 //玩家蛇按照上一次的按键移动  人机随后移动
    }
    if(!move_judge(S, k)){                                  //玩家失败了播放的画面
        death_play();
        system("pause");
    }
    if(!move_judge_AI(S)){                                  //人机失败播放的画面
        death_play_AI();
        system("pause");
        Init_AI(S);
        S.elem[k].score += 50;
    }

}



