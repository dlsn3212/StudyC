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
	printf("%.1lf-%.1lf = %.1f\n", 3.4, 1.2, 3.4 - 1.2);
    
	//printf("%d-%d", 3.4, 1.2);
	//오류
	return 0;
}