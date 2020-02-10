/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  구조체
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - YUJIN.(*,,*)b
*/

#include <stdio.h>


/*
struct student
{
    int num;
    double grade;
};



int main(void) 
{
    struct student s1;

    s1.num = 2;
    s1.grade = 2.7;
    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1lf\n", s1.grade);

}


struct profile
{
    char name[20];
    int age;
    double height;
    char* intro;
};

int main(void)
{
    struct profile yuni;

    strcpy(yuni.name, "서하윤");
    yuni.age = 17;
    yuni.height = 164.5;

    yuni.intro = (char*)malloc(80);
    printf("자기소개 : ");
    gets(yuni.intro);

    printf("이름 : %s\n", yuni.name);
    printf("나이 : %d\n", yuni.age);
    printf("키 : %.1lf\n", yuni.height);
    printf("자기소개 : %s\n", yuni.intro);
    free(yuni.intro);

    return 0;
}                                                                       

struct profile
{
    int age;
    double height;
};

struct student
{
    struct profile pf;
    int id;
    double grade;
};

int main(void)
{
    struct student yuni;

    yuni.pf.age = 17;
    yuni.pf.height = 164.5;
    yuni.id = 315;
    yuni.grade = 4.3;

    printf("나이 : %d\n", yuni.pf.age);
    printf("키 : %.1lf\n", yuni.pf.height);
    printf("학번 : %d\n", yuni.grade);
    printf("학점 : %.1lf", yuni.grade);

    return 0;
}
*/

struct student
{
    int id;
    char name[20];
    double grade;
};

int main(void)
{
    struct student  s1 = { 315, "홍길동",2.4 },
        s2 = { 316,"이순신",3.7 },
        s3 = { 317, "세종대왕", 4.4 };

    struct student max;

    max = s1;
    if (s2.grade > max.grade) max = s2;
    if (s3.grade > max.grade) max = s3;


    printf("학번 : %d\n", max.id);
    printf("이름 : %s\n", max.name);
    printf("학점 : %.1lf\n", max.grade);

    return 0;
}