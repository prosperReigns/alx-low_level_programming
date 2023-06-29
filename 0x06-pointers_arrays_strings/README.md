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