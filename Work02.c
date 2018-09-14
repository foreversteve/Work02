#include <stdio.h>
#include <stdlib.h>

int main(){
	//Wouldn't it be much better to use 
	unsigned int i = 0xEEEEEEEE;
	char *c = &i;

	printf("%x\n",i);

	for (int i = 0; i < 4; i++){
		printf("%hhx\n",*c);
		c+=1;
	}
	//Incrementing by 1

	c = &i;
	for (int i = 0; i < 4; i++){
		*c += 1;
		c+=1;
	}
	printf("%x\n", i);
	printf("%u\n", i);

	//Incrementing by 16

	c = &i;
	for (int i = 0; i < 4; i++){
		*c += 0x10;
		c+=1;
	}
	printf("%x\n", i);
	printf("%u\n", i);
	
	return 0;

}