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

// 메인함수
int main(void)
{
    /*int kor = 70;
    int eng = 80;
    int mat = 90;
    int tot;

    tot = kor + eng + mat;
    printf("국어:%d, 영어 %d,수학 %d", kor, eng, mat);
    printf("총점 : %d", tot);
    //short sh;
    //scanf("%d", &sh);
    */

    int i;
    int j;
    int k;

    for (i = 0; i < 3; i++) 
    {
        for (k = 3 - i; k > 0; k--) {
            printf(" ");
       }
        for (j = 0; j <= i + i; j++) {
            printf("*");
        }
        printf("\n");
                
          
        
        
    }
   
    return 0;
    
}