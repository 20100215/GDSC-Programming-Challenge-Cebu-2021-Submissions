#include<stdio.h> 
void main(){ 
    float a; 
    int year; 
    int num; 
    int x,isprime=1,y; 
    scanf("%f",&a); 
    scanf("%d",&year); 
    scanf("%d",&num); 
     
    for(y=1;y<=num;y++){ 
         
        for(x=2;x*x<=year && isprime==1;x++){ 
            if(year%x==0){ 
                isprime=0; 
               break; 
            } 
        }  
 
        printf("Year %d: ",year); 
 
        a*=1.08; 
        if(year%4==0) { a*=1.04; } 
        if(isprime==1) { a*=0.88; } 
 
        printf("%.2f\n",a); 
        year++; 
        isprime=1; 
    } 
} 
  

