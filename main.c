#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int E,CS,IS,Math1,physiscs,Electronics;
 
printf("	CS : ");
scanf("%d",&CS);

printf("	IS : ");
scanf("%d",&IS);

printf("	E : ");	
scanf("%d",&E);

printf("	Math1 : ");
scanf("%d",&Math1);

printf("	physiscs: ");
scanf("%d",&physiscs);

printf("	Electronics : ");
scanf("%d",&Electronics);

int grades = E+CS+IS+Math1+physiscs+Electronics;
 printf(" \n	Your total grades ='%d'  from 600 \n",grades);
 
 if(grades > 300)
	{printf("	Pass   ^_^  \n\n  	Nice.");
	}
else 
{
	printf("\n 			fail  :( \n\n 		Bad");
	}
	return 0;
}
