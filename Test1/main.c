/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
/*
int main(void) 
{
    if (a > 0)
        printf("a�� ����Դϴ�.\n",a);//�⺻���� if �ڿ� (=X ==������," "X ' '�� ����)
    else if (a == 0)//else�ڿ��� ()����, else if �ڴ� ()
    {
        printf("a�� 0�Դϴ�.\n");
    }
    else
    {
        printf("a�� �����Դϴ�.\n");
    }
    int ch;
    switch(ch)

        case 'a' :
            printf("ch")

	return EXIT_SUCCESS;
}
*/

/*
unsigned�� ����������� ���� ���� ��-> %u,
%d�� ��ȣ ����! 

*/

/*
int main(void)
{
    char fruit[20] = "strawberry";
    printf("%s\n", fruit);
    //fruit = "banana"; �迭���� ���ο� ���ڿ� �����Ϸ��� ������ �Ұ���
    strcpy(fruit, "banana");
    printf("%s\n", fruit);

    return 0;


}
*/
/*
int main(void)
{
    int income = 0;
    double tax;
    const double tax_rate = 0.12;
    //const�����
    const �ڷ��� ������ = ��;


    printf("�ҵ���� �Է��ϼ��� : ");
    scanf("%d", &income);
    tax = income * tax_rate;
    
    printf("������ : %.1lf�Դϴ�.\n", tax);

    return 0;
}


int main(void)
{
    char grade;
    char name[20];

    printf("���� �Է� : ");
    scanf("%c", &grade);

    printf("�̸� �Է� : ");
    scanf("%s", name);

    printf("%s�� ������ %c�Դϴ�.", name, grade);
    
}


int main(void)
{
    int a, b;
    double avg;

    printf("�� ������ ���� : ");
    scanf("%d%d", &a, &b);
    avg = (a + b) / 2.0;
    printf("��� : %.1lf", avg);

    return 0;
}


int main(void)
{
    int kor = 3, eng = 5, mat = 4;
   
    int credits;

    double kscore = 3.8, escore = 4.4, mscore = 3.9;
    
    double res;
    double grade;


    credits = kor + eng + mat;
    grade = (kscore + escore + mscore)/ 3.0;

    if ((credits >= 10 && grade > 4))
        printf("1");
    else
        printf("0");
      

    res = (credits >= 10) && (grade > 4);
    printf("%d", res);
}
sizeof(~~)�� sizeof���



int main(void)
{
    int a = 1;
    int b = 1;

    while (a <= 10)
    {
        a = a * 2;
        printf("%d\n", a);
       
    }

    do
    {
        b = b * 2;
        printf("%d\n", b);
    } while (b <= 10);
    return 0;
}


int main(void)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("$");

    }
    return 0;

}


int main(void)
{
    int i;
    int j;
    int tot;

    for (i = 2; i < 10; i++)
    {
        for (j = 1; j < 10; j++)
        {
            printf("%d X %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }
}


int main(void)
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++) {
            printf("Be Happy\n");
            if (j == 2) break;
        }
    }
}
*/

int main(void)
{
    int i, j,k;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if ((i == j) && (i + j == 4))
            {
                printf("*");
            }
            else
                printf(" ");
        }
    }
}