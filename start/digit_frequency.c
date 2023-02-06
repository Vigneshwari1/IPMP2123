#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char input[1000];
    scanf("%s",input);
    int count[] ={0,0,0,0,0,0,0,0,0,0};
    for(int i=0; input[i]!='\0';i++){
        
        if(input[i]<58 && input[i]>47){
             count[input[i]-48]++;
        }
    }
    for(int i=0; i<10;i++){
        printf("%d ",count[i]);
    }
    return 0;
}
