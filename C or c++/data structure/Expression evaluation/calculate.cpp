#include"SqStack.h"
#include<iostream>
using namespace std;

int calculate_SqStack(char str[]);            // 计算表达式的值



int main(){
    char str[100];
    int i = 0;
    for(i = 0; i < 100 ; i++){
        cin >> str[i];
        if(str[i] == '='){
            break;
        }
    }
    double result = calculate_SqStack(str);
    if(!result){
        cout << "error" << endl;
    }
    else{
        cout << result << endl;
    }
    system("pause");
}

int calculate_SqStack(char str[]){
    SqStack S;
    InitStack(S);
    int i = 0;
    for(i = 0; ;i++){
     double a, b = 0.0;
        if(str[i] == '='){
            break;
        }
        if(str[i] == '+'){
            if(!Pop(S, b)){
                return 0;
            }
            if(!Pop(S, a)){
                return 0;
            }
            Push(S, a + b);
        }
        if(str[i] == '-'){
            if(!Pop(S, b)){
                return 0;
            }
            if(!Pop(S, a)){
                return 0;
            }
            Push(S, a - b);
        }
        if(str[i] == '*'){
            if(!Pop(S, b)){
                return 0;
            }
            if(!Pop(S, a)){
                return 0;
            }
            Push(S, a * b);
        }
        if(str[i] == '/'){
            if(!Pop(S, b)){
                return 0;
            }
            if(!Pop(S, a)){
                return 0;
            }
            if( a == 0.0){
                return 0;
            }
            Push(S, a / b);
        }
        else{
            double d = 0.0;				//将连续的数字字符转换成对应的数值存放到d中
			while (str[i] >= '0' && str[i] <= '9')   //判定为数字字符
			{
				d = 10 * d + str[i] - '0';
				i++;
			}
			Push(S, d);		//将数值d进栈

        }

/*         switch(str[i]){
            case '+':{
                double a, b = 0.0;
                if(!Pop(S, b)){
                    return 0;
                }
                if(!Pop(S, a)){
                    return 0;
                }
                Push(S, a + b);
                break;
            }
            case '-':{
                double a, b = 0.0;
                if(!Pop(S, b)){
                    return 0;
                }
                if(!Pop(S, a)){
                    return 0;
                }
                Push(S, a - b);
                break;
            }
            case '*':{
                double a, b = 0.0;
                if(!Pop(S, b)){
                    return 0;
                }
                if(!Pop(S, a)){
                    return 0;
                }
                Push(S, a * b);
                break;
            }
            case '/':{
                double a, b = 0.0;
                if(!Pop(S, b)){
                    return 0;
                }
                if(!Pop(S, a)){
                    return 0;
                }
                if( a == 0.0){
                    return 0;
                }
                Push(S, a / b);
                break;
            }
            default :
                double d = 0;				//将连续的数字字符转换成对应的数值存放到d中
			while (str[i] >= '0' && str[i] <= '9')   //判定为数字字符
			{
				d = 10 * d + str[i] - '0';
				i++;
			}
			Push(S, d);		//将数值d进栈
			break;
        } */
    }
    return GetTop(S);

}

