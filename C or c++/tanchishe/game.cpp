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


int food_x = 0;                                                      //ʳ��ĺ�����
int food_y = 0;                                                      //ʳ���������
void MakeFood(int *food_x, int *food_y);              //����ʳ��  



void HideCursor();                      //�������еĹ������
void CursorJump(int x, int y);          //�������ת��ָ����λ�ý������


void Initlist(Sqlist &S);           //��ʼ��˳���




void Creat_snake(Sqlist &S, int n);                          //����һ����
void PrintSnake( int flag_printSnake, Sqlist S, int n);      // ��ӡ��||������
void MoveSnake(int x, int y, Sqlist &S, int n);              //����ߵ��ƶ�
int move_judge(Sqlist &S, int n);                                //�ж����ƶ����Ƿ񻹻���
int move_judge_AI(Sqlist &S);                                      //�ж��˻��ƶ����Ƿ񻹻���
int food_judge(Sqlist &S, int n, int* food_x, int* food_y);                                //�ж�����û�гԵ�ʳ��






void printfquit();                      //�ڳ����˳�ʱ����
void welcome();                         //�ڳ�������ʱ����
void systemIn();                        //�����Ϊ����ģ��{����ս�ۣ��˻���ս}   �ڴ˴�ѡ����в�����ģ��
void grade_menu();                      //ѡ��ս������ʱ���ŵĲ˵�
void singleplay_menu();                 //ѡ����ս��ʱ���ŵĲ˵�
void AIplay_menu();                     //ѡ���˻���սʱ���ŵĲ˵�
void game_line();                        //��ʾ��Ϸ�����廭��
void show_time();                       //����Ϸ���Ͻ���ʾ������Ϸ��ʱ��
void death_play();                      //����������ʱ�򲥷�


void Print_Grade(Sqlist S);             //��ӡ�����ʷս��




void color(int x);          //������ɫ



void singleplay(Sqlist &S, int n, int* food_x, int* food_y);                //����ս��
void easy_single(Sqlist &S, int n, int *food_x, int *food_y);               //����ս��->��ģʽ
void ordinary_single(Sqlist &S, int n, int *food_x, int *food_y);           //����ս��->��ͨģʽ
void hard_single(Sqlist &S, int n, int *food_x, int *food_y);               //����ս��->����ģʽ




void AIplay(Sqlist &S, int* food_x, int* food_y, int k);                       //�˻���ս
void easy_AI(Sqlist &S, int *food_x, int *food_y, int k);               //�˻���ս->��ģʽ
void ordinary_AI(Sqlist &S, int *food_x, int *food_y, int k);           //�˻���ս->��ͨģʽ
void hard_AI(Sqlist &S, int *food_x, int *food_y, int k);               //�˻���ս->����ģʽ

void AI_move_easy(Sqlist &S, int* food_x, int* food_y);              //�˻���ս  ��ģʽ  �˻����ƶ�
void AI_move_ordinary(Sqlist &S, int* food_x, int* food_y);          //�˻���ս  ��ͨģʽ  �˻����ƶ�
void AI_move_hard(Sqlist &S, int* food_x, int* food_y);              //�˻���ս  ����ģʽ  �˻����ƶ�

void death_play_AI();                                                  //�˻������󲥷�
void Init_AI(Sqlist &S);                                                //��ʼ���˻�





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
����ս�۲˵�
    @S:����˳���
    @n:��n����
    @food_x:ʳ��ĺ�����  ��ַ����
    @food_y:ʳ���������  ��ַ����
        �˵�ѡ��ʱ
            ѡ�� 1����ӡĿǰ�����ߵĳɼ�
            ѡ�� 2������ս�ۣ���ģʽ
            ѡ�� 3������ս�ۣ���ͨģʽ
            ѡ�� 4������ս�ۣ�����ģʽ
        
*/
void singleplay(Sqlist &S, int n, int* food_x, int* food_y){

    n -= 1;                                                 //��˳����ڵ� n ���ߵ��±��� n - 1

    char x = '1';
    singleplay_menu();
    x = _getch();
    switch (x)
    {
    case '1':
        Print_Grade(S);                                     //��ӡ�����ߵ�ս��                            
        break;
    
    case '2':
        easy_single(S, n, food_x, food_y);                  //��ģʽ
        break;
    case '3':
        ordinary_single(S, n, food_x, food_y);              //��ͨģʽ
        break;
    case '4':
        hard_single(S, n, food_x, food_y);                  //����ģʽ
        break;
    
    default:
    printfquit();
    }

}






