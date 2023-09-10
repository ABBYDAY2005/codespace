#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
   string x = get_string (" Enter the first word = ");
   int y = strlen(x);
printf("Length is %i \n",y);
return 0;
}