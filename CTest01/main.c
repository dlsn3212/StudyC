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
#include <string.h>
#include <stdlib.h>
#include <memory.h>


/*
int main(void)
{

    int i, j = 0;
    int a;
    printf("Ȧ���� �Է� : ");
    scanf("%d", &a);


    for (int i = 0; i <= a / 2; i++)
    {
        for (int j = a / 2; j > i; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < (2 * i) + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    a = a / 2 + 1;

    for (i = a - 2; i >= 0; i--) 
    {
        for (j = i + 1; j < a; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i * 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
    /*
    for (int i = 0; i < a / 2; i++)
    {
        for (int j = i + 1; j <(a/2)+i; j++)
        {
            printf(" ");
        }

        for (int j = a - 2; j > (i*2); j--)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
*/

/*
int main(void)
{
    int i, j;
    int a;
    printf("������ *�� ���� �Է��Ͻÿ�:");
    scanf("%d", &a);
    

    a = a / 2 + 1;
    for (i = 0; i < a; i++)
    {
        for (j = i + 1; j < a; j++) {
            printf(" ");
        }
        for (j = 0; j <= i * 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = a - 2; i >= 0; i--) 
    {
        for (j = i + 1; j < a; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i * 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
*/

/*
int main(void)
{
    char num;
    printf("���ڸ� �Է����ּ��� : ");
    scanf("%c",&num);
    printf("ASCII CODE : %d", num);
    
}
*/
/*
int solution(int num);

int solution(int num)
{
    int tot=0;
    while (num != 0)
    {
        tot =tot + num % 10;
        num = num / 10;
    }
    
    return tot;
}




int main(void) {
    int num;
    int total=0;
    printf("�ڿ��� �Է� : ");
    scanf("%d", &num);

    total = solution(num);
    printf("�հ� : %d", total);
}

*/
/*
long long jg(long long n, int x);


long long jg(long long n,int x)
{
    long long a=0;
    if ((x * x)==n)
    {
       
        return (long long)(x + 1) * (x + 1);
    }
    else
    {
        return -1;
    }
}



int main(void)
{
    long long n;
    int x;
    double tot;

    printf("x : ");
    scanf("%d", &x);

    getchar();

    printf("n : ");
    scanf("%lld", &n);

   

    printf("��� : %lld", jg(n, x));

    return 0;

}
*/

/*
int change(int n);

int change(int n) {

    int max = strlen(n);

    int tot[] = { 0, };
    
        for (int i = 0; i < max; i++) {
            tot[i] = tot + n % 10;
            n = n / 10;
        }

        return tot;
    
}




int main(void) {
    int n;

    printf("�ڿ��� �Է� : ");
    scanf("%d", &n);

    if (n < 10000000000) {
        int max = 5;

        char tot[5] = { 0, };

        for (int i = 0; i < max; i++) {
            tot[i] = n % 10;
            n = n / 10;
        }

        for (int i = 0; i < 5; i++)
        {
            printf("%d", tot[i]);
            if (tot[i] == NULL)
            {
                return;
            }
        }
    }
    else
    {
        return;
    }

    
    
    return 0;
}
*/

/*
int main(void)
{
    

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                printf("%c%c%c", i, j, k);
                printf(" ");
            }
            printf("\n");
        }
    }
}
*/

/* �����̸�� �迭
int main(void)
{
    int num;
    int add[10][10] = { 0, };
    int plus=1;
    int index = 1;
    int row = 0;
    int col = -1;

    
    printf("���� �Է� : ");
    scanf("%d", &num);

    int number = num;

    while (num>0)
    {
        for (int i = 0; i < num; i++)
        {
            col = col + index;
            add[row][col] = plus++;
        }

        num--;
        if (num == 0)
        {
            break;
        }

        for (int i = 0; i < num; i++)
        {
            row = row + index;
            add[row][col] = plus++;
        }
        index = index * -1;


    }

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number ; j++)
        {
            printf("%3d", add[i][j]);
        }
        printf("\n");
    }

}
*/

/*
int main(void)
{
    int num[100];

    for (int i = 2; i < 100; i++)
    {
        if ((i%i==0)&&())
        {
            num[i] = i;
            printf("%d\n", num[i]);
        }

    }
}
*/
/*Ȧ��������
int main(void)
{
    int num[10][10];
    int n;
    int plus=1;
    int row = 0;
    
    printf("Ȧ�� : ");

    scanf("%d", &n);


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            num[i][j] = 0;
        }
    }


    int col = n / 2;
    int number = n * n;
    num[0][col] = plus++;
    int br = 0;
    int bc = 0;
    

    while (number >= 0) {
        
        
        row = row - 1;
        col = col + 1;
       

            if (row < 0)
            {
                row = n - 1;
                
            }
            if (col > n - 1)
            {
                col = 0;
                
                
            }
            if (num[row][col] != 0)
            {
                row = br+1;
                col = bc;
            }

            num[row][col] = plus++;
             br = row;
             bc = col;

            number--;
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", num[i][j]);
        }
        printf("\n");
    }
       
    
}



*/


