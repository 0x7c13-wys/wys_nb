#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>




#define row  22    //y                        //�涨��Ϸ�����ڴ�С   22��  100��
#define col  100   //x                        //�ߵ��˶��Լ���Ϸ�Ĳ˵�������������ʵ��
#define Max_Sanke_Length  50                //��Ϸ��ÿ�����50��
#define Max_Snake 21                        //��Ϸ�����Ա���20����






struct snake_body {      //ÿ����ͷ������ֻ��һ��������֮��Ӧ
    int x;                  //��¼���������( x > 0 && x < 100)
    int y;                  //��¼����������( y > 0 && y < 25)
}body[Max_Sanke_Length];


typedef struct {       //��ͷ                                           //�����������洢  ��������ĳ��ȴ�����ͷ�ṹ�������Ϊ����
    int len;             //��¼�����峤��                  
    int x;                  //��ͷ������( x > 0 && x < 100)             
    int y;                  //��ͷ������( y > 0 && y < 25)
    int score;              //��¼ÿ����Ϸ�ĵ÷�
    char name[20];          //Ϊÿ��������
    struct snake_body body[Max_Sanke_Length];
}snake;


/*
����˳���
*/
typedef struct
{
    int length;
    snake* elem;

}Sqlist;


/*
��ʼ��˳���
    @&s ����˳���
*/
void Initlist(Sqlist& S) {
    S.elem = new snake[Max_Snake];
    S.length = 0;
}


/*
������
@&S:����˳���ͨ��˳�������ߵ���Ϣ
@i:��ʼ���ڼ�����
@S.elem[n].x:��i���ߵ�ͷ�ĺ�����
@S.elem[n].y:��i���ߵ�ͷ��������
@S.elem[n].body[i].x:��n����i��������ĺ�����
@S.elem[n].body[i].y:��n����i���������������
*/
void Creat_snake(Sqlist& S, int n) {



    /*�����ͷ�Ĵ���*/
    S.elem[n].len = 2;
    S.elem[n].x = col / 2;
    S.elem[n].y = row / 2;

    /*�������Ĵ���*/
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
    printf("\t\t\t\t***          �⽫����ĵ�%d����Ϸ        ***\n", ++k);
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***   Ϊ�㱾����Ϸ��������:             ***\n");               //�û�����
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");


    CursorJump(60, 10);
    cin >> S.elem[n].name;
    S.length += 1;



    /*�˻���ͷ�Ĵ���*/
    S.elem[20].len = 2;
    S.elem[20].x = col / 3;
    S.elem[20].y = row / 3;

    /*�˻�����Ĵ���*/
    S.elem[20].body[0].x = col / 3 - 1;
    S.elem[20].body[0].y = row / 3;
    S.elem[20].body[1].x = col / 3 - 2;
    S.elem[20].body[1].y = row / 3;

    S.elem[20].len = 2;

    S.elem[20].score = 0;

    strcpy(S.elem[20].name, "�˻�");


}



/*
��ʼ���˻���
*/
void Init_AI(Sqlist& S) {
    /*�˻���ͷ�Ĵ���*/
    S.elem[20].len = 2;
    S.elem[20].x = col / 3;
    S.elem[20].y = row / 3;

    /*�˻�����Ĵ���*/
    S.elem[20].body[0].x = col / 3 - 1;
    S.elem[20].body[0].y = row / 3;
    S.elem[20].body[1].x = col / 3 - 2;
    S.elem[20].body[1].y = row / 3;

    S.elem[20].len = 2;

    S.elem[20].score = 0;

    strcpy(S.elem[20].name, "�˻�");
}



/*
��ӡ�߻򸲸���
@flag_printSnake: ����״ֵ̬
                    ���  flag_printSnake == 1 �������´�ӡ��һ����
                              ����             ������֮ǰ��ӡ����
@&S:����˳���ͨ��˳�������ߵ���Ϣ
@S.elem[i].x:��ӡ���ߵ�ͷ�ĺ�����
@S.elem[i].y:��ӡ���ߵ�ͷ��������
@S.elem[i].body[n].x:��ӡ�ĵ�i��������ĺ�����
@S.elem[i].body[n].y:��ӡ�ĵ�i���������������
*/
void PrintSnake(int flag_printSnake, Sqlist S, int n) {
    if ((n == 20)) {                                    //��ӡ�˻���
        if (flag_printSnake == 1) {       //��ӡ��
            color(15);
            CursorJump(S.elem[n].x, S.elem[n].y);                                           //���������ͷ
            printf("��");
            int i = 0;
            for (i = 0; i < S.elem[n].len; i++) {                                              //��ӡn������
                CursorJump(S.elem[n].body[i].x, S.elem[n].body[i].y);                       //���������n���ߵĵ�i������
                printf("��");
            }
        }
        else {                       //������    �����ߵ����һ������
            CursorJump(S.elem[n].body[S.elem[n].len - 1].x, S.elem[n].body[S.elem[n].len - 1].y);
            printf(" ");
        }
    }
    else {                                           //��ӡ�����
        if (flag_printSnake == 1) {       //��ӡ��
            color(10);
            CursorJump(S.elem[n].x, S.elem[n].y);                                           //���������ͷ
            printf("��");
            int i = 0;
            for (i = 0; i < S.elem[n].len; i++) {                                              //��ӡn������
                CursorJump(S.elem[n].body[i].x, S.elem[n].body[i].y);                       //���������n���ߵĵ�i������
                printf("��");
            }
        }
        else {                       //������    �����ߵ����һ������
            CursorJump(S.elem[n].body[S.elem[n].len - 1].x, S.elem[n].body[S.elem[n].len - 1].y);
            printf(" ");
        }
    }
}



