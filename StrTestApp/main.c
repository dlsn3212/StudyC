/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  문자열과 포인터
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
    printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
    printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
    printf("첫 번째 문자 : %c\n", *"apple");
    printf("두 번째 문자 : %c\n", *("apple" + 1));
    printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);
    return 0;
}


int main(void)
{
    char* dessert = "apple";

    printf("오늘 후식은 %s입니다..\n", dessert);
    dessert = "banana";
    printf("내일 후식은 %s입니다. \n", dessert);

    return 0;
}



int main(void)
{
    char str[80];
    printf("문자열 입력 : ");
    scanf("%s", str);
    printf("첫 번째 단어 : %s\n", str);
    scanf("%s", str);
    printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);

    return 0;
}


int main(void)
{
    char str[80];

    printf("공백이 포함된 문자열 입력 : ");
    gets(str);
    printf("입력한 문자열은 %s입니다.", str);

    return 0;
}


int main(void)
{
    char str[80];

    printf("공백이 포함된 문자열 입력 : ");
    fgets(str, sizeof(str), stdin);
    printf("입력된 문자열은 %s입니다.\n", str);
 
    return 0;
}


int main(void)
{
    int age;
    char name[20];

    printf("나이 입력 : ");
    scanf("%d", &age);

    printf("이름 입력 : ");
    gets(name);
    printf("나이 : %d, 이름 : %s\n", age, name);

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

    printf("최초 문자열 : %s\n", str1);
    strcpy(str1, str2);
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, ps1);
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, ps2);
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, "banana");
    printf("바뀐 문자열 : %s\n", str1);

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

    printf("2개의 과일 이름 입력 : ");
    scanf("%s%s", str1, str2);
    if (strlen(str1) > strlen(str2))
        resp = str1;
    else
        resp = str2;

    printf("이름이 긴 과일은 : %s\n", resp);
    printf("str1의 길이 : %d , str2의 길이 : %d", strlen(str1), strlen
    (str2));
    return 0;

}
*/
/*
int main(void)
{
    char str1[80] = "appele";
    char str2[80] = "banana";

    printf("사전에 나중에 나오는 과일 이름 : ");

    if (strcmp(str1, str2) > 0)
        printf("%s\n", str1);
    else
        printf("%s\n",str2);

        return 0;
}
 //while(1)scanf strcmp 단어두개를 받아 화면에 계속 출력 
*/
int main(void)
{
    char str1[80], str2[80];
   
    while (1) {
        printf("2개의 과일 이름 입력 : ");
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
