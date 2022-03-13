#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main - entry point function
 *
 * Description: prints only last digit of num
 * stored in n
 *
 * Return: always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, q;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	q = n % 10;
