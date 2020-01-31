#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>


int main() {
	printf("%d\n",10);
	printf("%1f\n",3.4);
	printf("%.1lf\n",3.45);
	printf("%.10lf\n",3.4);
	printf("%d과 %d의 합은 %d입니다.\n",10,20,10+20);
	printf("%.1lf-%.1lf = %.1f\n\n\n\n", 3.4, 1.2, 3.4 - 1.2);
    
	//printf("%d-%d", 3.4, 1.2);
	//오류

	printf("%.1lf\n", 1e6);
	printf("%.7lf\n",3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n\n\n\n", 0.0000314);

	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c은 %s입니다.\n", '1', "first");
	return 0;
}