#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>




#define row  22    //y                        //规定游戏主窗口大小   22行  100列
#define col  100   //x                        //蛇的运动以及游戏的菜单都在主窗口内实现
#define Max_Sanke_Length  50                //游戏内每条蛇最长50格
#define Max_Snake 21                        //游戏最多可以保存20条蛇






struct snake_body {      //每个蛇头都有且只有一个蛇身与之对应
    int x;                  //记录蛇身横坐标( x > 0 && x < 100)
    int y;                  //记录蛇身纵坐标( y > 0 && y < 25)
}body[Max_Sanke_Length];


typedef struct {       //蛇头                                           //蛇身采用数组存储  所以蛇身的长度存在蛇头结构体数组较为方便
    int len;             //记录蛇身体长度                  
    int x;                  //蛇头横坐标( x > 0 && x < 100)             
    int y;                  //蛇头纵坐标( y > 0 && y < 25)
    int score;              //记录每词游戏的得分
    char name[20];          //为每条蛇命名
    struct snake_body body[Max_Sanke_Length];
}snake;


/*
创建顺序表
*/
typedef struct
{
    int length;
    snake* elem;

}Sqlist;


/*
初始化顺序表
    @&s 传入顺序表
*/
void Initlist(Sqlist& S) {
    S.elem = new snake[Max_Snake];
    S.length = 0;
}


/*
创建蛇
@&S:接受顺序表，通过顺序表访问蛇的信息
@i:初始化第几条蛇
@S.elem[n].x:第i条蛇的头的横坐标
@S.elem[n].y:第i条蛇的头的纵坐标
@S.elem[n].body[i].x:第n条第i节蛇身体的横坐标
@S.elem[n].body[i].y:第n条第i节蛇身体的纵坐标
*/
void Creat_snake(Sqlist& S, int n) {



    /*玩家蛇头的创建*/
    S.elem[n].len = 2;
    S.elem[n].x = col / 2;
    S.elem[n].y = row / 2;

    /*玩家蛇身的创建*/
    S.elem[n].body[0].x = col / 2 - 1;
    S.elem[n].body[0].y = row / 2;
    S.elem[n].body[1].x = col / 2 - 2;
    S.elem[n].body[1].y = row / 2;

    S.elem[n].score = 0;

    S.elem[n].len = 2;
    int k = S.length;

    system("cls");
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***          这将是你的第%d次游戏        ***\n", ++k);
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***   为你本次游戏的蛇命名:             ***\n");               //用户界面
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");


    CursorJump(60, 10);
    cin >> S.elem[n].name;
    S.length += 1;



    /*人机蛇头的创建*/
    S.elem[20].len = 2;
    S.elem[20].x = col / 3;
    S.elem[20].y = row / 3;

    /*人机蛇身的创建*/
    S.elem[20].body[0].x = col / 3 - 1;
    S.elem[20].body[0].y = row / 3;
    S.elem[20].body[1].x = col / 3 - 2;
    S.elem[20].body[1].y = row / 3;

    S.elem[20].len = 2;

    S.elem[20].score = 0;

    strcpy(S.elem[20].name, "人机");


}



/*
初始化人机蛇
*/
void Init_AI(Sqlist& S) {
    /*人机蛇头的创建*/
    S.elem[20].len = 2;
    S.elem[20].x = col / 3;
    S.elem[20].y = row / 3;

    /*人机蛇身的创建*/
    S.elem[20].body[0].x = col / 3 - 1;
    S.elem[20].body[0].y = row / 3;
    S.elem[20].body[1].x = col / 3 - 2;
    S.elem[20].body[1].y = row / 3;

    S.elem[20].len = 2;

    S.elem[20].score = 0;

    strcpy(S.elem[20].name, "人机");
}



