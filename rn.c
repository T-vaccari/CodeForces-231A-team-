#include <stdio.h> 
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100
 
 
 
int main (){
 
    //Variabili
    int problems=0;
    int counter=0;
    int a,b,c;
 
    
    //Input
    
    
    scanf("%d",&problems);
 
 
 
 
 
    //Elaborazione
    
    for(int i=0; i<problems;i++){
        scanf("%d %d %d",&a,&b,&c);
        if((a+b+c)>=2){
            counter++;
        }
    }
 
 
 
 
 
 
 
 
 
    //OutPut
 
 
 
 
    printf("%d",counter);
 
 
    
 
 
    return 0;
}