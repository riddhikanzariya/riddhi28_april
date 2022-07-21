#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
	char ch;
	
	fp = fopen("amd.txt","r");
	
	if(fp == NULL)
	{
		printf("cannot open a file");
		exit(1);
	}
	
    //	while((ch=fgetchar())!='\n')   // for write
	//     fputc(ch,fp);
	//   fclose(fp);
	     
    while((ch=fgetc(fp))!=EOF)   // for read
          printf("%c",ch);
        fclose(fp);
}