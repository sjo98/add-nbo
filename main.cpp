#include<stdio.h>
#include<stdint.h>
#include<arpa/inet.h>

int main(int argc, char*argv[]){
	
	FILE *fp1, *fp2;
	uint32_t num1, num2;
	
	if(argc!=3){
		printf("Usage: make all A=[filename1] B=[filename2]\n");
		return 0;
	}
	
	fp1=fopen(argv[1],"rt");
	fp2=fopen(argv[2],"rt");

	fscanf(fp1,"%x",&num1);
	num1 = ntohl(num1);

	fscanf(fp2,"%x",&num2);
	num2 = ntohl(num2);
	
	fclose(fp1);
	fclose(fp2);
	if(num1+num2>=num1)
		printf("result : 0x%x\n",num1+num2);
	else
		printf("result : 0x1%x\n",num1+num2);
}
