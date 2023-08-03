#include "main.h"
#include <string.h>

/**
 *binary_to_unit - converts binary to decimal
 *@b: number in binary to be converted
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, len, decvalue = 1;
	int indx;

	if (b)
	{
		len = strlen(b);
		indx = len - 1;

		while (indx >= 0)
		{
			if (b[indx] != '0' &&
			    b[indx] != '1')
			{
				total = 0;
				break;
			}
			if (b[indx] == '1')
				total = total + decvalue;
			decvalue = decvalue * 2;
			indx--;
		}
	}
	return (total);
}
