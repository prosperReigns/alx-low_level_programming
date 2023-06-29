# 0x06-pointers_arrays_strings

## ./0-strcat

a program the concatenates two strings using c strcat function defined in string.h;

Strcat appends one string to another by overwriting the terminating null byte '\0'.

int main(void)
{
  char buffer1[SIZE] = "computer";
  char * ptr;

  ptr = strcat( buffer1, " program" );
  printf( "buffer1 = %s\n", buffer1 );

}

strcat returns the concatenated string

Note: string one must have enough space to in order to receive new string unless behaviour of strcat will be undefined.

## 1-strncat.c

a program that concatenates two string using c strncat predefined function defined in string.h header file.

strncat is a function that uses a count value to append two strings

char string1[98] = "example";
char *ptr;

ptr = strncat(string1, " one", n);

where n is count value; any valid integer. n cuts the string when lenght of string is equal to count value. it doesnt take terminating nyll byte into account

note: if count value is greater than enght of string, lenght of string will be use in place of count value