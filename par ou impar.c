#include <stdio.h>

int main ()
{
 	do{
 	int num;
 	printf("entre com um numero:\n");
 	scanf("%d", &num);
 	if(num%2==0)
 	printf("o numero eh par\n");
 	else
 	printf("o numero eh impar\n");}
 	while(num!=0);
    system("pause");
    return 0;
}
