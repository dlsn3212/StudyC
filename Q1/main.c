/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  1���� 300������ ����(����) �߿��� 3�� �����(3,6,9,12,..)���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (for�� ���)

  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer -yujin
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int tot=0;
    int num=300;

    for (int i = 1; i < num+1; i++)
    {
        if (i % 3 == 0)
        {
            tot += i;
            
           
        }
        
        
    }
    printf("3�� ������� ������ %d�Դϴ�", tot);
    return 0;
}