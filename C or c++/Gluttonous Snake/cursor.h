#include<stdio.h>
#include<stdlib.h>
#include<windows.h>




/*
�������еĹ������
*/
void HideCursor(){
    CONSOLE_CURSOR_INFO curInfo;                            //��������Ϣ�ṹ�����
    curInfo.dwSize = 1;
    curInfo.bVisible = FALSE;                               //�����ֵ����Ϊ���ɼ�
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);        //��ȡ����̨���
    SetConsoleCursorInfo( handle, &curInfo);                //���ù����Ϣ
}




/*
�������ת��ָ����λ�ý������
    @x:ָ����굽���λ�õĺ�����
    @y:ָ����굽���λ�õ�������
*/
void CursorJump(int x, int y){
    COORD p;
    p.X = x;
    p.Y = y;
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle, p);
}



/*
������ɫ
        x@7:�ڵװ���
        x@10:�ڵ�����
*/
void color(int x){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),x);  
    //����ϵͳAPI
}  
