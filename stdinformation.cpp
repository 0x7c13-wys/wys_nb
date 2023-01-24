#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>



#define n 500




void informationInput();
void informationwelcome();
void gradewelcome();
void welcome();
void systemIn();
void printfquit();
void gradeInput();
void informationOutput();
void gradeOutput();
void informationSearch();
void gradeSearch();








struct data
{
    int year;
    int month;
    int day;
};
struct studentgrade
{
    int Chinese;
    int Maths;
    int English;
    int PE;
    int Clanguage;
};
struct studentinformation
{
    int stuID;
    float stuheight;
    float stuweight;
    char name[10];
    char sex[10];
    struct data regday;
    struct data birthday;
    struct studentgrade grade;
}information[n] = { { 1012 , 1.85, 64.3 ,"������", "��", {2003, 10, 12}, {2003, 10, 12}, {123, 123, 123, 123, 123}},  { 1012 , 1.85, 64.3 ,"6", "��", {2003, 10, 12}, {2003, 10, 12}} };





int main(){
    welcome();
    while(1){
        systemIn();
        int temp1 = 0;
        temp1 = _getch();
        if (temp1 == '2'){
            gradewelcome();
        }
        else if (temp1 == '1'){
            informationwelcome();
        }
        else {
            printfquit();
        }
    }
    
}











