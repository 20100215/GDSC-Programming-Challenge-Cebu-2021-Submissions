#include<stdio.h> 
long long fact(int a); 
long long perm(int n, int r); 
long long comb(int n, int r); 
 
void main(){ 
    long long ans; 
    char a; 
    int n,r; 
    scanf("%c",&a); 
    scanf("%d %d", &n,&r); 
    if(a=='P') ans=perm(n,r); 
    if(a=='C') ans=comb(n,r); 
    printf("%ld",ans); 
} 
 
 
long long fact(int a){ 
    if (a==1 || a<=0) 
    return a; 
 
    return a*fact(a-1); 
} 
 
long long perm(int n, int r){ 
    long long ans=1; 
    while (n>r){ 
        ans*=n; 
        n--; 
    } 
    return ans; 
} 
 
long long comb(int n, int r){ 
    long long ans=1; 
    while (n>r){ 
        ans*=n; 
        n--; 
    } 
    ans/=fact(r); 
    return ans; 
} 
  
