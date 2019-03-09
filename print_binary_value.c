/* Made by Guy-Kaplan */
/* March 9th 2019 */


#include<stdio.h>



# define TWO 2



int count_odd_bits(unsigned long num);

void printNumInBinary(unsigned int num);



int main()

{


   unsigned int userNum;

   printf("\n Enter a positive integer number:\n");

   scanf("%u",&userNum);

   printf("\n Your number in binary: ");

   printNumInBinary(userNum);

   printf("\n\n");

   printf("\n The number of odd bits in your number: %d \n\n",count_odd_bits(userNum));

   return 0;

}



/* This function gets an unsigned long number and returns the number of turned on

bits in the odd locations in the given number's binary form */

int count_odd_bits(unsigned long num)
{

	int numOfOddBits = 0;

	num >>= 1;

 	while(num != 0)

	{

		if((num & 1) == 1)

			numOfOddBits++;

		num >>= TWO;
 /* go to the next odd bit */
	}

	return numOfOddBits;

}



/* =============================================== */
/* The following function is an ORIGINAL code, idea and invention of mine */
/* If you use it - PLEASE CREDIT ME: Guy-Kaplan */
/* This function gets an unsigned int number and prints its binary value*/

/* =============================================== */
void printNumInBinary(unsigned int num)

{

	if(num == 0)

		return;

	printNumInBinary(num/TWO);

	printf("%d",num%TWO);

}





















