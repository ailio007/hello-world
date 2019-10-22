#include "alsoprint.h"
void alsoprint(void)
{
	FILE *fd = NULL;
	printf("this is the second layer to print\n");
	//if((fd = popen("./newfile.sh","r")) == NULL){
	if((fd = popen("touch 111","r")) == NULL){
		printf("popen fails\n");
	}
	system("./newfile.sh");
	printf("---\n");
}
