#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

void add(uint32_t num1, uint32_t num2)
{
	uint32_t result;

	num1 = ntohl(num1);
	num2 = ntohl(num2);

	result = num1 + num2;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",num1,num1,num2,num2,result,result);
}

int main(int argc, char *argv[])
{
	
	if(argc !=3)
	{
		printf("Please input : add-nbo a.bin b.bin");
		return 0;
	}

	uint32_t num1, num2 ;
	FILE *file1, *file2 ;

	file1 = fopen(argv[1],"rb");
	file2 = fopen(argv[2],"rb");
	

	int n1 = fread(&num1,32,1,file1);
	int n2 = fread(&num2,32,1,file2);

	add(num1,num2);
	fclose(file1);
	fclose(file2);

	return 0;

}
