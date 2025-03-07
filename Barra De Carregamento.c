#include <stdio.h>
#include <unistd.h>

int main() {
    int i = 0, j = 0, k = 0;
    float por = 0;

    while (j != 1) {
        while (i != 11) {
            for (k = 0; k < (i+1); k++){
                printf("\U0001F40D ");}
                
            for (int k = i; k < 10; k++){
                printf("\r"); }
            
            por = i * 100.0 / 10;
            
            printf("\r");
            printf("[ %.0f%% ]", por);
            
            printf(" ");
            
            fflush(stdout);
            
            usleep(1500000); 
        
        i++;
            
        }
            
        j++;
        
    }
