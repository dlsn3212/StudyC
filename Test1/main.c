/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
//#include <stdlib.h>
#include <string.h>


// 메인함수
/*
int main(void) 
{
    if (a > 0)
        printf("a는 양수입니다.\n",a);//기본문장 if 뒤에 (=X ==만가능," "X ' '만 가능)
    else if (a == 0)//else뒤에는 ()없음, else if 뒤는 ()
    {
        printf("a는 0입니다.\n");
    }
    else
    {
        printf("a는 음수입니다.\n");
    }
    int ch;
    switch(ch)

        case 'a' :
            printf("ch")

	return EXIT_SUCCESS;
}
*/

/*
unsigned는 양수전용으로 쓰고 싶을 때-> %u,
%d는 부호 있음! 

*/

/*
int main(void)
{
    char fruit[20] = "strawberry";
    printf("%s\n", fruit);
    //fruit = "banana"; 배열에서 새로운 문자열 저장하려면 대입은 불가능
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
    //const사용방법
    const 자료형 변수명 = 값;


    printf("소득액을 입력하세요 : ");
    scanf("%d", &income);
    tax = income * tax_rate;
    
    printf("세금은 : %.1lf입니다.\n", tax);

    return 0;
}


int main(void)
{
    char grade;
    char name[20];

    printf("학점 입력 : ");
    scanf("%c", &grade);

    printf("이름 입력 : ");
    scanf("%s", name);

    printf("%s의 학점은 %c입니다.", name, grade);
    
}


int main(void)
{
    int a, b;
    double avg;

    printf("두 과목의 점수 : ");
    scanf("%d%d", &a, &b);
    avg = (a + b) / 2.0;
    printf("평균 : %.1lf", avg);

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
sizeof(~~)로 sizeof사용



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
*삼각형만들기
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
    printf("반환값 : %d\n", result);
    return 0;
}

int get_num(void)
{
    int num;
    printf("양수 입력 : ");
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
    printf("1부터 %d까지의 합은 : %d\n", num, tot);
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
size입력받아 동적 메모리 할당
*/
/*
int main()
{
    int** m = malloc(sizeof(int*) * 3);
    //이중 포인터에 (int포인터 크기 *세로크기)만큼 동적메모리할당,배열의세로

    for (int i = 0; i < 3; i++) {
        m[i] = malloc(sizeof(int*) * 4);
        //int크기 * 가로크기 동적메모리 할당
    }
    m[0][0] = 1;
    m[2][0] = 5;

    for (int i = 0; i < 3; i++)
    {
        freemm(m[i]);//가로공간메모리해제
    }
    free(m);//세로 공간 메모리 해제
}//동적메모리할당,2차원배열 

*/
/*
typedef struct _Person {
    char name[20];
    int age;
    char address[100];
} Person;

int main()
{
    Person* p1 = malloc(sizeof(Person));//구조체 별칭포인터선, 메모리할당

    strcpy(p1->name, "홍길동");
    p1->age = 30;
    strcpy(p1->address, "부산");

    free(p1);//동적 메모리 해제
}구조체 포인터에 동적 메모리 할당
*/
/*
struct Person {
    char name[20];
    int age;
    char addree[100];
};

int main()
{
    struct Person p1;//구조체 변수 선언
    struct Person* ptr;//구조체 포인터 선언
    //선언까지는 ptr과 p1이 관계가 없음

    ptr = &p1;//p1의 메모리 주소를 구하여 ptr에 할당

    ptr->age = 40;

    //구조체 포인터에서는 ->

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
    malloc함수사용
    struct point *p1 = malloc(sizeof(struct point));
    memset(p1,0,sizeof(struct point));
    p1이 주소를 담고있으므로 &빠짐
    
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
    //sizeof(struct point)는 구조체가 차지하는 크기
    //sizeof(struct point*)는 구조체 포인터의 크기
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
    *second = temp; //매개변수를 포인터로 사용하면 함수바깥으로
    //여러개의 값을 전달할 수 있음.
   //메모리 주소에 접근해서 값을 저장하기때문에.
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
   

