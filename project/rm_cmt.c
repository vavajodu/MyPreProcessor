#include"header.h"
FILE *rm_cmt(FILE *fa,char *name)	
{
	FILE *fb,*fc;
	char ch1,ch2,ch3,ch4,flag='n';
	char *p;
	p=file_name(name);
	fb=fopen(p,"w");
	if(fb<0)
	{
		perror("fopen");
		return;	
	}
	ch1=fgetc(fa);
	ch2=fgetc(fa);
	while(ch2!=EOF)
	{
		if(ch1=='/'&& ch2=='*')
			flag='y';
		if(flag=='n')
			fputc(ch1,fb);
		if(ch1=='*' && ch2=='/')
		{
			flag='n';
			ch2=fgetc(fa);
		}
		ch1=ch2;
		ch2=fgetc(fa);
	}
	fclose(fb);
return fb;
}
char *file_name(char *p)
{


	char *a;
	int i;
	a=malloc(250*sizeof(char));
	for(i=0;p[i];i++)
			a[i]=p[i];
	i--;
	a[i]='i';
	printf("%s\n",a);
	return a;
}
