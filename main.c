#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
printf("Skriv en tekst\n");
    gets(string);
    rev(&string);
    return 0;
}
//Tager imod en "string" og vender bogstaverne om
void rev(char *string){
   strrev(string);
      printf( string);
   return 0;

}