/*
打印蛇或覆盖蛇
@flag_printSnake: 接受状态值
                    如果  flag_printSnake == 1 ，则重新打印出一条蛇
                              否则             ，覆盖之前打印的蛇
@&S:接受顺序表，通过顺序表访问蛇的信息
@S.elem[i].x:打印的蛇的头的横坐标
@S.elem[i].y:打印的蛇的头的纵坐标
@S.elem[i].body[n].x:打印的第i节蛇身体的横坐标
@S.elem[i].body[n].y:打印的第i节蛇身体的纵坐标
*/
void PrintSnake(int flag_printSnake, Sqlist S, int n) {
    if ((n == 20)) {                                    //打印人机蛇
        if (flag_printSnake == 1) {       //打印蛇
            color(15);
            CursorJump(S.elem[n].x, S.elem[n].y);                                           //光标跳到蛇头
            printf("■");
            int i = 0;
            for (i = 0; i < S.elem[n].len; i++) {                                              //打印n节蛇身
                CursorJump(S.elem[n].body[i].x, S.elem[n].body[i].y);                       //光标跳到第n条蛇的第i节蛇身
                printf("□");
            }
        }
        else {                       //覆盖蛇    覆盖蛇的最后一节身体
            CursorJump(S.elem[n].body[S.elem[n].len - 1].x, S.elem[n].body[S.elem[n].len - 1].y);
            printf(" ");
        }
    }
    else {                                           //打印玩家蛇
        if (flag_printSnake == 1) {       //打印蛇
            color(10);
            CursorJump(S.elem[n].x, S.elem[n].y);                                           //光标跳到蛇头
            printf("■");
            int i = 0;
            for (i = 0; i < S.elem[n].len; i++) {                                              //打印n节蛇身
                CursorJump(S.elem[n].body[i].x, S.elem[n].body[i].y);                       //光标跳到第n条蛇的第i节蛇身
                printf("□");
            }
        }
        else {                       //覆盖蛇    覆盖蛇的最后一节身体
            CursorJump(S.elem[n].body[S.elem[n].len - 1].x, S.elem[n].body[S.elem[n].len - 1].y);
            printf(" ");
        }
    }
}



/*
移动蛇
@&S:接受顺序表，通过顺序表访问蛇的信息
@x: x是蛇头横坐标的变化量，并不是变化后的蛇头坐标
@y: y是蛇头纵坐标的变化量，并不是变化后的蛇头坐标
 */
void MoveSnake(int x, int y, Sqlist& S, int n) {


    PrintSnake(0, S, n);                                   //先将蛇的最后一节身体覆盖
    for (int i = S.elem[n].len - 1; i > 0; i--) {
        S.elem[n].body[i].x = S.elem[n].body[i - 1].x;      //将第[i]节身体的坐标赋给第[i + 1]节
        S.elem[n].body[i].y = S.elem[n].body[i - 1].y;      //每一节蛇身都往前移动一节
    }
    S.elem[n].body[0].x = S.elem[n].x;                      //将原蛇头的坐标赋给第一节身体
    S.elem[n].body[0].y = S.elem[n].y;

    S.elem[n].x += x;                                     //通过蛇头坐标的变化量改变蛇头的坐标
    S.elem[n].y += y;
    PrintSnake(1, S, n);                                   //打印出新的蛇
}






/*
判断蛇移动后是否还活着
    return 1 :   蛇还活着   没有撞墙
    return 0 :   蛇撞墙 死了
*/
int move_judge(Sqlist& S, int n) {



    if (S.elem[n].x == 0 || S.elem[n].y == 0) {
        return 0;
    }
    else if (S.elem[n].x == 100 || S.elem[n].y == 24) {
        return 0;
    }
    else {
        return 1;
    }
}





/*
判断人机移动后是否还活着
    return 1 :   蛇还活着   没有撞墙
    return 0 :   蛇撞墙 死了
*/
int move_judge_AI(Sqlist& S) {

    if (S.elem[20].x == 0 || S.elem[20].y == 0) {
        return 0;
    }
    else if (S.elem[20].x == 100 || S.elem[20].y == 22) {
        return 0;
    }
    else {
        return 1;
    }
}




/*
人机对战  简单模式 人机蛇的移动
@S:接收顺序表，通过顺序表访问蛇的信息
@food_x && food_y : 当前游戏中食物的坐标  通过食物的坐标确定人机的移动方向
*/
void AI_move_easy(Sqlist& S, int* food_x, int* food_y) {


    srand((unsigned)time(NULL));                        //随机生成一个数
    int temp = rand() % 100;


    if (S.elem[20].x < *food_x) {
        if (temp < 25) {                                  //如果 temp < 25  那么蛇就会朝着食物移动
            if (S.elem[20].y < *food_y) {                  //蛇有25%的几率朝着食物移动
                MoveSnake(1, 1, S, 20);
            }
            if (S.elem[20].y == *food_y) {
                MoveSnake(1, 0, S, 20);
            }
            if (S.elem[20].y > *food_y) {
                MoveSnake(1, -1, S, 20);
            }
        }
        else {
            MoveSnake(0, -1, S, 20);
        }
    }

    if (S.elem[20].x == *food_x) {
        if (temp < 25) {                                  //如果 temp < 25  那么蛇就会朝着食物移动
            if (S.elem[20].y < *food_y) {                  //蛇有25%的几率朝着食物移动
                MoveSnake(0, 1, S, 20);
            }
            if (S.elem[20].y == *food_y) {
                MoveSnake(0, 0, S, 20);
            }
            if (S.elem[20].y > *food_y) {
                MoveSnake(0, -1, S, 20);
            }
        }
        else {
            MoveSnake(1, 0, S, 20);
        }
    }

    if (S.elem[20].x > *food_x) {
        if (temp < 25) {                                      //如果 temp < 25  那么蛇就会朝着食物移动
            if (S.elem[20].y < *food_y) {                      //蛇有25%的几率朝着食物移动
                MoveSnake(-1, 1, S, 20);
            }
            if (S.elem[20].y == *food_y) {
                MoveSnake(-1, 0, S, 20);
            }
            if (S.elem[20].y > *food_y) {
                MoveSnake(-1, -1, S, 20);
            }
        }
        else {
            MoveSnake(0, -1, S, 20);
        }
    }

}








