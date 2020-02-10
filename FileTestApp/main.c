/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  ���� ����� �����
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - yujin.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int main(void) 
{
    FILE* fp;
    char str[] = "banana";
    int i;

    fp = fopen("b.txt", "w");
    if (fp == NULL)
    {
        printf("������ �������� �ʾҽ��ϴ�.\n");
        return 1;
    }

    //printf("������ ���Ƚ��ϴ�.\n");

    i = 0;
    while (str[i] != '\0')
    {
        fputc(str[i], fp);
        i++;
    }

    fputc('\n', fp);
    fclose(fp);
    return 0;
}


int main(void)
{
    FILE* fp;
    int ary[10] = { 13,10,13,13,10,26,13,10,13,10 };
    int i, res;

    fp = fopen("a.txt", "wb");
    for (i = 0; i < 10; i++)
    {
        fputc(ary[i], fp);
    }
    fclose(fp);

    fp = fopen("a.txt", "rt");
    while (1)
    {
        res = fgetc(fp);
        if (res == EOF) break;
        printf("%4d", res);
    }

    fclose(fp);

    return 0;
}
*/

int main(void)
{
    FILE* fp;
    char str[20];

    fp = fopen("d.txt", "a+");
    if (fp == NULL)
    {
        printf("������ ������ ���߽��ϴ�.\n");
        return 1;
    }

    while (1)
    {
        printf("���� �̸� : ");
        scanf("%s", str);
        if (strcmp(str, "end") == 0)
        {
            break;
        }
        else if (strcmp(str, "list") == 0)
        {
            fseek(fp, 0, SEEK_SET);
            while (1)
            {
                fgets(str, sizeof(str), fp);
                if (feof(fp)) { break; }
                printf("%s", str);
            }
        }
        else
        {
            fprintf(fp, "%s\n", str);
        }
    }
    fclose(fp);

    return 0;
}