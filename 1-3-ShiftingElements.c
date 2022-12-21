#include <stdio.h> 
void swap(int*,int*); 
 
void main(){  
    int a,x,y,num; 
    scanf("%d",&a); 
    int arr[a]; 
    for (x=0;x<a;x++) scanf("%d",&arr[x]); 
 
    scanf("%d",&num); 
 
    for(x=0;x<a-1;x++){ 
        for(y=0;y<a-x-1;y++){ 
            if(arr[y]>arr[y+1]) swap(&arr[y],&arr[y+1]); 
        } 
    } 
 
    int ans[a]; 
    int current = num%a; 
    for(x=0;x<a;x++){ 
        ans[current]=arr[x]; 
        current++; 
        if(current==a) current=0; 
    } 
 
    for(x=0;x<a;x++){ 
        printf("%d ",ans[x]); 
    } 
 
} 
 
void swap(int*a,int*b){ 
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
} 