/*
int main(void)
{
    int num;
    int result;

    printf("�Է� : ");
    scanf("%d", &num);

    for (int i = 1; i <= 9; i++)
    {
        result = num * i;
        printf("%d X %d = %d\n", num, i, result);
    }

    return 0;
}
*/

/* �� ����
int size;
int i = 0;


int partition(int num1[], int begin, int end)
{
    int pivot;
    int L = begin;
    int R = end;
    int t;
    int temp;


    pivot = (begin + end) / 2;//�Ǻ�����


    printf("\n [ %d�ܰ� : pivot=%d ]", ++i, num1[pivot]);
    while (L < R) {
        while ((num1[L] < num1[pivot]) && (L < R))
        {
            L++;
        }
        while ((num1[R] >= num1[pivot]) && (L < R))
        {
            R--;
        }

        if (L < R)//L�ڸ����� R�ڸ��� ũ��
        {
            temp = 
        }
    }
    

    

}




void quicksort(int num1[], int begin, int end)
{

}



int main(void)
{
    int num1[8] = { 69,10,30,2,16,8,31,22 };
   
    size = 8;
    printf("0�ܰ�\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", num1[i]);

    }
    printf("\n");

    quicksort(num1, 0, size - 1);



}

*/

/* ��������
int main(void)
{
    int num[8] = { 69,19,30,2,16,8,31,22 };
    int size = 8;
    int index = 0;
    int temp;
    int min=0;

    for (int i = 0; i < size - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < size; j++)
        {
            if (num[j] < num[min]) {
                min = j;
            }
            
        }
        temp = num[i];
        num[i] = num[min];
        num[min] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%3d", num[i]);
    }

  
}
*/

/*
int main(void)
{
    int grade[10] = { 0, };
    int n;
    int max;
    int temp;
    int rank = 1;

    printf("����� : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("���� : ");
        scanf("%d",&grade[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (grade[max] < grade[j])
            {
                temp = grade[max];
                grade[max] = grade[j];
                grade[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
       

       
    }


    
}
*/
/*
int main(void)
{
    char lan[30] = { 0, };

    int A=0;
    int a=0;
    int num = 0;
    int st = 0;

        printf("���ڿ� : ");
        scanf("%s",lan);

        for (int i = 0; i < 30; i++)
        {
            if ((lan[i] >= 65) && (lan[i] <= 90))
            {
                A++;
            }

            if ((lan[i] >= 97) && (lan[i] <= 122))
            {
                a++;
            }
            if ((lan[i] >= 48) && (lan[i] <= 57))
            {
                num++;
            }
            if ((lan[i] >= 33) && (lan[i] <= 47))
            {
                st++;
            }
       }

        printf("�빮�� : %d", A);
        printf("�ҹ��� : %d", a);
        printf("���� : %d", num);
        printf("Ư������ : %d", st);

        return 0;
}
*/

/*
void main()
{
    int i, n = 0, * ptr;
    int sale[2][4] = { {63, 84, 140, 130},
                       {157,209,251,312} };

    ptr = &sale[0][0];
    for (i = 0; i < 8; i++)
    {
        printf("\n adress : %u sale[%d] = %d", ptr, i, *ptr);
        ptr++;
    }

    getchar();
}
*/

