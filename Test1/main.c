/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
//#include <stdlib.h>
#include <string.h>


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


int main(void)
{
    int i, j;
    int k = 1;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i + j > k)
            {
                printf("*");
                k = k + 2;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
*/
/*
int main(void)
{
    int i, j,k;
    for (i = 1; i < 4; i++)
    {
        for (j = 3; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i * 2 - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}
*�ﰢ�������
*/ 
/*
double centi_to_meter(int cm);

int main(void)
{
    double res;

    res = centi_to_meter(187);
    printf("%.2lfm\n", res);
}

double centi_to_meter(int cm)
{
    
    double a;

    a = cm / 100.0;

    return a;
}
*/
/*
int get_num(void);

int main(void)
{
    int result;

    result = get_num();
    printf("��ȯ�� : %d\n", result);
    return 0;
}

int get_num(void)
{
    int num;
    printf("��� �Է� : ");
    scanf("%d", &num);

    return num;
    
}
*/
/*
int sum(int num);

int main(void)
{
    sum(10);
    sum(100);

    return 0;
}

int sum(int num)
{
    int tot = 0;
    for (int count = 1; count <= num; count++)
    {
        tot += count;
    }
    printf("1���� %d������ ���� : %d\n", num, tot);
}
*/
/*
int* ten()
{
    int* numptr = malloc(sizeof(int));
    *numptr = 10;
    return numptr;

}

int main() {
    int* numptr;
    numptr = ten();
    printf("%d\n", *numptr);
    free(numptr);

    return 0;
}
*/

/*
char* helloLiteral()
    {
        char* s1 = "hello";
        return s1;
    }
char* helloDynamicM() {
    char* s1 = malloc(sizeof(char) * 20);
    strcpy(s1, "hello");
    return s1;                  
}

int main()
{
    char* s1;   
    char* s2;

    s1 = helloLiteral();
    s2 = helloDynamicM();

    printf("%s\n", s1);
    printf("%s\n", s2);
    free(s2);

    return 0;
}
*/
/*
int main()
{
    int A[3] = { 1,2,3 };
    int B[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        B[i] = A[i % 3];
        printf("%d\t", B[i]);
    }
    return 0;
}
*/
/*
int main()
{
    int size;
    scanf("%d", &size);

    int* numptr = malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++)
    {
        numptr[i] = i;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", numptr[i]);  
    }
    free(numptr);

    return 0;
}
size�Է¹޾� ���� �޸� �Ҵ�
*/
/*
int main()
{
    int** m = malloc(sizeof(int*) * 3);
    //���� �����Ϳ� (int������ ũ�� *����ũ��)��ŭ �����޸��Ҵ�,�迭�Ǽ���

    for (int i = 0; i < 3; i++) {
        m[i] = malloc(sizeof(int*) * 4);
        //intũ�� * ����ũ�� �����޸� �Ҵ�
    }
    m[0][0] = 1;
    m[2][0] = 5;

    for (int i = 0; i < 3; i++)
    {
        freemm(m[i]);//���ΰ����޸�����
    }
    free(m);//���� ���� �޸� ����
}//�����޸��Ҵ�,2�����迭 

*/
/*
typedef struct _Person {
    char name[20];
    int age;
    char address[100];
} Person;

int main()
{
    Person* p1 = malloc(sizeof(Person));//����ü ��Ī�����ͼ�, �޸��Ҵ�

    strcpy(p1->name, "ȫ�浿");
    p1->age = 30;
    strcpy(p1->address, "�λ�");

    free(p1);//���� �޸� ����
}����ü �����Ϳ� ���� �޸� �Ҵ�
*/
/*
struct Person {
    char name[20];
    int age;
    char addree[100];
};

int main()
{
    struct Person p1;//����ü ���� ����
    struct Person* ptr;//����ü ������ ����
    //��������� ptr�� p1�� ���谡 ����

    ptr = &p1;//p1�� �޸� �ּҸ� ���Ͽ� ptr�� �Ҵ�

    ptr->age = 40;

    //����ü �����Ϳ����� ->

}
*/

/*
struct point {
    int x;
    int y;
};

int main()
{
    struct point p1;
    memset(&p1, 0, sizeof(struct point));
    malloc�Լ����
    struct point *p1 = malloc(sizeof(struct point));
    memset(p1,0,sizeof(struct point));
    p1�� �ּҸ� ��������Ƿ� &����
    
*/
/*
struct point {
    int x;
    int y;
};
int main()
{
    struct point* p[3];

    for (int i = 0; i < sizeof(p) / sizeof(struct point*); i++)
    {
        p[i] = malloc(sizeof(struct point));
    }
    //sizeof(struct point)�� ����ü�� �����ϴ� ũ��
    //sizeof(struct point*)�� ����ü �������� ũ��
    for (int i = 0; i < sizeof(struct point) / sizeof(struct point*); i++)
    {
        free(p[i]);
    }
    p[0]->x = 10;
    p[0]->y = 20;
    p[1]->x = 30;
    p[1]->y = 40;

}
*/

void swap(int *first, int *second)
{
    int temp;

    temp = *first;
    *first = *second;
    *second = temp; //�Ű������� �����ͷ� ����ϸ� �Լ��ٱ�����
    //�������� ���� ������ �� ����.
   //�޸� �ּҿ� �����ؼ� ���� �����ϱ⶧����.
}
/*
int main()
{
    int num1 = 10;
    int num2 = 20;
    swap(&num1, &num2);
    printf("%d %d\n", num1, num2);

    return 0;
}
*/
/*
void allocmemory(void** ptr, int size)
{
    *ptr = malloc(size);
}

int main()
{
    long long* numptr = NULL;
    allocmemory(&numptr, sizeof(long long));
    *numptr = 10;
    printf("%lld\n", *numptr);
    free(numptr);
    return 0;
}
*/
   

