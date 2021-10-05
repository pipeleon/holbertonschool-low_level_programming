#include <stdio.h>
/* Task 102 0x01 Variables, if, else, while  */

/**
 * main - Print numbers
 * Description: Print numbers
 * Return: 0
 */

int main(void)
{
	int a, b, c, d, e, f, g, h, cont, i;

	e = 0;
	f = 0;
	g = 0;
	cont = 0;
	i = 0;

	for (a = 48; a <= 57; a++){
		if (a == 57)
			g = 1;
		h = 1;
		if (a != 48){
			i++;
			f = 0;}
		for (b = 48; b <= 57 - g; b++){
			if (b == 57){
				f++;
				e = 0;
				cont = 0;}
			else{
				if (b != 48){
					cont++;
					e = cont;
					h = 1;}
			}
			for (c = 48 + f + i; c <= 57; c++){
				for (d = 48 + e + h; d <= 57; d++){
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (a != 57 || b != 56 || c != 57 || d != 57){
						putchar(44);
						putchar(32);}
				}
				h = 0;
				e = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
