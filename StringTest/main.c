#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>


int main() {
	/*char fruit[20] = "strawberry";
	
	printf("���� : %s\n", fruit);
	printf("����´ : %s %s\n", fruit, "jam");
	//strcpy(fruit, "water melons");
	printf("�̹� ���� : %s\n", fruit);
	*/
	char grade;
	char name[20];

	printf("������ �̸��� �Է��ϼ��� : ");
	scanf("%c %s", &grade, name);
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);
	//printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height);
	
	
	return 0;
}