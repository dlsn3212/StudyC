/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  ���ڿ��� ������
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - yujin
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int main(void) 
{
    printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
    printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1);
    printf("ù ��° ���� : %c\n", *"apple");
    printf("�� ��° ���� : %c\n", *("apple" + 1));
    printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);
    return 0;
}


int main(void)
{
    char* dessert = "apple";

    printf("���� �Ľ��� %s�Դϴ�..\n", dessert);
    dessert = "banana";
    printf("���� �Ľ��� %s�Դϴ�. \n", dessert);

    return 0;
}



int main(void)
{
    char str[80];
    printf("���ڿ� �Է� : ");
    scanf("%s", str);
    printf("ù ��° �ܾ� : %s\n", str);
    scanf("%s", str);
    printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str);

    return 0;
}


int main(void)
{
    char str[80];

    printf("������ ���Ե� ���ڿ� �Է� : ");
    gets(str);
    printf("�Է��� ���ڿ��� %s�Դϴ�.", str);

    return 0;
}


int main(void)
{
    char str[80];

    printf("������ ���Ե� ���ڿ� �Է� : ");
    fgets(str, sizeof(str), stdin);
    printf("�Էµ� ���ڿ��� %s�Դϴ�.\n", str);
 
    return 0;
}


int main(void)
{
    int age;
    char name[20];

    printf("���� �Է� : ");
    scanf("%d", &age);

    printf("�̸� �Է� : ");
    gets(name);
    printf("���� : %d, �̸� : %s\n", age, name);

    return 0;
}


int main(void)
{
    char str[80] = "apple juice";
    char* ps = "banana";

    puts(str);
    fputs(ps, stdout);
    puts("milk");

    return 0;
}


int main(void)
{
    char str1[80] = "strawberry";
    char str2[80] = "apple";
    char* ps1 = "banana";
    char* ps2 = str2;

    printf("���� ���ڿ� : %s\n", str1);
    strcpy(str1, str2);
    printf("�ٲ� ���ڿ� : %s\n", str1);

    strcpy(str1, ps1);
    printf("�ٲ� ���ڿ� : %s\n", str1);

    strcpy(str1, ps2);
    printf("�ٲ� ���ڿ� : %s\n", str1);

    strcpy(str1, "banana");
    printf("�ٲ� ���ڿ� : %s\n", str1);

    return 0;
}


int main(void)
{
    char str[20] = "mango tree";

    strncpy(str, "apple-pie", 5);

    printf("%s\n", str);

    return 0;
}


int main(void)
{
    char str[80] = "straw";

    strcat(str, "berry");
    printf("%s\n", str);
    strncat(str, "piece", 3);
    printf("%s\n", str);

    return 0;
}


int main(void)
{
    char str1[80], str2[80];
    char* resp;

    printf("2���� ���� �̸� �Է� : ");
    scanf("%s%s", str1, str2);
    if (strlen(str1) > strlen(str2))
        resp = str1;
    else
        resp = str2;

    printf("�̸��� �� ������ : %s\n", resp);
    printf("str1�� ���� : %d , str2�� ���� : %d", strlen(str1), strlen
    (str2));
    return 0;

}
*/
/*
int main(void)
{
    char str1[80] = "appele";
    char str2[80] = "banana";

    printf("������ ���߿� ������ ���� �̸� : ");

    if (strcmp(str1, str2) > 0)
        printf("%s\n", str1);
    else
        printf("%s\n",str2);

        return 0;
}
 //while(1)scanf strcmp �ܾ�ΰ��� �޾� ȭ�鿡 ��� ��� 
*/
int main(void)
{
    char str1[80], str2[80];
   
    while (1) {
        printf("2���� ���� �̸� �Է� : ");
        scanf("%s%s", str1, str2);
       
        if ((str1[0] == 'X')&&(str2[0] == 'X'))
            break;
        else {


            if (strcmp(str1, str2) < 0)
                printf("%s\n", str1);

            else
                printf("%s\n", str2);

        }
      
    }
    return 0;

}
