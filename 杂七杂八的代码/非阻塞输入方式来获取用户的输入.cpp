#include <stdio.h>
#include <conio.h>

int main() {
    char ch;
    int x = 0;
    int y = 0;
    while (1) {
        if (_kbhit()) {  // 检查是否有输入
            ch = _getch();  // 获取字符
            if(ch == "w" || ch == "W"){
                y = -1;
                x = 0; 
            }
            if(ch == "s" || ch == "S"){
                y = 1;
                x = 0; 
            }
            if(ch == "a" || ch == "A"){
                y = 0;
                x = -1; 
            }
            if(ch == "d" || ch == "D"){
                y = 0;
                x = 1; 
            }
            
        }
        // do other things here
        // 在等待输入时，程序可以做其他事情
    }
    return 0;
}
