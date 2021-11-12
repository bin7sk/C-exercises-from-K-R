#include <stdio.h>
/*
 Ex 2-3
 Function htoi to convert hex string to int
 
 
 */
int htoi(char s[]){
    int i=0;
    int x=0;
    int c;
    if(s[0]=='0' && (s[1]=='x' || s[1]=='X')) i=2;
    while(s[i]!='\n' && s[i]!='\0'){
        if(s[i]<='9' && s[i]>='0') c=s[i]-'0';
        else if(s[i]=='A' || s[i]=='a') c=0xa;
        else if(s[i]=='B' || s[i]=='b') c=0xb;
        else if(s[i]=='C' || s[i]=='c') c=0xc;
        else if(s[i]=='D' || s[i]=='d') c=0xd;
        else if(s[i]=='E' || s[i]=='e') c=0xe;
        else if(s[i]=='F' || s[i]=='f') c=0xf;
        else c=0;
        x=x*0x10+c;
        i++;
    }
    return x;
}
int main(){
    int c;
    char s[100];
    int i;
    while((c=getchar())!=EOF && i<99) {
        s[i]=c;
        i++;
    }
    s[i]='\0';
    int hex=htoi(s);
    printf("hex: %x\n" "decimal: %d\n",hex, hex);
    return 0;
}