/*
人机对战  普通模式 人机蛇的移动
@S:接收顺序表，通过顺序表访问蛇的信息
@food_x && food_y : 当前游戏中食物的坐标  通过食物的坐标确定人机的移动方向
*/
void AI_move_ordinary(Sqlist& S, int* food_x, int* food_y) {
    srand((unsigned)time(NULL));                        //随机生成一个数
    int temp = rand() % 100;
    if (S.elem[20].x < *food_x) {
        if (temp < 50) {                                  //如果 temp < 50  那么蛇就会朝着食物移动
            if (S.elem[20].y < *food_y) {                  //蛇有50%的几率朝着食物移动
                MoveSnake(1, 1, S, 20);
            }
            if (S.elem[20].y == *food_y) {
                MoveSnake(1, 0, S, 20);
            }
            if (S.elem[20].y > *food_y) {
                MoveSnake(1, -1, S, 20);
            }
        }
        else {
            MoveSnake(0, -1, S, 20);
        }
    }

    if (S.elem[20].x == *food_x) {
        if (temp < 50) {                                  //如果 temp < 50  那么蛇就会朝着食物移动
            if (S.elem[20].y < *food_y) {                  //蛇有50%的几率朝着食物移动
                MoveSnake(0, 1, S, 20);
            }
            if (S.elem[20].y == *food_y) {
                MoveSnake(0, 0, S, 20);
            }
            if (S.elem[20].y > *food_y) {
                MoveSnake(0, -1, S, 20);
            }
        }
        else {
            MoveSnake(0, -1, S, 20);
        }
    }

    if (S.elem[20].x > *food_x) {
        if (temp < 50) {                                      //如果 temp < 50  那么蛇就会朝着食物移动
            if (S.elem[20].y < *food_y) {                      //蛇有50%的几率朝着食物移动
                MoveSnake(-1, 1, S, 20);
            }
            if (S.elem[20].y == *food_y) {
                MoveSnake(-1, 0, S, 20);
            }
            if (S.elem[20].y > *food_y) {
                MoveSnake(-1, -1, S, 20);
            }
        }
        else {
            MoveSnake(0, -1, S, 20);
        }
    }

}




/*
人机对战  困难模式 人机蛇的移动
@S:接收顺序表，通过顺序表访问蛇的信息
@food_x && food_y : 当前游戏中食物的坐标  通过食物的坐标确定人机的移动方向
*/
void AI_move_hard(Sqlist& S, int* food_x, int* food_y) {


    srand((unsigned)time(NULL));                        //随机生成一个数
    int temp = rand() % 100;


    if (S.elem[20].x < *food_x) {
        if (temp < 75) {                                  //如果 temp < 75  那么蛇就会朝着食物移动
            if (S.elem[20].y < *food_y) {                  //蛇有75%的几率朝着食物移动
                MoveSnake(1, 1, S, 20);
            }
            if (S.elem[20].y == *food_y) {
                MoveSnake(1, 0, S, 20);
            }
            if (S.elem[20].y > *food_y) {
                MoveSnake(1, -1, S, 20);
            }
        }
        else {
            MoveSnake(0, -1, S, 20);
        }
    }

    if (S.elem[20].x == *food_x) {
        if (temp < 75) {                                  //如果 temp < 75  那么蛇就会朝着食物移动
            if (S.elem[20].y < *food_y) {                  //蛇有75%的几率朝着食物移动
                MoveSnake(0, 1, S, 20);
            }
            if (S.elem[20].y == *food_y) {
                MoveSnake(0, 0, S, 20);
            }
            if (S.elem[20].y > *food_y) {
                MoveSnake(0, -1, S, 20);
            }
        }
        else {
            MoveSnake(0, -1, S, 20);
        }
    }

    if (S.elem[20].x > *food_x) {
        if (temp < 75) {                                      //如果 temp < 75  那么蛇就会朝着食物移动
            if (S.elem[20].y < *food_y) {                      //蛇有75%的几率朝着食物移动
                MoveSnake(-1, 1, S, 20);
            }
            if (S.elem[20].y == *food_y) {
                MoveSnake(-1, 0, S, 20);
            }
            if (S.elem[20].y > *food_y) {
                MoveSnake(-1, -1, S, 20);
            }
        }
        else {
            MoveSnake(0, -1, S, 20);
        }
    }

}






