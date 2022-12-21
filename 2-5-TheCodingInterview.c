#include<stdio.h> 
void swap(char*,char*); 
 
void main(){ 
    int x,y,num; 
    scanf("%d",&num); 
    char arr[num]; 
    for(x=0;x<num;x++){ scanf(" %c",&arr[x]); } 
 
    char ans[num]; 
    ans[0]=arr[0]; 
    for(x=1;x<num;x++){ 
        if (arr[x-1]+arr[x]>122) ans[x]=arr[x-1]+arr[x]-75; 
        else ans[x]=arr[x-1]+arr[x]; 
    } 
 
    for(x=0;x<num-1;x++){ 
        for(y=0;y<num-x-1;y++){ 
            if(ans[y]>ans[y+1]) swap(&ans[y],&ans[y+1]); 
        } 
    } 
 
    for(x=0;x<num;x++){ 
        printf("%c",ans[x]); 
        if(x<num-1) printf(","); 
    } 
} 
 
void swap(char*a,char*b){ 
    char temp = *a; 
    *a=*b; 
    *b=temp; 
} 
  
