#include<stdio.h> 
void main(){ 
    int arr[8]; 
    int n,center,x,temp; 
 
    scanf("%d",&arr[0]); 
    scanf("%d",&arr[1]); 
    scanf("%d",&arr[2]); 
    scanf("%d",&arr[7]); 
    scanf("%d",&center); 
    scanf("%d",&arr[3]); 
    scanf("%d",&arr[6]); 
    scanf("%d",&arr[5]); 
    scanf("%d",&arr[4]); 
    scanf("%d",&n); 
 
    int ans[8]; 
    n%=8; 
    for(x=0;x<8;x++){ 
        ans[n]=arr[x]; 
        n++; 
        if (n>7) n=0; 
    } 
 
    printf("%d ",ans[0]); 
    printf("%d ",ans[1]); 
    printf("%d\n",ans[2]); 
    printf("%d ",ans[7]); 
    printf("%d ",center); 
    printf("%d\n",ans[3]); 
    printf("%d ",ans[6]); 
    printf("%d ",ans[5]); 
    printf("%d\n",ans[4]); 
    if(ans[1]%center==0) printf("WIN"); else printf("LOSE"); 
 
} 
  
