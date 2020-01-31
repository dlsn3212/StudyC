#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>


int main() {
	/*char fruit[20] = "strawberry";
	
	printf("딸기 : %s\n", fruit);
	printf("딸기쨈 : %s %s\n", fruit, "jam");
	//strcpy(fruit, "water melons");
	printf("이번 과일 : %s\n", fruit);
	*/
	char grade;
	char name[20];

	printf("학점과 이름을 입력하세여 : ");
	scanf("%c %s", &grade, name);
	printf("%s의 학점은 %c입니다.\n", name, grade);
	//printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);
	
	
	return 0;
}