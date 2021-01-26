#include <stdio.h>
int main()
{
    char c;
    int letter=0,blank=0,digit=0,other=0,i;
    while((c=getchar())!='\n'||i<10){

         if((c>='a' && c<='z') || (c>='A' && c<='Z'))
            letter++;
        else if(c==' '||c=='\n')
            blank++;
        else if(c>='0'&&c<='9')
            digit++;
        else
            other++;
        i++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);

    return 0;
}