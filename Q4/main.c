/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  자기참조 구조체 (명칭 NODE) 를 통해서 연결 리스트를 만들고, 
  데이터는 실수를 담을 수 있도록 한다. 
  여기서 insertNode() 함수로 제일마지막에 새 NODE 를 추가,
  deleteNode(int index)로 원하는 위치의 값을 삭제하게 한다.
각 작업 후 노드의 갯수만큼 데이터를 출력하는 함수 printNode()를 구현한다

  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

void insertNode(struct NODE* next);

struct NODE
{
    
    float num;
    struct NODE* next;
};


// 메인함수
int main(void) 
{
    struct NODE a = { 10, 0 }, b = { 30,0 }, c = { 50,0 };
    struct NODE* head = &a, * current;

    a.next = &b;
    b.next = &c;

    current = head;

    insertNode(&c);

    while (current != NULL)
    {
        printf("%.1f  ", current->num);
        current = current->next;
    }//여기서 갯수만큼 데이터 출력함수 printNode()구현

	
}
//insertNode()로 제일 마지막 새노드 추가
    //deleteNode로 원하는 위치값 삭제
    //노드의 갯수만큼 데이터를 출력하는 함수 printNode()

void insertNode(struct NODE *next)
{
    struct NODE d = { 60,0 };
    struct NODE* head = &d;
    next->next = head;
    
    
    
   
}