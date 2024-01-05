#include<stdio.h>
#include<string.h>

int main() {
	char article[] = "Oscar Pistorius released on parole 11 years after killing Reeva Steenkamp";

	printf("%d", strlen(article));

	char str1[20] = "Hello World!";
	char str2[20];

	//str1을 str2에 복사
	strcpy_s(str2, str1);
	printf("%s", str2);

	return 0;

}