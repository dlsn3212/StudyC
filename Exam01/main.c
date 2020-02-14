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

typedef struct data {
    int cardnumber;
    char name[30];
    char phonenumber[30];
    char email[50];
} DATA;


//���� ��ȣ ����
static int cardnumber = 1;

//�Լ� ���
DATA* input_business_card();//�Է� �Լ�
void show_all_cards(DATA* show);//��� �Լ�



// ���� �Լ�
int main(void) 
{
    int index = 0;
    int card_number;
    DATA data[50];
    memset(&data, 0, sizeof(DATA));//free
    
    DATA* input_data = NULL;
   
    DATA* cardnumber;
   
   // int cardnumber = 1;
    
    int menunumber;//�޴� ����

    while (1) 
    {
    printf("�޴��� �������ּ���!(1�� �Է�, 2�� ����, 3�� ����, 4�� ��ü ���, 5�� �˻�, 6�� ����) : ");
    scanf("%d", &menunumber);

    
        switch (menunumber)
        {
        case(1)://�Է��Լ��ҷ�����
            
            for (int i = 0; i < 50; i++) 
            {
                input_data = input_business_card();
                data[i].cardnumber = input_data->cardnumber;
                strcpy(data[i].name, input_data->name);
                strcpy(data[i].phonenumber, input_data->phonenumber);
                strcpy(data[i].email ,input_data->email);
                break;
            }
                break;
        case(2)://�����Լ��ҷ�����
            break;
        case(3)://�����Լ��ҷ�����
            break;
        case(4)://��ü����Լ��ҷ�����
            show_all_cards(&data);
            break;
        case(5)://�˻��Լ��ҷ�����
            printf("�˻��Ͻ� ���� ��ȣ�� �Է��ϼ��� : ");
            scanf("%d",&card_number);
           
                search_business_card(card_number);//���Թ�ȣ �˻��Լ�
  

            break;
        case(6)://�����Լ��ҷ�����
            break;
        }
    }
    
}

//


//���� ���� �Է� �Լ�
DATA* input_business_card()
{ 
    DATA* business_data;
    business_data = (DATA*)malloc(sizeof(business_data));
    printf("�ѱ��̸�,����ȣ,�̸����� �Է��ϼ���! : ");
    scanf("%s%s%s", business_data->name, business_data->phonenumber, business_data->email);
    business_data->cardnumber = cardnumber++;

    return business_data;

}



//���� ������ ����ϴ� �Լ�
void show_all_cards(DATA* show)//show�� DATA�� �޾ƿ;���
{
    DATA* show_card;
    while (1)
    {
        for (show = 0; show < 50; show++) {
            printf("���Թ�ȣ : %d\n", show->cardnumber);
            printf("�ѱ��̸� : %s\n", show->name);
            printf("����ȣ   : %s\n", show->phonenumber);
            printf("�̸���   : %s\n", show->email);
            break;
        }
    }
    printf("\n\n");
}



//���Թ�ȣ �Է¹޾� �˻���� ��� �� �ٽ� �޴��� ���
search_business_card(int num)//�Ű������� �Է��� cardnumber����
{
    DATA* business_number;
    business_number->cardnumber;
    if (num != NULL)
    {
        printf(" ��ü ���� ���� ");
        printf("���Թ�ȣ : %d", business_number->cardnumber);
        printf("�ѱ��̸� : %s", business_number->name);
        printf("����ȣ   : %s", business_number->phonenumber);
        printf("�̸���   : %s", business_number->email);
    }
}


