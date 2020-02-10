/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  ���۸� �����ϹǷ� �߻��ϴ� ����
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - yujin(|:o/z)
*/

#include <stdio.h>
#include <stdlib.h>

/*
int main(void) 
{
    FILE* fp;
    int age;
    char name[20];

    fp = fopen("a.txt", "r");
    if (fp == NULL)
    {
        printf("�Է� ������ ���� ���߽��ϴ�.\n");
        return 1;
    }

    fscanf(fp, "%d", &age);
    fgetc(fp);
    while (fgetc(fp) != '\n') {}
    fgets(name, sizeof(name), fp);
    

    printf("���� : %d, �̸� : %s", age, name);
    fclose(fp);

    return 0;
}
*/

int main(void)
{
    FILE* afp, * bfp;
    int num = 10;
    int res;

    afp = fopen("a.txt", "wt");
    if (afp == NULL) return 1;
    fprintf(afp, "%d", num);

    bfp = fopen("b.txt", "wb");
    if (bfp == NULL) return 1;
    fwrite(&num, sizeof(num), 1, bfp);

    fclose(afp);
    fclose(bfp);

    bfp = fopen("b.txt", "rb");
    fread(&res, sizeof(res), 1, bfp);
    printf("%d", res);

    fclose(bfp);
    

    return 0;
}