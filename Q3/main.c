/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  �л� 3���� �б޿��� ���� ���� ���� ������ ���� ������ �Է� ���� ��,  
  �� ���� ���հ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
  ���� ����, ����, ���� ������ ����� �ϴ� ����ü student_t �� �����Ѵ�.
  �л��� 3���̹Ƿ� student_t Ÿ���� ���� 3��, Ȥ�� �迭�� �����Ͽ�, �ش� ������ ������ �Է¹޴´�.
  �� ������ ������ ���ϴ� �Լ��� ���� �ۼ��Ͽ� ���հ� ����� ���� �� �̸� ����Ѵ�.

  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print(struct student_t* final);
struct student_t
{
    
    double lan;
    double eng;
    double math;
    
};


int main(void) 
{
    struct student_t student1[3];

   
    
        printf("���� ���� ���м����� ������ �Է����ּ��� : ");
        scanf("%lf%lf%lf", &student1[0].lan, &student1[0].eng, &student1[0].math);
     
    
    printf("1��° �л� ���� �Է� ��\n");
    
        printf("���� ���� ���м����� ������ �Է����ּ��� : ");
        scanf("%lf%lf%lf", &student1[1].lan, &student1[1].eng, &student1[1].math);
       
   
    printf("2��° �л� ���� �Է� ��\n");

    
        printf("���� ���� ���м����� ������ �Է����ּ��� : ");
        scanf("%lf%lf%lf", &student1[2].lan, &student1[2].eng, &student1[2].math);
      
    
    printf("3��° �л� ���� �Է� ��\n\n\n");


    print(student1);
    

}

void print(struct student_t *final)//�������� ���հ� ���
{
    int i;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
   float avg1, avg2, avg3;
    
    for (i = 0; i < 3; i++)
    {
        sum1 += final[i].lan;
        sum2 += final[i].eng;
        sum3 += final[i].math;

    }

    avg1 = sum1 / 3;
    avg2 = sum2 / 3;
    avg3 = sum3 / 3;

    printf("���� ���� : %d%t��� : %.1f\n", sum1, avg1);
    printf("���� ���� : %d%t��� : %.1f\n", sum2, avg2);
    printf("���� ���� : %d%t��� : %.1f\n\n", sum3, avg3);

 
}