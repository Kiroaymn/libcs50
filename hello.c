#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
int main (void){
    int n = get_int("Enter a number: ");
    if (n % 2 == 0){
        printf("%d is even\n", n);
    }
    else{
        printf("%d is odd\n", n);
    }
}
