#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    double value;
    char str[] = "3.5 2.5 1.26";
    char *pstr = str;
    char *ptr = NULL;

    while(true){
        value = strtod(pstr,&ptr);
        if(pstr == ptr)
            break;
        else{
            printf("%f", value);
            pstr = ptr;
        }
    }
    return 0;
}