/*
����ս��  ��ģʽ
    @S:����˳���
    @n:��n����
    @food_x:ʳ��ĺ�����  ��ַ����
    @food_y:ʳ���������  ��ַ����

*/
void easy_single(Sqlist &S, int n, int* food_x, int* food_y){


    game_line();                                                         //��ӡ��Ϸ������
    PrintSnake(1, S, n);
    
    char ch = 'D';
    int x = 1;
    int y = 0;
    MakeFood(food_x, food_y);
    while(move_judge(S, n)){
        Sleep(1000);
        if (food_judge(S, n, food_x, food_y)){             //�ж� ʳ���Ƿ���� ���� ʳ�ﱻ�Ե��� 
            MakeFood(food_x, food_y);                                       //����һ���µ�ʳ��
        }
        if (_kbhit()) {                                 // ����Ƿ�������
            ch = _getch();                              // ��ȡ�ַ�
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
        MoveSnake(x, y, S, n);                              // �ڵȴ�����ʱ�������������������
    }
    if(!move_judge(S, n)){
        death_play();
        system("pause");
    }
}



/*
����ս��  ��ͨģʽ
    @S:����˳���
    @n:��n����
    @food_x:ʳ��ĺ�����  ��ַ����
    @food_y:ʳ���������  ��ַ����

*/
void ordinary_single(Sqlist &S, int n, int* food_x, int* food_y){


    game_line();                                                         //��ӡ��Ϸ������
    PrintSnake(1, S, n);
    
    char ch = 'D';
    int x = 1;
    int y = 0;
    MakeFood(food_x, food_y);
    while(move_judge(S, n)){
        Sleep(750);
        if (food_judge(S, n, food_x, food_y)){             //�ж� ʳ���Ƿ���� ���� ʳ�ﱻ�Ե��� 
            MakeFood(food_x, food_y);                                       //����һ���µ�ʳ��
        }
        if (_kbhit()) {  // ����Ƿ�������
            ch = _getch();  // ��ȡ�ַ�
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
        MoveSnake(x, y, S, n);                              // �ڵȴ�����ʱ�������������������
    }
    if(!move_judge(S, n)){
        death_play();
        system("pause");
    }
}







/*
����ս��  ����ģʽ
    @S:����˳���
    @n:��n����
    @food_x:ʳ��ĺ�����  ��ַ����
    @food_y:ʳ���������  ��ַ����

*/
void hard_single(Sqlist &S, int n, int* food_x, int* food_y){


    game_line();                                                         //��ӡ��Ϸ������
    PrintSnake(1, S, n);
    
    char ch = 'D';
    int x = 1;
    int y = 0;
    MakeFood(food_x, food_y);
    while(move_judge(S, n)){
        Sleep(500);
        if (food_judge(S, n, food_x, food_y)){             //�ж� ʳ���Ƿ���� ���� ʳ�ﱻ�Ե��� 
            MakeFood(food_x, food_y);                                       //����һ���µ�ʳ��
        }
        if (_kbhit()) {                                     // ����Ƿ�������
            ch = _getch();                                  // ��ȡ�ַ�
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
        MoveSnake(x, y, S, n);                              // �ڵȴ�����ʱ�������������������
    }
    if(!move_judge(S, n)){
        death_play();
        system("pause");
    }
}















/*
�˻���ս�˵�
    @S:����˳���
    @n:��n����
    @food_x:ʳ��ĺ�����  ��ַ����
    @food_y:ʳ���������  ��ַ����
        �˵�ѡ��ʱ
            ѡ�� 1����ӡĿǰ�����ߵĳɼ�
            ѡ�� 2������ս�ۣ���ģʽ
            ѡ�� 3������ս�ۣ���ͨģʽ
            ѡ�� 4������ս�ۣ�����ģʽ
        
*/
void AIplay(Sqlist &S, int* food_x, int* food_y, int k){

    k = k - 1;                      //��˳����ڵ� k ���ߵ��±��� k - 1

    char x = '1';
    AIplay_menu();
    x = _getch();
    switch (x)
    {
    case '1':
        Print_Grade(S);                                     //��ӡ�����ߵ�ս��                            
        break;
    
    case '2':
        easy_AI(S, food_x, food_y, k);                  //��ģʽ
        break;
    case '3':
        ordinary_AI(S, food_x, food_y, k);              //��ͨģʽ
        break;
    case '4':
        hard_AI(S, food_x, food_y, k);                  //����ģʽ
        break;
    
    default:
    printfquit();
    }

}



/*
�˻���ս  ��ģʽ
@S:����˳���  ��ȡ�ߵ���Ϣ
@n:�����˻���
@food_x && food_y : ��ǰ��Ϸ��ʳ�������  ͨ��ʳ�������ȷ���˻����ƶ�����
@k:���������
*/
void easy_AI(Sqlist &S, int *food_x, int *food_y, int k){

    game_line();                                                         //��ӡ��Ϸ������
    PrintSnake(1, S, k);
    
    char ch = 'D';
    int x = 1;
    int y = 0;
    MakeFood(food_x, food_y);
    while(move_judge(S, k) && move_judge_AI(S)){
        Sleep(1000);
        if (food_judge(S, 20, food_x, food_y) || food_judge(S, k, food_x, food_y)){             //�ж� ʳ���Ƿ���� ���� ʳ�ﱻ�Ե��� 
            MakeFood(food_x, food_y);                                                          //����һ���µ�ʳ��
        }
        if (_kbhit()) {                                     // ����Ƿ�������
            ch = _getch();                                  // ��ȡ�ַ�
            if(ch == 'w' || ch == 'W'){                     //ͨ����ȡ���ַ�ȷ���ߵ��ƶ�����
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
        MoveSnake(x, y, S, k);                              //�ڼ���û������ʱ������ִ�е����
        AI_move_easy(S, food_x, food_y);                 //����߰�����һ�εİ����ƶ�  �˻�����ƶ�
    }
    if(!move_judge(S, k)){                                  //���ʧ���˲��ŵĻ���
        death_play();
        system("pause");
    }
    if(!move_judge_AI(S)){                                  //�˻�ʧ�ܲ��ŵĻ���
        death_play_AI();
        system("pause");
        Init_AI(S);
        S.elem[k].score += 10;
    }

}






/*
�˻���ս  ��ͨģʽ
@S:����˳���  ��ȡ�ߵ���Ϣ
@n:�����˻���
@food_x && food_y : ��ǰ��Ϸ��ʳ�������  ͨ��ʳ�������ȷ���˻����ƶ�����
@k:���������
*/
void ordinary_AI(Sqlist &S, int *food_x, int *food_y, int k){

    game_line();                                                         //��ӡ��Ϸ������
    PrintSnake(1, S, k);
    
    char ch = 'D';
    int x = 1;
    int y = 0;
    MakeFood(food_x, food_y);
    while(move_judge(S, k) && move_judge_AI(S)){
        Sleep(750);
        if (food_judge(S, 20, food_x, food_y) || food_judge(S, k, food_x, food_y)){             //�ж� ʳ���Ƿ���� ���� ʳ�ﱻ�Ե��� 
            MakeFood(food_x, food_y);                                                          //����һ���µ�ʳ��
        }
        if (_kbhit()) {                                     // ����Ƿ�������
            ch = _getch();                                  // ��ȡ�ַ�
            if(ch == 'w' || ch == 'W'){                     //ͨ����ȡ���ַ�ȷ���ߵ��ƶ�����
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
        MoveSnake(x, y, S, k);                              //�ڼ���û������ʱ������ִ�е����
        AI_move_ordinary(S, food_x, food_y);                 //����߰�����һ�εİ����ƶ�  �˻�����ƶ�
    }
    if(!move_judge(S, k)){                                  //���ʧ���˲��ŵĻ���
        death_play();
        system("pause");
    }
    if(!move_judge_AI(S)){                                  //�˻�ʧ�ܲ��ŵĻ���
        death_play_AI();
        system("pause");
        Init_AI(S);
        S.elem[k].score += 30;
    }


}






/*
�˻���ս  ����ģʽ
@S:����˳���  ��ȡ�ߵ���Ϣ
@n:�����˻���
@food_x && food_y : ��ǰ��Ϸ��ʳ�������  ͨ��ʳ�������ȷ���˻����ƶ�����
@k:���������
*/
void hard_AI(Sqlist &S, int *food_x, int *food_y, int k){

    game_line();                                                         //��ӡ��Ϸ������
    PrintSnake(1, S, k);
    
    char ch = 'D';
    int x = 1;
    int y = 0;
    MakeFood(food_x, food_y);
    while(move_judge(S, k) && move_judge_AI(S)){
        Sleep(500);
        if (food_judge(S, 20, food_x, food_y) || food_judge(S, k, food_x, food_y)){             //�ж� ʳ���Ƿ���� ���� ʳ�ﱻ�Ե��� 
            MakeFood(food_x, food_y);                                                          //����һ���µ�ʳ��
        }
        if (_kbhit()) {                                     // ����Ƿ�������
            ch = _getch();                                  // ��ȡ�ַ�
            if(ch == 'w' || ch == 'W'){                     //ͨ����ȡ���ַ�ȷ���ߵ��ƶ�����
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
        MoveSnake(x, y, S, k);                              //�ڼ���û������ʱ������ִ�е����
        AI_move_hard(S, food_x, food_y);                 //����߰�����һ�εİ����ƶ�  �˻�����ƶ�
    }
    if(!move_judge(S, k)){                                  //���ʧ���˲��ŵĻ���
        death_play();
        system("pause");
    }
    if(!move_judge_AI(S)){                                  //�˻�ʧ�ܲ��ŵĻ���
        death_play_AI();
        system("pause");
        Init_AI(S);
        S.elem[k].score += 50;
    }

}



