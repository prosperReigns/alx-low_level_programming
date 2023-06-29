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

where n is count value; any valid integer. n cuts the string when lenght of string is equal to count value. it doesnt take terminating null byte into account

note: if count value is greater than enght of string, lenght of string will be use in place of count value

## 2-strncpy.c

a program that copies a  string using c strncpy prede\
fined function defined in string.h header file.

strncpy is a function that uses a count value to copy a part of a string into an empty array

char string1[98];
char *ptr;

ptr = strncpy(string1, "this is a string", n);

where n is count value; any valid integer.

## 3-strcmp.c

a program tha compares two string using strcmp defined in string.h header file.

strcmp compares two string and return a value. value returned is 0 if the two strings  are equal, >0 if the first non-matching character ascii value is graeter than its corresponding character in the second string, and <0 id first non-matching character is less than corresponding ascii value of corresponding character of second string.

strcmp compares each character of two strings using its ascii value

## 4-rev_array.

a program that reverses the elements of an array.

this program uses the method of swapping two numbers. where the first element is reolaced by the last and the last by the first

## 5-string_toupper.

A program that converts all lowercase letters to uppercase letters.

this program takes a string as input, checks if its lowercased if true it is converted to uppercase

## 6-cap_string.

a program that capitalize the first letter of every word in a sentence

## 7-leet.

a program which encodes characters

'a' and 'A' are encoded with the chatacter '4'
'e' and 'E' are encoded with the character '3'
'o' and 'O' are encoded with the character '0'
'l' and 'L' are encoded with the character '1'
't' and 'T' are encoded with the character '7'