#include <stdio.h>
main()
{
	FILE *f1;
	char c;
	printf("Data input \n \n");
	f1=fopen("INPUT","w");
	while((c=getchar())!=EOF)
	  putc(c,f1);
	fclose(f1);
	printf("\n Data output \n");
	fopen("INPUT","r");
	while((c=getc(f1))!=EOF)
       printf("%c",c);
       fclose(f1);
       
	
}