/* �迭�� �̿��� ����
#define stacksize 50

typedef int element;
int top = -1;
int i;
element stack[stacksize];



int push(int num)
{
    if (stack[top] == stacksize - 1)
    {
        printf("��ȭ�����Դϴ�");
        return 1;
    }
    stack[++top] = num;
    

    return stack[top];
}


int pop(int num)
{

    if (stack[top] == -1)
    {
        printf("����ֽ��ϴ�.");
        exit(1);
    }
    stack[--top];

    return stack[top];
}

void peek() 
{
    printf("%d", stack[top]);
}



void printStack()
{
    printf("[ stack : ");
    for (i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("]\n");
}


int main(void)
{
    element num;

    printf("*****�ʱ�������*****\n");
    printStack();

    push(1);  
    printStack();

    push(2);
    printStack();

    push(3);
    printStack();

   
   
    peek();

    pop(3);
    printStack();

    pop(2);
    printStack();

    pop(1);
    printStack();

  
}
*/
/*���Ḯ��Ʈ stack
typedef int element;

typedef struct stackNode
{
    element data;
    struct stackNode* link;
} stackNode;

stackNode* top;

int isEmpty()
{
    if (top == NULL) {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(element num)
{
    stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
    temp->data = num;
    temp->link = top;
    top = temp;
    
}

element pop()
{
    if (top == NULL)
    {
        printf("�������");
    }
    stackNode* temp = top;
    element item;

    item = temp->data;
    top = temp->link;

    return item;
}

int Empty()
{
    if(top == NULL)
        {
            return 1;
        }
    else
    {
        return 0;
    }
}


element peek() 
{
    if (top == NULL) {
        printf("����");
        return 0;
    }
    else
    {
        return (top->data);
    }

}


void printStack()
{
    stackNode* p = top;
    printf("\n STACK [ ");
    while (p) {
        printf("%d ", p->data);
        p = p->link;
    }
    printf("] ");
}

void main(void)
{
    element item;
    top = NULL;

    printf("\n���� ���� ����\n");
    printStack();
    
    push(1);
    printStack();

    push(2);
    printStack();

    push(3);
    printStack();

    item = peek(); printStack();
    printf("peek => %d", item);

    item = pop(); printStack();
    printf("pop => %d", item);

    item = pop(); printStack();
    printf("pop => %d", item);

    item = pop(); printStack();
    printf("pop => %d", item);

    item = pop(); printStack();
    printf("pop => %d", item);

    getchar();
}

*/


/* �迭�� �̿��� ���� ť
#define MAX 50

int front = -1;
int rear = -1;
int queue[MAX];

int Empty(void)
{
    if (front == rear)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int Full(void)
{
    int tmp = (rear + 1) % MAX;
    if (front == tmp)
    {
       
        return 1;
    }
    else
    {
        return 0;
    }
   
}

void enQueue(int value){


    if(Full())
    {
        printf("FUll");
    }
    else
    {
        rear = (rear + 1) % MAX;
        queue[rear] = value;
    }

    
}

int deQueue()
{
    if (Empty())
    {
        printf("����");
    }
    else
    {

        front = (front + 1) % MAX;
        return queue[front];
    }

   
   
}


int main()
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    printf("%d\n", deQueue());
    printf("%d\n", deQueue());
    printf("%d\n", deQueue());
    deQueue();

    return 0;
}
*/
/*
typedef int element;

typedef struct Qnode {
    int data;
    struct Qnode* link;
} Qnode;

typedef struct Queue
{
    Qnode* front;
    Qnode* rear;
} Queue;

Qnode* newNode(int k)
{
    Qnode* temp = (Qnode*)malloc(sizeof(struct Qnode));
    temp->data = k;
    temp->link = NULL;

    return temp;

}

Queue* createQueue()
{
    Queue* q = (Queue*)malloc(sizeof(struct Queue))
    {

    }
}

*/
/*
typedef int element;
#define STACKSIZE 20

typedef struct Queue
{
    int data;
    struct Queue* link;
    
} Queue;


Queue* top;


int isEmpty()
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Full()
{
    if (top >= STACKSIZE)
    {
        printf("stack full");
        return 1;
    }
    else
    {
        return 0;
    }
}


void push(element item)
{
   
        Queue* p = (Queue*)malloc(sizeof(struct Queue));
        p->data = item;
        p->link = top;
        top = p;
   
}


element pop() 
{
    element item;
    Queue* p = top;

    if (isEmpty())
    {
        printf("����");
    }
    else
    {
        item = p->data;
        top = p->link;
        return item;

        free(p);
    }

}


void peek()
{
    if (top == NULL)
    {
        printf("�������!");
    }
    else
    {
        Queue* pe = top;

        printf("peek => %d\n", pe->data);
    }
}

void printStack()
{
    Queue* tmp = top;
    printf("STACK [ ");
    while (tmp)
    {
        printf("%d ",tmp->data);
        tmp = tmp->link;
    }
    printf(" ] ");
}




int main(void)
{
    element item;
    top = NULL;
    printf("\n** ���� ���� ���� **\n");
    printStack();
    printf("\n");

    push(1);  
  
    push(2);   
 
    push(3);  
    
    push(4);   peek();  
    

    item = pop();      
    printf("%d\n", item);

    item = pop();   
    printf("%d\n", item);

    item = pop();    
    printf("%d\n", item);
    item = pop();  
    printf("%d\n", item);
}
*/


