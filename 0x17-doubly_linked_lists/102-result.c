#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void reverse(char str[], int length)
{
    char temp;
    int start = 0;
    int end = length -1;
    while (start < end)
    {
        temp = *(str+start);
        *(str+start) = *(str+end);
        *(str+end) = temp;
        start++;
        end--;
    }
}
 
// Implementation of itoa()
char *itoa(int num, char *str, int base)
{
    int i = 0;
    int isNegative = 0;
 
    /* Handle 0 explicitly, otherwise empty string is printed for 0 */
    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }
 
    // In standard itoa(), negative numbers are handled only with
    // base 10. Otherwise numbers are considered unsigned.
    if (num < 0 && base == 10)
    {
        isNegative = 1;
        num = -num;
    }
 
    // Process individual digits
    while (num != 0)
    {
        int rem = num % base;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        num = num/base;
    }
 
    // If number is negative, append '-'
    if (isNegative == 1)
        str[i++] = '-';
 
    str[i] = '\0'; // Append string terminator
 
    // Reverse the string
    reverse(str, i);
 
    return str;
}

int is_palindrome(int temp)
{
    int i, j;
    char new[100];
    itoa(temp, new, 10);
    
    i = 0;
    j = strlen(new) - 1;
        
    while (i < j)
    {
        if (new[i] != new[j])
        {
            return (0);
        }
        i++;
        j--;
    }
    
    return (1);
}

int main(void)
{
	int i, j, temp, maximo = 0;

	for  (i = 100; i <= 999; i++)
	{
		for (j = 100; j <= 999; j++)
		{
			temp = i * j;
			if (is_palindrome(temp) == 1)
			{
				if (temp > maximo)
					maximo = temp;
			}
		}
	}
	printf("%d\n", maximo);
	return 0;
}
