/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  ����ü
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
    printf("�й� : %d\n", s1.num);
    printf("���� : %.1lf\n", s1.grade);

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

    strcpy(yuni.name, "������");
    yuni.age = 17;
    yuni.height = 164.5;

    yuni.intro = (char*)malloc(80);
    printf("�ڱ�Ұ� : ");
    gets(yuni.intro);

    printf("�̸� : %s\n", yuni.name);
    printf("���� : %d\n", yuni.age);
    printf("Ű : %.1lf\n", yuni.height);
    printf("�ڱ�Ұ� : %s\n", yuni.intro);
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

    printf("���� : %d\n", yuni.pf.age);
    printf("Ű : %.1lf\n", yuni.pf.height);
    printf("�й� : %d\n", yuni.grade);
    printf("���� : %.1lf", yuni.grade);

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
    struct student  s1 = { 315, "ȫ�浿",2.4 },
        s2 = { 316,"�̼���",3.7 },
        s3 = { 317, "�������", 4.4 };

    struct student max;

    max = s1;
    if (s2.grade > max.grade) max = s2;
    if (s3.grade > max.grade) max = s3;


    printf("�й� : %d\n", max.id);
    printf("�̸� : %s\n", max.name);
    printf("���� : %.1lf\n", max.grade);

    return 0;
}