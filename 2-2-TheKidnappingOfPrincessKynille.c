#include<stdio.h> 
void main(){ 
    char str[1000]; 
    scanf("%s",str); 
    int x; 
    int isnum,isvowel; 
    for(x=0;str[x]!=0;x++){ 
        switch(str[x]){ 
            case 'a': 
            case 'e': 
            case 'i': 
            case 'o': 
            case 'u': 
            case 'A': 
            case 'E': 
            case 'I': 
            case 'O': 
            case 'U': 
            isvowel=1; 
        } 
        switch(str[x+1]){ 
            case '2': 
            case '3': 
            case '5': 
            case '7': 
            isnum=1; 
        } 
        if(isnum==1 && isvowel==1){ 
            printf("%c",str[x+2]); 
            str[x+2]='b'; 
        } 
        isnum=0; 
        isvowel=0; 
    } 
} 
  
