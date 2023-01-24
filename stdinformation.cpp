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
}information[n] = { { 1012 , 1.85, 64.3 ,"王玉升", "男", {2003, 10, 12}, {2003, 10, 12}, {123, 123, 123, 123, 123}},  { 1012 , 1.85, 64.3 ,"6", "男", {2003, 10, 12}, {2003, 10, 12}} };





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
void welcome(){
    system("cls");
	printf("\n\n\n\n\t\t\t\t******************************************************************\n");
	printf("\t\t\t\t++--**********************************************************--++\n");
	printf("\t\t\t\t******************************************************************\n");
	printf("\t\t\t\t++--**********************************************************--++\n");
	printf("\t\t\t\t**                     徽    州    大    学                     **\n");
	printf("\t\t\t\t********                                                   *******\n");
	printf("\t\t\t\t-------------                                        -------------\n");
	printf("\t\t\t\t******************           安徽黄山          ****************** \n");
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
    printf("\t\t\t\t***        欢迎来到学生管理系统         ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***          1.学生信息管理.            ***\n");
    printf("\t\t\t\t***          2.学生成绩管理.            ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                  任意按键退出.      ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
}




void gradewelcome(){
    system("cls");
    printf("\n\n\n\n\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***               成绩管理              ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***          1.输入学生成绩.            ***\n");
    printf("\t\t\t\t***          2.查找学生成绩.            ***\n");               //用户界面
    printf("\t\t\t\t***          3.输出学生成绩.            ***\n");
    printf("\t\t\t\t***          0.退出系统.                ***\n");
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
    printf("\t\t\t\t***                信息管理             ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***           1.输入学生信息.           ***\n");
    printf("\t\t\t\t***           2.查找学生信息.           ***\n");                //用户界面
    printf("\t\t\t\t***           3.输出学生信息.           ***\n");
    printf("\t\t\t\t***           0.退出系统.               ***\n");
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
        printf("\n\n\n\n\t\t\t\t请输入学生姓名:");
        gets(information[i].name);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t请输入学生学号:");
        scanf("%d", &information[i].stuID);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t请输入学生性别:");
        gets(information[i].sex);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t请输入学生身高:");
        scanf("%f", &information[i].stuheight);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t请输入学生体重:");
        scanf("%f", &information[i].stuweight);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t请输入学生生日\n");
        printf("\t\t\t\t年/月/日  以空格隔开:");
        scanf("%d %d %d", &information[i].birthday.year, &information[i].birthday.month, &information[i].birthday.day);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t请输入学生注册日期\n");
        printf("\t\t\t\t年/月/日  以空格隔开:");
        scanf("%d %d %d", &information[i].regday.year, &information[i].regday.month, &information[i].regday.day);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t当前有%d位学生的信息输入成功!\n", i + 1);
        Sleep(1000);
        system("cls");
        printf("\n\n\n\n\t\t\t\t是否继续输入?   Y/N");
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
        printf("\n\n\n\n\t\t\t\t请输入学生学号以录入成绩:");
        int temp3 = 0;
        scanf("%d", &temp3);

        int m = 0, a = 0, vlog = 0;
        for ( m = 0; m <= n; m++){
            if (information[m].stuID == temp3){      //根据学号找到学生
                a = m;
                vlog = 1;
                break;
            }
        }

        if ( vlog == 1){
            printf("\t\t\t\t学号为%d的学生是%s.", temp3, information[a].name);
            Sleep(1500);
            system("cls");
        }
        else {
            printf("\t\t\t\t没有找到学号为%d的学生", temp3);
            Sleep(1500);
            system("cls");
            continue;
        }

        int i = 0;
        printf("\n\n\n\n\t\t\t\t输入%s的语文成绩:", information[a].name);
        scanf("%d", &information[a].grade.Chinese);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t输入%s的数学成绩:", information[a].name);
        scanf("%d", &information[a].grade.Maths);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t输入%s的英语成绩:", information[a].name);
        scanf("%d", &information[a].grade.English);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t输入%s的体育成绩:", information[a].name);
        scanf("%d", &information[a].grade.PE);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t输入%sC的语言成绩:", information[a].name);
        scanf("%d", &information[a].grade.Clanguage);
        fflush(stdin);
        system("cls");
        printf("\n\n\n\n\t\t\t\t学号为%d的学生成绩输入成功!",temp3);
        Sleep(1000);
        system("cls");
        printf("\n\n\n\n\t\t\t\t是否继续输入?   Y/N");
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
    printf("\t\t\t\t***          1.按姓名查找               ***\n");
    printf("\t\t\t\t***          2.按学号查找               ***\n");
    printf("\t\t\t\t***          3.按成绩查找               ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                  任意按键返回.      ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");
    






    int temp4 = 0;
    temp4 = _getch();
    if ( temp4 == '1'){
        system("cls");
        char arr[10] = " 0 ";
        printf("\n\n\n\n\t\t\t\t请输入姓名:");
        gets(arr);
        system("cls");
        printf("\n\n\n\n姓名\t学号\t性别\t\t身高\t体重\t\t生日\t\t注册日期\n");
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
        printf("\n\n\n\n\t\t\t请输入学号:");
        scanf("%d", &arr);
        system("cls");
        printf("\n\n\n\n姓名\t学号\t性别\t\t身高\t体重\t\t生日\t\t注册日期\n");
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
        printf("\t\t\t\t***          1.按语文成绩查找           ***\n");
        printf("\t\t\t\t***          2.按数学成绩查找           ***\n");
        printf("\t\t\t\t***          3.按英语成绩查找           ***\n");
        printf("\t\t\t\t***          4.按体育成绩查找           ***\n");
        printf("\t\t\t\t***          5.按C语言成绩查找          ***\n");
        printf("\t\t\t\t***                  任意按键返回.      ***\n");
        printf("\t\t\t\t*******************************************\n");
        printf("\t\t\t\t*******************************************\n");
        int j = 0;
        j = _getch();
        if ( j == '1'){
            system("cls");
            printf("\n\n\n\n\t\t\t\t请输入语文成绩:");
            scanf("%d", &arr);
            system("cls");
            printf("\n\n\n\n姓名\t学号\t性别\t\t身高\t体重\t\t生日\t\t注册日期\n");
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
            printf("\n\n\n\n\t\t\t\t请输入数学成绩:");
            scanf("%d", &arr);
            system("cls");
            printf("\n\n\n\n姓名\t学号\t性别\t\t身高\t体重\t\t生日\t\t注册日期\n");
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
            printf("\n\n\n\n\t\t\t\t请输入英语成绩:");
            scanf("%d", &arr);
            system("cls");
            printf("\n\n\n\n姓名\t学号\t性别\t\t身高\t体重\t\t生日\t\t注册日期\n");
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
            printf("\n\n\n\n\t\t\t\t请输入体育成绩:");
            scanf("%d", &arr);
            system("cls");
            printf("\n\n\n\n姓名\t学号\t性别\t\t身高\t体重\t\t生日\t\t注册日期\n");
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
            printf("\n\n\n\n\t\t\t\t请输入C语言成绩:");
            scanf("%d", &arr);
            system("cls");
            printf("\n\n\n\n姓名\t学号\t性别\t\t身高\t体重\t\t生日\t\t注册日期\n");
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
    printf("\t\t\t\t***          1.按姓名查找               ***\n");
    printf("\t\t\t\t***          2.按学号查找               ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                                     ***\n");
    printf("\t\t\t\t***                  任意按键返回.      ***\n");
    printf("\t\t\t\t*******************************************\n");
    printf("\t\t\t\t*******************************************\n");






    int temp5 = 0;
    temp5 = _getch();
    if (temp5 == '1'){
        system("cls");
        printf("\n\n\n\n\t\t\t\t请输入姓名:");
        char arr[10] = " 0 ";
        gets(arr);
        system("cls");
        printf("\n\n\n\n姓名\t语文\t数学\t英语\t体育\tC语言\n");
        int i = 0;
        while ( information[i].stuID ){
            if ( strcmp(information[i].name, arr) == 0 ){
                if (information[i].grade.Chinese == 0 && information[i].grade.Clanguage == 0 && information[i].grade.English == 0 && information[i].grade.Maths == 0 && information[i].grade.PE == 0){
                    printf("%s的成绩未录入!\n", information[i].name);
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
        printf("\n\n\n\n\t\t\t\t请输入学号:");
        int arr = 0;
        scanf("%d", &arr);
        system("cls");
        printf("\n\n\n\n姓名\t语文\t数学\t英语\t体育\tC语言\n");
        int i = 0;
        while ( information[i].stuID ){
            if ( information[i].stuID == arr ){
                if (information[i].grade.Chinese == 0 && information[i].grade.Clanguage == 0 && information[i].grade.English == 0 && information[i].grade.Maths == 0 && information[i].grade.PE == 0){
                    printf("%s的成绩未录入!\n", information[i].name);
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
    printf("\n\n\n\n姓名\t学号\t性别\t\t身高\t体重\t\t生日\t\t注册日期\n");
    while(information[i].stuID){
        printf("%s\t%-5d\t%s\t\t%.2f    %.2f\t\t%4d/%2d/%2d\t%4d/%2d/%2d\n", information[i].name, information[i].stuID, information[i].sex, information[i].stuheight, information[i].stuweight, information[i].birthday.year, information[i].birthday.month, information[i].birthday.day, information[i].regday.year, information[i].regday.month, information[i].regday.day);
        i++;
    }    
    system("pause > NULL");
}


void gradeOutput(){
    system("cls");
    int i = 0;
    printf("\n\n\n\n姓名\t语文\t数学\t英语\t体育\tC语言\n");
    while(information[i].stuID){
        if (information[i].grade.Chinese == 0 && information[i].grade.Clanguage == 0 && information[i].grade.English == 0 && information[i].grade.Maths == 0 && information[i].grade.PE == 0){
            printf("%s的成绩未录入!\n", information[i].name);
            i++;
        }
        else {
            printf("%s\t%d\t%d\t%d\t%d\t%d\n", information[i].name, information[i].grade.Chinese, information[i].grade.Maths, information[i].grade.English, information[i].grade.PE, information[i].grade.Clanguage);
            i++;
        }
    }
    system("pause > NULL");
}