/* ������ȸƮ��
typedef struct treeNode {
    char data;
    struct treeNode* Left;
    struct treeNode* Right;
} treeNode;

treeNode* maketreeNode(char data, treeNode* Leftnode, treeNode* Rightnode)
{
    treeNode* root = (treeNode*)malloc(sizeof(struct treeNode));

    root->data = data;
    root->Left = Leftnode;
    root->Right = Rightnode;

    return root;
}

void preorder(treeNode* root)
{
    if (root) {
        printf("%c", root->data);
        printf("-");

        preorder(root->Left);
        preorder(root->Right);
    }
}


int main(void)
{
    treeNode* n4 = maketreeNode('H', NULL, NULL);
    treeNode* n6 = maketreeNode('I', NULL, NULL);
    treeNode* n7 = maketreeNode('J', NULL, NULL);
    treeNode* n11 = maketreeNode('k', NULL, NULL);
    treeNode* n9 = maketreeNode('F', NULL, NULL);
    treeNode* n3 = maketreeNode('D', n4, NULL);
    treeNode* n5 = maketreeNode('E', n6, n7);
    treeNode* n2 = maketreeNode('B', n3, n5);
    treeNode* n10 = maketreeNode('G', NULL, n11);
    treeNode* n8 = maketreeNode('C', n9, n10);
    treeNode* n1 = maketreeNode('A', n2, n8);

    printf("���� ��ȸ ��� : ");
    preorder(n1);
   

    getchar();
}
*/


/* ���� �켱 Ž�� (�̿�)
#define MAX_VERTEX 10
#define FALSE 0
#define TRUE 1

typedef struct graphNode //��� ���� ����,�������� �� ���
{
    int vertex;
    struct graphNode* link;
} graphnode;

typedef struct graphType //����
{
    int n;//�׷��� ��������
    graphnode* adjList_H[MAX_VERTEX];//�׷����� ������ ����,�� ������ ���� ��������͸� �׷����� ����
    int visited[MAX_VERTEX];//�湮�ϸ� true
} graphtype;

typedef int element;


//���ø���� (�湮 �� ���ư�������)
typedef struct stackNode {
    int data;
    struct stackNode* link;
} stacknode;

stacknode* top;

int empty() 
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

void push(element item)
{
    stacknode* p = (stacknode*)malloc(sizeof(struct stackNode));
    p->data = item;
    p->link = top;
    top = p;
}

int pop()
{
    int item;
    stacknode* p = top;
    if (empty())
    {
        printf("������ �������!");
        return 0;
    }
    else {
        item = p->data;
        top = p->link;
        free(p);
        return item;//���� �������� Ȯ���ϱ����ؼ�
    }
}

//�ʱ� ���� �׷��� ���� -> ��� false�� �����,�����迭 NULL�� �����
//ó���� ��°� -> ��� ��� �迭(ex)A
void createGraph(graphtype* g)
{
    int v;
    g->n = 0;
    for (v = 0; v < MAX_VERTEX; v++)
    {
        g->visited[v] = FALSE;
        g->adjList_H[v] = NULL;//��������Ʈ�� ���� �����迭
    }
}

//�׷��� ���������� ���� ���,�����ʰ�Ȯ���ϰ� n�����ֱ⸸ �ϸ�ȴ�. int v
void insertVertex(graphtype* g, int v)
{
    if (((g->n) + 1) > MAX_VERTEX)
    {
        printf("������ ���� �ʰ�");
        return;
    }
    else
    {
        g->n++;
    }
}


//���� ������� ���� �����Ѵ�.int u, int v
void insertEdge(graphtype* g, int u, int v)
{
    graphnode* node;
    if (u >= (g->n) || v >= (g->n))
    {
        printf("�׷����� ���� ����");
        return;
    }

    graphnode* node = (graphnode*)malloc(sizeof(struct graphNode));
    node->vertex = v;
    node->link = g->adjList_H[u];//���԰����� ���� ��带 ����Ʈ�� ù��° ���� ����
    g->adjList_H[u] = node;

}

//�׷���g�� �� ������ ���� ���� ����Ʈ�� ���
void print_adjList(graphtype* g)
{
    int i;
    graphnode* p;
    for (i = 0; i < g->n; i++)
    {
        printf("\n\t����%c�� ��������Ʈ", i + 65);
        p = g->adjList_H[i];
        while (p)
        {
            printf("-> %c", p->vertex + 65);
            p = p->link;
        }
    }

}
*/