/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  ������ �������� ��ȯ�ϴ� �Լ��� �ۼ��Ͻÿ�.
�Լ� �Է� : 0-100 ������ ���� (����)
�Լ� ��ȯ�� : ����
A : 90-100
B : 70-89
C : 60-69
D : 50-59
F : 0-39

  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

void grade(int *num);

// �����Լ�
int main(void) 
{
    int num;
    printf("���� : ");
    scanf("%d", &num);
    grade(&num);

    
}

void grade(int *num)
{
    int i;
    i = *num;
    if ((90 <= i) && (i<= 100))
    {
        printf("������ A");
        
    }
    else if ((70 <= i) && (i < 90))
    {
        printf("������ B");
    }
    else if ((60 <= i)&&(i < 70))
    {
        printf("������ C");
    }
    else if ((50 <= i) && (i < 60))
    {
        printf("������ D");
    }
    else if ((0 <= i)&&(i < 40))
    {
        printf("������ F");
    }
    return 0;
}