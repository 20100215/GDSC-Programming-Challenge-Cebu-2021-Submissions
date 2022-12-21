#include<stdio.h> 
void swap(int*,int*); 
 
void main(){ 
    char str[40]; 
    int ans[20]; 
    scanf("%s",str); 
    int x,y,count=0,num; 
    for(x=0;str[x]!=0;x+=4){ 
        if(str[x]!='X' && str[x+1]!='X' && str[x+2]!='X' && str[x+3]!='X'){ 
            num=(str[x]-48)*1000+(str[x+1]-48)*100+(str[x+2]-48)*10+(str[x+3]-48); 
            for(y=0;y<count && ans[y]!=num; y++){} 
            if(y==count) { 
                ans[count]=num; 
                count++; 
            } 
        } 
    } 
 
    for(x=0;x<count-1;x++){ 
        for(y=0;y<count-x-1;y++){ 
            if(ans[y]>ans[y+1]) swap(&ans[y],&ans[y+1]); 
        } 
    } 
 
    for(x=0;x<count;x++){ 
        printf("[%d] ",x+1); 
        if(ans[x]<10){ 
            printf("000%d\n",ans[x]); 
        } else if (ans[x]<100) { 
            printf("0%d\n",ans[x]); 
        } else if (ans[x]<1000) { 
            printf("0%d\n",ans[x]); 
        } else { 
            printf("%d\n",ans[x]); 
        } 
    } 
    printf("End of file has been reached."); 
} 
 
void swap(int*a,int*b){ 
    int temp = *a; 
    *a=*b; 
    *b=temp; 
} 
  
