/*#include <stdio.h>
#include <string.h>
int main (){
    char str[]= "brennis benjaminn castro.........";
    memmove(str +20,str+15,11);
    puts (str);
    return 0;
}*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    char str2[20];
    strcpy(str1, "To be ");
    strcpy(str2, "or to be");
    strncat(str1, str2, 6);
    puts(str1);
    return 0;
}