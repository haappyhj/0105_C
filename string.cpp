#include<stdio.h>

int main() {

	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[] = { 1,2,3,4,5,6,7,8,9,10 };



    
        char coffee[] = { 'a', 'm', 'e', 'r', 'i', 'c', 'a', 'n', 'o', '\0' };

        for (int i = 0; i < sizeof(coffee) / sizeof(char); i++) {
            if (i % 2 != 0) {
                if (i == sizeof(coffee) / sizeof(char) - 1) {
                    coffee[i] = '\0';
                }
                else {
                    coffee[i] = 'k';
                }
            }
        }

        printf("%s\n", coffee);

    

        return 0;
    }



		
