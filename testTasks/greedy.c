#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int sum = 0;
    float n;
    
    do {
        
        printf("What amount you would like to receive?\n");
        n = GetFloat();
        
    } while(n <= 0);
    
    
    int change = (int) round(n * 100);
    
    
    while(change>0){
        
        if (change>=25){
            change -= 25;
            sum++;
        } else if (change>=10) {
            change -= 10;
            sum++;
        } else if (change>=5) {
            change -= 5;
            sum++;
        } else if (change>=1) {
            change -= 1;
            sum++;
        }
         
    } 
    printf("%d\n", sum);
}