#pragma once
#include<windows.h>
#include<stdio.h>











/*
�ڳ����˳�ʱ����
*/
void printfquit() {
    system("cls");
    int f;
    for (f = 1; f < 3; f++) {
        printf("\n\n\n\n\n\t\t\t\t\t�˳�.\n");
        Sleep(200);
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t�˳�..\n");
        Sleep(200);
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t�˳�...\n");
        Sleep(200);
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t�˳�....\n");
        Sleep(200);
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t�˳�.....\n");
        Sleep(200);
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t�˳�.....\n");
        Sleep(50);
        system("cls");
        exit(0);
    }
}


/*
�ڳ�������ʱ����
*/
void welcome() {
    system("cls");
    color(7);
    printf("\n\n\n\n\t\t\t\t******************************************************************\n");
    printf("\t\t\t\t++--**********************************************************--++\n");
    printf("\t\t\t\t******************************************************************\n");
    printf("\t\t\t\t++--**********************************************************--++\n");
    printf("\t\t\t\t**                     ��    ɽ    ѧ    Ժ                     **\n");
    printf("\t\t\t\t********                                                   *******\n");
    printf("\t\t\t\t-------------                                        -------------\n");
    printf("\t\t\t\t******************           �γ����          ****************** \n");
    printf("\t\t\t\t----------------------                    ------------------------\n");
    printf("\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\t\t\t\t[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]\n");
    printf("\t\t\t\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
    printf("\t\t\t\t##################################################################\n");
    printf("\t\t\t\t @  @  !  !  @  @  !  !  @  @  !  !  @  @  !  !  @  @  !  !  @  @ \n");
    Sleep(1500);
}


/*
�����Ϊ����ģ��{����ս�ۣ��˻���ս}
�ڴ˴�ѡ����в�����ģ��
*/
void systemIn() {
    system("cls");
    color(7);
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***            ��ӭ����̰����           ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***              1.����ս��.            ***\n");
    printf("\t\t\t\t***              2.�˻���ս.            ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                  ���ⰴ���˳�.      ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
}



/*
ѡ��ս������ʱ���ŵĲ˵�
*/
void grade_menu() {
    system("cls");
    color(7);
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***               ս������              ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***              1.����ս��.            ***\n");               //�û�����
    printf("\t\t\t\t***              2.���ս��.            ***\n");
    printf("\t\t\t\t***              3.����ս��.            ***\n");
    printf("\t\t\t\t***              0.�˳�.                ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
}


/*
ѡ����ս��ʱ���ŵĲ˵�
*/
void singleplay_menu() {
    system("cls");
    color(7);
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***               ����ս��              ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***              1.��ʷս��.            ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***              2.��ģʽ.            ***\n");               //�û�����
    printf("\t\t\t\t***              3.��ͨģʽ.            ***\n");
    printf("\t\t\t\t***              4.����ģʽ.            ***\n");
    printf("\t\t\t\t***              0.�˳�.                ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
}





/*
ѡ���˻���սʱ���ŵĲ˵�
*/
void AIplay_menu() {
    system("cls");
    color(7);
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***               �˻���ս              ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***              1.��ʷս��.            ***\n");
    printf("\t\t\t\t***                                    ***\n");
    printf("\t\t\t\t***              2.��ģʽ.            ***\n");               //�û�����
    printf("\t\t\t\t***              3.��ͨģʽ.            ***\n");
    printf("\t\t\t\t***              4.����ģʽ.            ***\n");
    printf("\t\t\t\t***              0.�˳�.                ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
}





/*
��ʾ��Ϸ�����廭��
*/
void game_line() {
    system("cls");
    color(7);
    int i = 0;
    int n = 0;
    for (i = 0; i < 101; i++) {
        printf("��");
    }
    printf("\n");
    for (n = 0; n < 23; n++) {
        for (i = 0; i < 100; i++) {
            printf(" ");
        }
        printf("��");
        if (n == 6) {
            printf("��ܰ��ʾ:");
        }
        if (n == 8) {
            printf("    W     ��");
        }
        if (n == 9) {
            printf("   ASD  ������");
        }
        if (n == 11) {
            printf("�㽫ֻ��һ������!");
        }
        if (n == 15) {
            printf("�ڼ��˻��л�ʤ");
        }
        if (n == 16) {
            printf("�㽫���10��!");
        }
        if (n == 18) {
            printf("����ͨ�˻��л�ʤ");
        }
        if (n == 19) {
            printf("�㽫���30��!");
        }
        if (n == 21) {
            printf("�������˻��л�ʤ");
        }
        if (n == 22) {
            printf("�㽫���50��!");
        }
        printf("\n");
    }
    for (i = 0; i < 101; i++) {
        printf("��");
    }
}



/*
����Ϸ���Ͻ���ʾ������Ϸ��ʱ��
*/
void show_time() {
    color(7);
    CursorJump(105, 0);
    int i = 0;
    for (i = 0; i < 6; i++) {
        printf("��");
    }


    CursorJump(105, 2);

    for (i = 0; i < 6; i++) {
        printf("��");
    }





    CursorJump(105, 1);
    printf("��");
    CursorJump(110, 1);
    printf("��");

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
��������ʱ����
*/
void death_play() {
    system("cls");
    color(7);
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***            �������Ҳ�����!          ***\n");
    printf("\t\t\t\t***                         ����ɱ��!   ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                     �´�һ������!   ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
}




/*
���˻�����ʱ����
*/
void death_play_AI() {
    system("cls");
    color(7);
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***            �����Ҳı�����!          ***\n");
    printf("\t\t\t\t***                                    ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                     ��սʤ���˻�!   ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
}







/*
��ӡ��ʷս��
*/
void Print_Grade(Sqlist S) {
    system("cls");
    color(7);
    int i = 0;
    cout << "\t\t\t\t��Ϸ����\t\t��Ϸ�ɼ�" << endl;
    if (S.elem[0].score == NULL) {
        cout << "\t\t\t\t��ʱû����ʷս��Ŷ!" << endl;            //û����ʷս��
        cout << "\t\t\t\t��ȥ��������Ϸ��!" << endl;
    }

    else {
        for (i = 0; i < S.length; i++) {
            cout << "\t\t\t\t" << S.elem[i].name << "\t\t" << S.elem[i].score << endl;            //����ʷս��  ������ӡ
        }
    }

    system("pause");

}
