#include<stdio.h> 
void main(){ 
    int n,x,max=0,ans=0,ansndx; 
    scanf("%d",&n); 
    int arr[n]; 
    for(x=0;x<n;x++) scanf("%d",&arr[x]); 
    for(x=0;x<n;x++){ 
        if(arr[x]>max) max=arr[x]; 
    } 
    for(x=0;x<n;x++){ 
        if(arr[x]>ans && arr[x]<max){ 
            ans=arr[x]; 
            ansndx=x; 
        } 
    } 
    for(x=ansndx;x<n;x++){ 
        printf("%d",arr[x]); 
        if(x<n-1) printf(","); 
    } 
} 
  
