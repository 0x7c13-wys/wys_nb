#include<stdio.h>
#include<stdlib.h>
#include<windows.h>




/*
将画面中的光标隐藏
*/
void HideCursor(){
    CONSOLE_CURSOR_INFO curInfo;                            //定义光标信息结构体变量
    curInfo.dwSize = 1;
    curInfo.bVisible = FALSE;                               //将光标值设置为不可见
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);        //获取控制台句柄
    SetConsoleCursorInfo( handle, &curInfo);                //设置光标信息
}




/*
将光标跳转到指定的位置进行输出
    @x:指定光标到达的位置的横坐标
    @y:指定光标到达的位置的纵坐标
*/
void CursorJump(int x, int y){
    COORD p;
    p.X = x;
    p.Y = y;
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle, p);
}



/*
设置颜色
        x@7:黑底白字
        x@10:黑底绿字
*/
void color(int x){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),x);  
    //调用系统API
}  
