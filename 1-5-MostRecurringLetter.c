#include<stdio.h> 
int count[130]; 
void main(){ 
    char string[1000]; 
    char ansletter; 
    scanf("%s",string); 
    int x,numv=0,numc=0; 
    for(x=0;string[x]!=0;x++){ 
        switch(string[x]){ 
            case 'A' :     case 'E' : 
            case 'I' :     case 'O' : 
            case 'U' :     case 'a' : 
            case 'e' :     case 'i' : 
            case 'o' :     case 'u' :  
            numv++;  break; 
            default: 
            numc++; 
            break; 
        } 
        count[string[x]]++; 
    }  
    if(numc>numv){ 
        count['A']=-1; count['a']=-1; 
        count['E']=-1; count['e']=-1; 
        count['I']=-1; count['i']=-1; 
        count['O']=-1; count['o']=-1; 
        count['U']=-1; count['u']=-1; 
    } else if (numc<numv) { 
        count['B']=-1; count['b']=-1; 
        count['C']=-1; count['c']=-1; 
        count['D']=-1; count['d']=-1; 
        count['F']=-1; count['f']=-1; 
        count['G']=-1; count['g']=-1; 
        count['H']=-1; count['h']=-1; 
        count['J']=-1; count['j']=-1; 
        count['K']=-1; count['k']=-1; 
        count['L']=-1; count['l']=-1; 
        count['M']=-1; count['m']=-1; 
        count['N']=-1; count['n']=-1; 
        count['P']=-1; count['p']=-1; 
        count['Q']=-1; count['q']=-1; 
        count['R']=-1; count['r']=-1; 
        count['S']=-1; count['s']=-1; 
        count['T']=-1; count['t']=-1; 
        count['V']=-1; count['v']=-1; 
        count['W']=-1; count['w']=-1; 
        count['X']=-1; count['x']=-1; 
        count['Y']=-1; count['y']=-1; 
        count['Z']=-1; count['z']=-1; 
    }  
    ansletter=string[0]; 
    for(x=0;string[x]!=0;x++){ //search for most frequent 
        if(count[string[x]]>count[ansletter]) 
        ansletter=string[x]; 
    } 
    printf("%c %d",ansletter,count[ansletter]); 
} 
