#include"header.h"
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage:my_preprocessor fname\n");
		return;
	}
	FILE *fp,*fq;
	fp=fopen(argv[1],"r");
	fq=rm_cmt(fp,argv[1]);		//Function to remove comments
	printf("Done\n");
}		
	
