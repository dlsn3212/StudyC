/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
동적할당  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - yujin.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int main(void) 
{
    char temp[80];
    char* str[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("문자열을 입력하세요 : ");
        gets(temp);
        str[i] = (char*)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", str[i]);
    }

    for (i = 0; i < 3; i++)
    {
        free(str[i]);
    }

    return 0;
}


void print_str(char** ps);

int main(void)
{
    char temp[80];
    char* str[21] = { 0 };
    int i = 0;

    while (i < 20)
    {
        printf("문자열을 입력하세요 : ");
        gets(temp);
        if (strcmp(temp, "end") == 0) break;
        str[i] = (char*)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
        i++;
    }

    print_str(str);

    for (i = 0; str[i] != NULL; i++)
    {
        free(str[i]);
    }

    return 0;
}

void print_str(char** ps)
{
    while (*ps != NULL)
    {
        printf("%s\n", *ps);
        ps++;
    }
}
*/