void printfquit(){
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
void welcome(){
    system("cls");
	printf("\n\n\n\n\t\t\t\t******************************************************************\n");
	printf("\t\t\t\t++--**********************************************************--++\n");
	printf("\t\t\t\t******************************************************************\n");
	printf("\t\t\t\t++--**********************************************************--++\n");
	printf("\t\t\t\t**                     ��    ��    ��    ѧ                     **\n");
	printf("\t\t\t\t********                                                   *******\n");
	printf("\t\t\t\t-------------                                        -------------\n");
	printf("\t\t\t\t******************           ���ջ�ɽ          ****************** \n");
	printf("\t\t\t\t----------------------                    ------------------------\n");
	printf("\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t\t\t[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]\n");
	printf("\t\t\t\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
	printf("\t\t\t\t##################################################################\n");
	printf("\t\t\t\t @  @  !  !  @  @  !  !  @  @  !  !  @  @  !  !  @  @  !  !  @  @ \n");
    Sleep(1500);
}

void systemIn(){
    system("cls");
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***        ��ӭ����ѧ������ϵͳ         ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***          1.ѧ����Ϣ����.            ***\n");
    printf("\t\t\t\t***          2.ѧ���ɼ�����.            ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                  ���ⰴ���˳�.      ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
}




void gradewelcome(){
    system("cls");
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***               �ɼ�����              ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***          1.����ѧ���ɼ�.            ***\n");
    printf("\t\t\t\t***          2.����ѧ���ɼ�.            ***\n");               //�û�����
    printf("\t\t\t\t***          3.���ѧ���ɼ�.            ***\n");
    printf("\t\t\t\t***          0.�˳�ϵͳ.                ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");



    int temp2 = 0;
    temp2 = _getch();
    if ( temp2 == '1'){
        gradeInput();
    }
    else if ( temp2 == '2'){
        gradeSearch();
    }
    else if ( temp2 == '3'){
        gradeOutput();
    }
    else if ( temp2 == '0'){
        printfquit();
        exit(0);
    }

}
void informationwelcome(){
    system("cls");
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                ��Ϣ����             ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***           1.����ѧ����Ϣ.           ***\n");
    printf("\t\t\t\t***           2.����ѧ����Ϣ.           ***\n");                //�û�����
    printf("\t\t\t\t***           3.���ѧ����Ϣ.           ***\n");
    printf("\t\t\t\t***           0.�˳�ϵͳ.               ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");





        int temp2 = 0;
    temp2 = _getch();
    if ( temp2 == '1'){
        informationInput();
    }
    else if ( temp2 == '2'){
        informationSearch();
    }
    else if ( temp2 == '3'){
        informationOutput();
    }
    else if ( temp2 == '0'){
        printfquit();
        exit(0);
    }
}















void informationInput(){
    system("cls");
    int i = 0;
    for( i = 0; i <= n; i++){
        printf("\n\n\n\n\t\t\t\t������ѧ������:");
        gets(information[i].name);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t������ѧ��ѧ��:");
        scanf("%d", &information[i].stuID);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t������ѧ���Ա�:");
        gets(information[i].sex);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t������ѧ�����:");
        scanf("%f", &information[i].stuheight);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t������ѧ������:");
        scanf("%f", &information[i].stuweight);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t������ѧ������\n");
        printf("\t\t\t\t��/��/��  �Կո����:");
        scanf("%d %d %d", &information[i].birthday.year, &information[i].birthday.month, &information[i].birthday.day);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t������ѧ��ע������\n");
        printf("\t\t\t\t��/��/��  �Կո����:");
        scanf("%d %d %d", &information[i].regday.year, &information[i].regday.month, &information[i].regday.day);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t��ǰ��%dλѧ������Ϣ����ɹ�!\n", i + 1);
        Sleep(1000);
        system("cls");
        printf("\n\n\n\n\t\t\t\t�Ƿ��������?   Y/N");
        Sleep(300);
        char temp1 = 'a';
        temp1 = _getch();
        if (temp1 == 'Y'){
            continue;
        }
        if (temp1 == 'N'){
            break;
        }
    }

}



void gradeInput(){
    int y = 1;
    while( y ){
        system("cls");
        printf("\n\n\n\n\t\t\t\t������ѧ��ѧ����¼��ɼ�:");
        int temp3 = 0;
        scanf("%d", &temp3);

        int m = 0, a = 0, vlog = 0;
        for ( m = 0; m <= n; m++){
            if (information[m].stuID == temp3){      //����ѧ���ҵ�ѧ��
                a = m;
                vlog = 1;
                break;
            }
        }

        if ( vlog == 1){
            printf("\t\t\t\tѧ��Ϊ%d��ѧ����%s.", temp3, information[a].name);
            Sleep(1500);
            system("cls");
        }
        else {
            printf("\t\t\t\tû���ҵ�ѧ��Ϊ%d��ѧ��", temp3);
            Sleep(1500);
            system("cls");
            continue;
        }

        int i = 0;
        printf("\n\n\n\n\t\t\t\t����%s�����ĳɼ�:", information[a].name);
        scanf("%d", &information[a].grade.Chinese);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t����%s����ѧ�ɼ�:", information[a].name);
        scanf("%d", &information[a].grade.Maths);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t����%s��Ӣ��ɼ�:", information[a].name);
        scanf("%d", &information[a].grade.English);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t����%s�������ɼ�:", information[a].name);
        scanf("%d", &information[a].grade.PE);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t����%sC�����Գɼ�:", information[a].name);
        scanf("%d", &information[a].grade.Clanguage);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\tѧ��Ϊ%d��ѧ���ɼ�����ɹ�!",temp3);
        Sleep(1000);
        system("cls");
        printf("\n\n\n\n\t\t\t\t�Ƿ��������?   Y/N");
        Sleep(300);
        char temp1 = 'a';
        temp1 = _getch();
        if (temp1 == 'Y'){
            continue;
        }
        if (temp1 == 'N'){
            y = 0;
        }
    }

}


void informationSearch(){
    system("cls");
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***          1.����������               ***\n");
    printf("\t\t\t\t***          2.��ѧ�Ų���               ***\n");
    printf("\t\t\t\t***          3.���ɼ�����               ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                  ���ⰴ������.      ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    






    int temp4 = 0;
    temp4 = _getch();
    if ( temp4 == '1'){
        system("cls");
        char arr[10] = " 0 ";
        printf("\n\n\n\n\t\t\t\t����������:");
        gets(arr);
        system("cls");
        printf("\n\n\n\n����\tѧ��\t�Ա�\t\t���\t����\t\t����\t\tע������\n");
        int i = 0;
        while(information[i].stuID){
            if ( strcmp( information[i].name, arr) == 0){
                printf("%s\t%-5d\t%s\t\t%.2f    %.2f\t\t%4d/%2d/%2d\t%4d/%2d/%2d\n", information[i].name, information[i].stuID, information[i].sex, information[i].stuheight, information[i].stuweight, information[i].birthday.year, information[i].birthday.month, information[i].birthday.day, information[i].regday.year, information[i].regday.month, information[i].regday.day);
            }
            i++;
        }
        system("pause > NULL");
    }
    if ( temp4 == '2'){
        system("cls");
        int arr = 0;
        printf("\n\n\n\n\t\t\t������ѧ��:");
        scanf("%d", &arr);
        system("cls");
        printf("\n\n\n\n����\tѧ��\t�Ա�\t\t���\t����\t\t����\t\tע������\n");
        int i = 0;
        while (information[i].stuID){
            if ( information[i].stuID == arr){
                printf("%s\t%-5d\t%s\t\t%.2f    %.2f\t\t%4d/%2d/%2d\t%4d/%2d/%2d\n", information[i].name, information[i].stuID, information[i].sex, information[i].stuheight, information[i].stuweight, information[i].birthday.year, information[i].birthday.month, information[i].birthday.day, information[i].regday.year, information[i].regday.month, information[i].regday.day);

            }
        }
        system("pause > NULL");
    }
    if ( temp4 == '3'){
        int arr = 0;
        system("cls");
        printf("\n\n\n\n\t\t\t\t*******************************************\n");
        printf("\t\t\t\t*******************************************\n");
        printf("\t\t\t\t***                                     ***\n");
        printf("\t\t\t\t***                                     ***\n");
        printf("\t\t\t\t***          1.�����ĳɼ�����           ***\n");
        printf("\t\t\t\t***          2.����ѧ�ɼ�����           ***\n");
        printf("\t\t\t\t***          3.��Ӣ��ɼ�����           ***\n");
        printf("\t\t\t\t***          4.�������ɼ�����           ***\n");
        printf("\t\t\t\t***          5.��C���Գɼ�����          ***\n");
        printf("\t\t\t\t***                  ���ⰴ������.      ***\n");
        printf("\t\t\t\t*******************************************\n");
        printf("\t\t\t\t*******************************************\n");
        int j = 0;
        j = _getch();
        if ( j == '1'){
            system("cls");
            printf("\n\n\n\n\t\t\t\t���������ĳɼ�:");
            scanf("%d", &arr);
            system("cls");
            printf("\n\n\n\n����\tѧ��\t�Ա�\t\t���\t����\t\t����\t\tע������\n");
            int i = 0;
            while ( information[i].stuID ){
                if ( information[i].grade.Chinese == arr){
                    printf("%s\t%-5d\t%s\t\t%.2f    %.2f\t\t%4d/%2d/%2d\t%4d/%2d/%2d\n", information[i].name, information[i].stuID, information[i].sex, information[i].stuheight, information[i].stuweight, information[i].birthday.year, information[i].birthday.month, information[i].birthday.day, information[i].regday.year, information[i].regday.month, information[i].regday.day);
                }
                i++;
            }
        }
        if ( j == '2'){
            system("cls");
            printf("\n\n\n\n\t\t\t\t��������ѧ�ɼ�:");
            scanf("%d", &arr);
            system("cls");
            printf("\n\n\n\n����\tѧ��\t�Ա�\t\t���\t����\t\t����\t\tע������\n");
            int i = 0;
            while ( information[i].stuID ){
                if ( information[i].grade.Maths == arr){
                    printf("%s\t%-5d\t%s\t\t%.2f    %.2f\t\t%4d/%2d/%2d\t%4d/%2d/%2d\n", information[i].name, information[i].stuID, information[i].sex, information[i].stuheight, information[i].stuweight, information[i].birthday.year, information[i].birthday.month, information[i].birthday.day, information[i].regday.year, information[i].regday.month, information[i].regday.day);
                }
                i++;
            }

        }
        if ( j == '3'){
            system("cls");
            printf("\n\n\n\n\t\t\t\t������Ӣ��ɼ�:");
            scanf("%d", &arr);
            system("cls");
            printf("\n\n\n\n����\tѧ��\t�Ա�\t\t���\t����\t\t����\t\tע������\n");
            int i = 0;
            while ( information[i].stuID ){
                if ( information[i].grade.English == arr){
                    printf("%s\t%-5d\t%s\t\t%.2f    %.2f\t\t%4d/%2d/%2d\t%4d/%2d/%2d\n", information[i].name, information[i].stuID, information[i].sex, information[i].stuheight, information[i].stuweight, information[i].birthday.year, information[i].birthday.month, information[i].birthday.day, information[i].regday.year, information[i].regday.month, information[i].regday.day);
                }
                i++;
            }
        }
        if ( j == '4'){
            system("cls");
            printf("\n\n\n\n\t\t\t\t�����������ɼ�:");
            scanf("%d", &arr);
            system("cls");
            printf("\n\n\n\n����\tѧ��\t�Ա�\t\t���\t����\t\t����\t\tע������\n");
            int i = 0;
            while ( information[i].stuID ){
                if ( information[i].grade.PE == arr){
                    printf("%s\t%-5d\t%s\t\t%.2f    %.2f\t\t%4d/%2d/%2d\t%4d/%2d/%2d\n", information[i].name, information[i].stuID, information[i].sex, information[i].stuheight, information[i].stuweight, information[i].birthday.year, information[i].birthday.month, information[i].birthday.day, information[i].regday.year, information[i].regday.month, information[i].regday.day);
                }
                i++;
            }
        }
        if ( j == '5'){
            system("cls");
            printf("\n\n\n\n\t\t\t\t������C���Գɼ�:");
            scanf("%d", &arr);
            system("cls");
            printf("\n\n\n\n����\tѧ��\t�Ա�\t\t���\t����\t\t����\t\tע������\n");
            int i = 0;
            while ( information[i].stuID ){
                if ( information[i].grade.Clanguage == arr){
                    printf("%s\t%-5d\t%s\t\t%.2f    %.2f\t\t%4d/%2d/%2d\t%4d/%2d/%2d\n", information[i].name, information[i].stuID, information[i].sex, information[i].stuheight, information[i].stuweight, information[i].birthday.year, information[i].birthday.month, information[i].birthday.day, information[i].regday.year, information[i].regday.month, information[i].regday.day);
                }
                i++;
            }
        }
        system("pause > NULL");
    }
}


void gradeSearch(){
    system("cls");
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***          1.����������               ***\n");
    printf("\t\t\t\t***          2.��ѧ�Ų���               ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                  ���ⰴ������.      ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");






    int temp5 = 0;
    temp5 = _getch();
    if (temp5 == '1'){
        system("cls");
        printf("\n\n\n\n\t\t\t\t����������:");
        char arr[10] = " 0 ";
        gets(arr);
        system("cls");
        printf("\n\n\n\n����\t����\t��ѧ\tӢ��\t����\tC����\n");
        int i = 0;
        while ( information[i].stuID ){
            if ( strcmp(information[i].name, arr) == 0 ){
                if (information[i].grade.Chinese == 0 && information[i].grade.Clanguage == 0 && information[i].grade.English == 0 && information[i].grade.Maths == 0 && information[i].grade.PE == 0){
                    printf("%s�ĳɼ�δ¼��!\n", information[i].name);
                    break;
                }
                else {
                    printf("%s\t%d\t%d\t%d\t%d\t%d\n", information[i].name, information[i].grade.Chinese, information[i].grade.Maths, information[i].grade.English, information[i].grade.PE, information[i].grade.Clanguage);
                    break;
                }
            }
        }
        i++;
    }
    if ( temp5 == '2'){
        system("cls");
        printf("\n\n\n\n\t\t\t\t������ѧ��:");
        int arr = 0;
        scanf("%d", &arr);
        system("cls");
        printf("\n\n\n\n����\t����\t��ѧ\tӢ��\t����\tC����\n");
        int i = 0;
        while ( information[i].stuID ){
            if ( information[i].stuID == arr ){
                if (information[i].grade.Chinese == 0 && information[i].grade.Clanguage == 0 && information[i].grade.English == 0 && information[i].grade.Maths == 0 && information[i].grade.PE == 0){
                    printf("%s�ĳɼ�δ¼��!\n", information[i].name);
                    break;
                }
                else {
                    printf("%s\t%d\t%d\t%d\t%d\t%d\n", information[i].name, information[i].grade.Chinese, information[i].grade.Maths, information[i].grade.English, information[i].grade.PE, information[i].grade.Clanguage);
                    break;
                }
            }
            i++;
        }  
    }
}


void informationOutput(){
    system("cls");
    int i = 0;
    printf("\n\n\n\n����\tѧ��\t�Ա�\t\t���\t����\t\t����\t\tע������\n");
    while(information[i].stuID){
        printf("%s\t%-5d\t%s\t\t%.2f    %.2f\t\t%4d/%2d/%2d\t%4d/%2d/%2d\n", information[i].name, information[i].stuID, information[i].sex, information[i].stuheight, information[i].stuweight, information[i].birthday.year, information[i].birthday.month, information[i].birthday.day, information[i].regday.year, information[i].regday.month, information[i].regday.day);
        i++;
    }    
    system("pause > NULL");
}


void gradeOutput(){
    system("cls");
    int i = 0;
    printf("\n\n\n\n����\t����\t��ѧ\tӢ��\t����\tC����\n");
    while(information[i].stuID){
        if (information[i].grade.Chinese == 0 && information[i].grade.Clanguage == 0 && information[i].grade.English == 0 && information[i].grade.Maths == 0 && information[i].grade.PE == 0){
            printf("%s�ĳɼ�δ¼��!\n", information[i].name);
            i++;
        }
        else {
            printf("%s\t%d\t%d\t%d\t%d\t%d\n", information[i].name, information[i].grade.Chinese, information[i].grade.Maths, information[i].grade.English, information[i].grade.PE, information[i].grade.Clanguage);
            i++;
        }
    }
    system("pause > NULL");
}