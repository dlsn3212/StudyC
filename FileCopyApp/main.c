/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  �پ��� ���� ����� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{
    FILE* ifp, * ofp;
    char name[20];
    int kor, eng, math;
    int total;
    double avg;
    int res;

    ifp = fopen("a.txt", "r");
    if (ifp == NULL)
    {
        printf("�Է� ������ ���� ���߽��ϴ�.\n");
        return 1;
    }

    ofp = fopen("b.txt", "w");
    if (ofp == NULL)
    {
        printf("��� ������ ���� ���߽��ϴ�.\n");
        return 1;
    }



    while (1)
    {
        res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
        if (res == EOF)//������ �����͸� ��� ������ EOF��ȯ
        {
            break;
        }

        total = kor + eng + math;
        avg = total / 3.0;
        fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
    }

    fclose(ifp);
    fclose(ofp);

    return 0;
}