#include "main.h"
/* Task 6 0x02. C - Functions, nested loops  */

/**
 * _abs - Calculates teh absoluto value of an number
 * @a: Any given number
 * Description: absolute number
 * Return: int
 */
int _abs(int a)
{
	int b;

	if (a <= 0)
	{
		b = (a * -1);
		return (b);
	}
	else
		return (a);
}
