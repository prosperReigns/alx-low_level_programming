#include "main.h"

/**
 *_strncpy - copy a string
 *@dest: dest for copy
 *@src: source copied from
 *@n: no of characters to be copied
 *
 *Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
		int a = 0;

			while (a < n && src[a] != '\0')
					{
								dest[a] = src[a];
										a++;
											}
				while (a < n)
						{
									dest[a] = '\0';
											a++;
												}
					return (dest);
}