/*
�ƶ���
@&S:����˳���ͨ��˳�������ߵ���Ϣ
@x: x����ͷ������ı仯���������Ǳ仯�����ͷ����
@y: y����ͷ������ı仯���������Ǳ仯�����ͷ����
 */
void MoveSnake(int x, int y, Sqlist& S, int n) {


    PrintSnake(0, S, n);                                   //�Ƚ��ߵ����һ�����帲��
    for (int i = S.elem[n].len - 1; i > 0; i--) {
        S.elem[n].body[i].x = S.elem[n].body[i - 1].x;      //����[i]����������긳����[i + 1]��
        S.elem[n].body[i].y = S.elem[n].body[i - 1].y;      //ÿһ��������ǰ�ƶ�һ��
    }
    S.elem[n].body[0].x = S.elem[n].x;                      //��ԭ��ͷ�����긳����һ������
    S.elem[n].body[0].y = S.elem[n].y;

    S.elem[n].x += x;                                     //ͨ����ͷ����ı仯���ı���ͷ������
    S.elem[n].y += y;
    PrintSnake(1, S, n);                                   //��ӡ���µ���
}






/*
�ж����ƶ����Ƿ񻹻���
    return 1 :   �߻�����   û��ײǽ
    return 0 :   ��ײǽ ����
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
�ж��˻��ƶ����Ƿ񻹻���
    return 1 :   �߻�����   û��ײǽ
    return 0 :   ��ײǽ ����
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
�˻���ս  ��ģʽ �˻��ߵ��ƶ�
@S:����˳���ͨ��˳�������ߵ���Ϣ
@food_x && food_y : ��ǰ��Ϸ��ʳ�������  ͨ��ʳ�������ȷ���˻����ƶ�����
*/
void AI_move_easy(Sqlist& S, int* food_x, int* food_y) {


    srand((unsigned)time(NULL));                        //�������һ����
    int temp = rand() % 100;


    if (S.elem[20].x < *food_x) {
        if (temp < 25) {                                  //��� temp < 25  ��ô�߾ͻᳯ��ʳ���ƶ�
            if (S.elem[20].y < *food_y) {                  //����25%�ļ��ʳ���ʳ���ƶ�
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
        if (temp < 25) {                                  //��� temp < 25  ��ô�߾ͻᳯ��ʳ���ƶ�
            if (S.elem[20].y < *food_y) {                  //����25%�ļ��ʳ���ʳ���ƶ�
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
        if (temp < 25) {                                      //��� temp < 25  ��ô�߾ͻᳯ��ʳ���ƶ�
            if (S.elem[20].y < *food_y) {                      //����25%�ļ��ʳ���ʳ���ƶ�
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
�˻���ս  ��ͨģʽ �˻��ߵ��ƶ�
@S:����˳���ͨ��˳�������ߵ���Ϣ
@food_x && food_y : ��ǰ��Ϸ��ʳ�������  ͨ��ʳ�������ȷ���˻����ƶ�����
*/
void AI_move_ordinary(Sqlist& S, int* food_x, int* food_y) {
    srand((unsigned)time(NULL));                        //�������һ����
    int temp = rand() % 100;
    if (S.elem[20].x < *food_x) {
        if (temp < 50) {                                  //��� temp < 50  ��ô�߾ͻᳯ��ʳ���ƶ�
            if (S.elem[20].y < *food_y) {                  //����50%�ļ��ʳ���ʳ���ƶ�
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
        if (temp < 50) {                                  //��� temp < 50  ��ô�߾ͻᳯ��ʳ���ƶ�
            if (S.elem[20].y < *food_y) {                  //����50%�ļ��ʳ���ʳ���ƶ�
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
        if (temp < 50) {                                      //��� temp < 50  ��ô�߾ͻᳯ��ʳ���ƶ�
            if (S.elem[20].y < *food_y) {                      //����50%�ļ��ʳ���ʳ���ƶ�
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
�˻���ս  ����ģʽ �˻��ߵ��ƶ�
@S:����˳���ͨ��˳�������ߵ���Ϣ
@food_x && food_y : ��ǰ��Ϸ��ʳ�������  ͨ��ʳ�������ȷ���˻����ƶ�����
*/
void AI_move_hard(Sqlist& S, int* food_x, int* food_y) {


    srand((unsigned)time(NULL));                        //�������һ����
    int temp = rand() % 100;


    if (S.elem[20].x < *food_x) {
        if (temp < 75) {                                  //��� temp < 75  ��ô�߾ͻᳯ��ʳ���ƶ�
            if (S.elem[20].y < *food_y) {                  //����75%�ļ��ʳ���ʳ���ƶ�
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
        if (temp < 75) {                                  //��� temp < 75  ��ô�߾ͻᳯ��ʳ���ƶ�
            if (S.elem[20].y < *food_y) {                  //����75%�ļ��ʳ���ʳ���ƶ�
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
        if (temp < 75) {                                      //��� temp < 75  ��ô�߾ͻᳯ��ʳ���ƶ�
            if (S.elem[20].y < *food_y) {                      //����75%�ļ��ʳ���ʳ���ƶ�
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






