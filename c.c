#include <stdio.h>


int main(void)
{
 		int array[4][2] = { { 1, 12}, 
							{ 2, 22}, 
							{ 3, 22}, 
							{ 4, 42} 
						};
 		printf("array[0]\t=%d",  array[0]);
 		printf("array[0]+1\t=%d\n",  (array[0]+1));
 	
 		printf("array\t=%d",  array);
		printf("       array+1\t=%d\n",  (array + 1));
	
		printf("&array\t=%d",  array);
 	printf("&arr+1\t=%d\n",   (array + 1));
 	return 0;
 }


#if 0
void printWelcom(int len)
{
	printf(" printWelcom()...%d\n", len);
}
void printGoogbye(int len)
{
	printf("printGoogbye()...%d\n", len);
}


void printWelcome(int len)
{
	printf("欢迎欢迎 -- %d\n", len);
}

void printGoodbye(int len)
{
	printf("再见再见 -- %d\n", len);
}
//void (*print)(int) = printGoodbye
void callback(int times, void(*print)(int))
{
	int i=1;
	
		print(i);
	
	printf("\n我不知道你是迎客还是再见!\n\n");
}


	
int age(int n)
{
   int i;
   if (n == 1)
      i = 10;
   else
      i = age(n - 1) + 2;
   return i;
}

#endif


