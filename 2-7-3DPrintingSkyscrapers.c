#include<stdio.h> 
void main(){ 
    int x,y,a,b; 
    scanf("%d %d",&a,&b); 
    for(x=0;x<a/2;x++){ 
        printf(" "); 
    } 
    if(a%2==0) printf("**\n"); else printf(" *\n"); 
    for(x=1;x<=b-2;x++){ 
        for(y=0;y<=a;y++){ 
            if(y==0) printf(" "); else printf("*"); 
        } 
        printf("\n"); 
    } 
    if(b>1){ 
    for(x=0;x<=a+1;x++) printf("*"); 
    } 
} 
  
 
