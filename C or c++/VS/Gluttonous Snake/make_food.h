#pragma once
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>











/*
����ʳ��
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
    printf("��");

}




/*
�ж�����û�гԵ�ʳ��
    return 1:   �Ե���
    return 0:   û�Ե�
*/
int food_judge(Sqlist& S, int n, int* food_x, int* food_y) {


    if (S.elem[n].x == *food_x && S.elem[n].y == *food_y) {

        S.elem[n].score += 1;              //�Ե�ʳ��   �÷�+1
        S.elem[n].len += 1;                //�Ե�ʳ��   �߳�+1

        S.elem[n].body[S.elem[n].len - 1].x = S.elem[n].body[S.elem[n].len - 2].x;           //���ߵ������ӳ�   
        S.elem[n].body[S.elem[n].len - 1].y = S.elem[n].body[S.elem[n].len - 2].y;           //�ӳ�������һ��������������ԭ�����һ�����������
        //��һ�δ�ӡ  ����ǰ�ƶ�һ��  �ٴ�ӡ��ԭ�ȵ����һ������ �߱��ӳ�


        return 1;
    }
    return 0;
}