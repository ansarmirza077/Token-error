#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{

	printf("PID = %d\n",getpid());
	char *args[]={"Hello","world","TS",NULL};
	execv("./ex2",args);
	printf("Back to ex1.c");
	return 0;
}

