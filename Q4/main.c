/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  �ڱ����� ����ü (��Ī NODE) �� ���ؼ� ���� ����Ʈ�� �����, 
  �����ʹ� �Ǽ��� ���� �� �ֵ��� �Ѵ�. 
  ���⼭ insertNode() �Լ��� ���ϸ������� �� NODE �� �߰�,
  deleteNode(int index)�� ���ϴ� ��ġ�� ���� �����ϰ� �Ѵ�.
�� �۾� �� ����� ������ŭ �����͸� ����ϴ� �Լ� printNode()�� �����Ѵ�

  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

NODE* insertNode(struct NODE* next);

typedef struct NODE
{
    
    float num;
    struct NODE* next;
}NODE;


// �����Լ�
int main(void) 
{
    struct NODE a = { 10, 0 }, b = { 30,0 }, c = { 50,0 };
    struct NODE* head = &a, * current;

    a.next = &b;
    b.next = &c;

    current = head;

    head=insertNode(&c);

    while (current != NULL)
    {
        printf("%.1f  ", current->num);
        current = current->next;
    }//���⼭ ������ŭ ������ ����Լ� printNode()����

	
}
//insertNode()�� ���� ������ ����� �߰�
    //deleteNode�� ���ϴ� ��ġ�� ����
    //����� ������ŭ �����͸� ����ϴ� �Լ� printNode()

NODE *insertNode(NODE *next)
{
    struct NODE d = { 60,0 };
    struct NODE* head = &d;
    next->next = head;
    
    
    
   
}