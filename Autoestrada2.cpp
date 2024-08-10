#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n = 0,C,i;
	char K[100];
	scanf ("%d\n",&C);
	scanf ("%s",K);		
		for (i=0;i<C;i++){
			if (K[i] == 'P'){
				n = n + 2;	
            	}
			else if (K[i] == 'C'){
				n = n + 2;
            	}
			else if (K[i] == 'A'){
				n = n + 1;
	            }
				else if (K[i] == 'D'){
				n = n + 0;
            	}
        }
	printf("%d",n);
	return 0;}
