#pragma once
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>











/*
生成食物
*/
void MakeFood(int* food_x, int* food_y) {
    srand((unsigned)time(NULL));
    *food_x = rand() % col;
    *food_y = rand() % row;
    if (*food_x == 0) {
        *food_x = rand() % col;
    }
    if (*food_y == 0) {
        *food_y = rand() % row;
    }
    color(12);
    CursorJump(*food_x, *food_y);
    printf("●");

}




/*
判断蛇有没有吃到食物
    return 1:   吃到了
    return 0:   没吃到
*/
int food_judge(Sqlist& S, int n, int* food_x, int* food_y) {


    if (S.elem[n].x == *food_x && S.elem[n].y == *food_y) {

        S.elem[n].score += 1;              //吃到食物   得分+1
        S.elem[n].len += 1;                //吃到食物   蛇长+1

        S.elem[n].body[S.elem[n].len - 1].x = S.elem[n].body[S.elem[n].len - 2].x;           //将蛇的身体延长   
        S.elem[n].body[S.elem[n].len - 1].y = S.elem[n].body[S.elem[n].len - 2].y;           //延长后的最后一节身体的坐标就是原来最后一节身体的坐标
        //下一次打印  蛇往前移动一格  再打印出原先的最后一节身体 蛇被延长


        return 1;
    }
    return 0;
}