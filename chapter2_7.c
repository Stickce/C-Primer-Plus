/*chapter2_7.c*/
#include <stdio.h>
void Smile();
int main()
{	
	Smile(); Smile(); Smile();
	printf("\n");
	Smile(); Smile();
	printf("\n");
	Smile();
	printf("\n");
	return 0;
}
void Smile()
{
	printf("Smile!");
}