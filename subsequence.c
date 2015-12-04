#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{//RUNNING TIME BIG-O(lenth of Y);
    char *Y = "abcdefghijklmnopqrstuvwxyz";
    char *X = "abcemnpqz";
    int i=0, j = 0;
    int lena =  strlen(X);
    int lenb = strlen(Y);
    
    if(lena>lenb){
         printf("No\n");
         exit(0);
        }
    for(i =0; i<lena; i++){
        int not = 1;
        while(not){
            if(j >= lenb){
               printf("No\n");
               return 0;
             }
            if(a[i]==b[j++])
               not = 0;
       }
   
    }
        printf("Yes\n");

    return 0;
}

