/**
 * C program to find maximum occurring character in a string
 */
 
#include <stdio.h>

int main()
{

int array[255] = {0}; // initialize all elements to 0

char str[] = "thequickbrownfoxjumpedoverthelazydog";

int i, max, index;

for(i = 0; str[i] != 0; i++)
{
   ++array[str[i]];
}


// Find the letter that was used the most
max = array[0];
index = 0;
for(i = 0; str[i] != 0; i++)
{
     if( array[str[i]] > max)
     {
         max = array[str[i]];
         index = i;
     }
}

printf("The max character is: %d= %c \n", max, str[index]);

}

