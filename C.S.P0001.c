#include <stdio.h>
#include <string.h>
#include <conio.h>
 
int main() {
	char s[30], esc;
	int i, P;
	do{
		printf("Please enter string: ");
		gets(s);
        printf("The old string: %s\n",s);
        printf("The reversed string: ");
		P=strlen(s);
		for(i=P-1;i>=0;i--) {
			if(s[i]==' '){
				s[i]='\0';
				printf("%s ", &s[i]+1);
			}
		}
		printf("%s ", s);
		printf("\nPress enter to continue another reverse, ESC to exit :>!");
		esc=getch();
	} while(esc!=27);
	return 0;
}

