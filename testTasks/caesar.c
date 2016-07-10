#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (int argc, string argv[]) {
    
     //ci = (pi + k) % 26
    
    int kKey;
    int stv = 26;
    int initBigLetter = 65;
    int initSmallLetter = 97;
    string pOriginal;
    
    
    if(argc != 2){
        printf("Please pass key value!");
        return 1;
    };
    
    kKey = atoi(argv[1]);
    
    if (kKey >0 ){
        
       // printf("What text do I need to encrypt?\n");
        
        pOriginal = GetString();
        
        for (int i = 0, n = strlen(pOriginal); i < n; i++) {
            
            if (isalpha(pOriginal[i])){
                
                if (isupper(pOriginal[i])){
                    
                int big = ((pOriginal[i] - initBigLetter + kKey) % stv) + initBigLetter;
                
                printf("%c", big);
                    
                } else {
                    
                int small = ((pOriginal[i] - initSmallLetter + kKey) % stv) + initSmallLetter;
                
                printf("%c", small);
                    
                }
            
            } else {
                printf("%c", pOriginal[i]);
            }
            
        } 
        printf("\n");
        
    } 
}