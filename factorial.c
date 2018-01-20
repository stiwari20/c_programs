#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int c,n,fact=1 ;
    
    scanf("%d",&n);
    for(c=n;c>=1;c--)
    {
        fact=fact*c;
    }
    printf("%d",fact);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}