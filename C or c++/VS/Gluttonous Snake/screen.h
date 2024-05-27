#pragma once
#include<windows.h>
#include<stdio.h>











/*
在程序退出时播放
*/
void printfquit() {
    system("cls");
    int f;
    for (f = 1; f < 3; f++) {
        printf("\n\n\n\n\n\t\t\t\t\t退出.\n");
        Sleep(200);
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t退出..\n");
        Sleep(200);
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t退出...\n");
        Sleep(200);
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t退出....\n");
        Sleep(200);
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t退出.....\n");
        Sleep(200);
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t退出.....\n");
        Sleep(50);
        system("cls");
        exit(0);
    }
}


/*
在程序启动时播放
*/
void welcome() {
    system("cls");
    color(7);
    printf("\n\n\n\n\t\t\t\t******************************************************************\n");
    printf("\t\t\t\t++--**********************************************************--++\n");
    printf("\t\t\t\t******************************************************************\n");
    printf("\t\t\t\t++--**********************************************************--++\n");
    printf("\t\t\t\t**                     黄    山    学    院                     **\n");
    printf("\t\t\t\t********                                                   *******\n");
    printf("\t\t\t\t-------------                                        -------------\n");
    printf("\t\t\t\t******************           课程设计          ****************** \n");
    printf("\t\t\t\t----------------------                    ------------------------\n");
    printf("\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\t\t\t\t[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]\n");
    printf("\t\t\t\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
    printf("\t\t\t\t##################################################################\n");
    printf("\t\t\t\t @  @  !  !  @  @  !  !  @  @  !  !  @  @  !  !  @  @  !  !  @  @ \n");
    Sleep(1500);
}


/*
程序分为两个模块{单人战役，人机对战}
在此处选择进行操作的模块
*/
void systemIn() {
    system("cls");
    color(7);
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***            欢迎来到贪吃蛇           ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***              1.单人战役.            ***\n");
    printf("\t\t\t\t***              2.人机对战.            ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                  任意按键退出.      ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
}



/*
选择战绩管理时播放的菜单
*/
void grade_menu() {
    system("cls");
    color(7);
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***               战绩管理              ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***              1.查找战绩.            ***\n");               //用户界面
    printf("\t\t\t\t***              2.输出战绩.            ***\n");
    printf("\t\t\t\t***              3.排序战绩.            ***\n");
    printf("\t\t\t\t***              0.退出.                ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
}


/*
选择单人战役时播放的菜单
*/
void singleplay_menu() {
    system("cls");
    color(7);
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***               单人战役              ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***              1.历史战绩.            ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***              2.简单模式.            ***\n");               //用户界面
    printf("\t\t\t\t***              3.普通模式.            ***\n");
    printf("\t\t\t\t***              4.困难模式.            ***\n");
    printf("\t\t\t\t***              0.退出.                ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
}





/*
选择人机对战时播放的菜单
*/
void AIplay_menu() {
    system("cls");
    color(7);
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***               人机对战              ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***              1.历史战绩.            ***\n");
    printf("\t\t\t\t***                                    ***\n");
    printf("\t\t\t\t***              2.简单模式.            ***\n");               //用户界面
    printf("\t\t\t\t***              3.普通模式.            ***\n");
    printf("\t\t\t\t***              4.困难模式.            ***\n");
    printf("\t\t\t\t***              0.退出.                ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
}





/*
显示游戏的主体画面
*/
void game_line() {
    system("cls");
    color(7);
    int i = 0;
    int n = 0;
    for (i = 0; i < 101; i++) {
        printf("■");
    }
    printf("\n");
    for (n = 0; n < 23; n++) {
        for (i = 0; i < 100; i++) {
            printf(" ");
        }
        printf("■");
        if (n == 6) {
            printf("温馨提示:");
        }
        if (n == 8) {
            printf("    W     上");
        }
        if (n == 9) {
            printf("   ASD  左下右");
        }
        if (n == 11) {
            printf("你将只有一条生命!");
        }
        if (n == 15) {
            printf("在简单人机中获胜");
        }
        if (n == 16) {
            printf("你将获得10分!");
        }
        if (n == 18) {
            printf("在普通人机中获胜");
        }
        if (n == 19) {
            printf("你将获得30分!");
        }
        if (n == 21) {
            printf("在困难人机中获胜");
        }
        if (n == 22) {
            printf("你将获得50分!");
        }
        printf("\n");
    }
    for (i = 0; i < 101; i++) {
        printf("■");
    }
}



/*
在游戏右上角显示进行游戏的时长
*/
void show_time() {
    color(7);
    CursorJump(105, 0);
    int i = 0;
    for (i = 0; i < 6; i++) {
        printf("■");
    }


    CursorJump(105, 2);

    for (i = 0; i < 6; i++) {
        printf("■");
    }





    CursorJump(105, 1);
    printf("■");
    CursorJump(110, 1);
    printf("■");

    int time = 0;
    while (1) {
        int n = 1;
        if (n) {
            Sleep(1000);
            time += 1;
            n = 0;
        }
        CursorJump(107, 1);
        printf("%d", time);
    }


}







/*
在蛇死亡时播放
*/
void death_play() {
    system("cls");
    color(7);
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***            我命由我不由天!          ***\n");
    printf("\t\t\t\t***                         您自杀了!   ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                     下次一定更好!   ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
}




/*
在人机死亡时播放
*/
void death_play_AI() {
    system("cls");
    color(7);
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***            天生我材必有用!          ***\n");
    printf("\t\t\t\t***                                    ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                     您战胜了人机!   ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
}







/*
打印历史战绩
*/
void Print_Grade(Sqlist S) {
    system("cls");
    color(7);
    int i = 0;
    cout << "\t\t\t\t游戏姓名\t\t游戏成绩" << endl;
    if (S.elem[0].score == NULL) {
        cout << "\t\t\t\t暂时没有历史战绩哦!" << endl;            //没有历史战绩
        cout << "\t\t\t\t快去玩两把游戏吧!" << endl;
    }

    else {
        for (i = 0; i < S.length; i++) {
            cout << "\t\t\t\t" << S.elem[i].name << "\t\t" << S.elem[i].score << endl;            //有历史战绩  遍历打印
        }
    }

    system("pause");

}
