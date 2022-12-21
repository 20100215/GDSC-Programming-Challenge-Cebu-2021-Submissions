#include<stdio.h> 
int count1[130]; 
int count2[130]; 
char Fchars[100]; 
void main(){ 
    char str1[1000]; 
    char str2[1000]; 
    scanf("%s %s",str1,str2); 
    char string[1000]; 
    int numwild=0; 
    int istrue=1; 
 
    int Fctr=0; 
    int x; 
    int a; 
 
    for(x=0;str1[x]!=0;x++){ 
        count1[str1[x]]++; 
        if(str1[x]=='_') numwild++; 
    } 
    for(x=0;str2[x]!=0;x++){ 
        count2[str2[x]]++; 
    } 
 
    for(x=65;x<=125;x++){ 
        if(count2[x]!=count1[x]){ 
            if(numwild>0){ 
                numwild-=(count2[x]-count1[x]);  
            } else { 
                istrue=0; 
                a=count2[x]-count1[x]; 
                while(a>0){ 
                    Fchars[Fctr]=x; 
                    Fctr++; 
                    a--; 
                } 
            } 
        }  
    } 
 
    if(istrue==1){ 
        printf("true"); 
    } else { 
        printf("false "); 
        for(x=0;Fchars[x]!=0;x++) { printf("%c",Fchars[x]); } 
    } 
} 