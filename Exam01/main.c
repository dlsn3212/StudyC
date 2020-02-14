/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
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


//명함 번호 증가
static int cardnumber = 1;

//함수 목록
DATA* input_business_card();//입력 함수
void show_all_cards(DATA* show);//출력 함수



// 메인 함수
int main(void) 
{
    int index = 0;
    int card_number;
    DATA data[50];
    memset(&data, 0, sizeof(DATA));//free
    
    DATA* input_data = NULL;
   
    DATA* cardnumber;
   
   // int cardnumber = 1;
    
    int menunumber;//메뉴 선택

    while (1) 
    {
    printf("메뉴를 선택해주세요!(1번 입력, 2번 수정, 3번 삭제, 4번 전체 출력, 5번 검색, 6번 종료) : ");
    scanf("%d", &menunumber);

    
        switch (menunumber)
        {
        case(1)://입력함수불러오기
            
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
        case(2)://수정함수불러오기
            break;
        case(3)://삭제함수불러오기
            break;
        case(4)://전체출력함수불러오기
            show_all_cards(&data);
            break;
        case(5)://검색함수불러오기
            printf("검색하실 명함 번호를 입력하세요 : ");
            scanf("%d",&card_number);
           
                search_business_card(card_number);//명함번호 검색함수
  

            break;
        case(6)://종료함수불러오기
            break;
        }
    }
    
}

//


//명함 정보 입력 함수
DATA* input_business_card()
{ 
    DATA* business_data;
    business_data = (DATA*)malloc(sizeof(business_data));
    printf("한글이름,폰번호,이메일을 입력하세요! : ");
    scanf("%s%s%s", business_data->name, business_data->phonenumber, business_data->email);
    business_data->cardnumber = cardnumber++;

    return business_data;

}



//명함 정보를 출력하는 함수
void show_all_cards(DATA* show)//show는 DATA를 받아와야함
{
    DATA* show_card;
    while (1)
    {
        for (show = 0; show < 50; show++) {
            printf("명함번호 : %d\n", show->cardnumber);
            printf("한글이름 : %s\n", show->name);
            printf("폰번호   : %s\n", show->phonenumber);
            printf("이메일   : %s\n", show->email);
            break;
        }
    }
    printf("\n\n");
}



//명함번호 입력받아 검색결과 출력 후 다시 메뉴를 출력
search_business_card(int num)//매개변수로 입력한 cardnumber받음
{
    DATA* business_number;
    business_number->cardnumber;
    if (num != NULL)
    {
        printf(" 전체 명함 정보 ");
        printf("명함번호 : %d", business_number->cardnumber);
        printf("한글이름 : %s", business_number->name);
        printf("폰번호   : %s", business_number->phonenumber);
        printf("이메일   : %s", business_number->email);
    }
}


