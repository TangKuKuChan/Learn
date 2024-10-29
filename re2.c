#include <stdio.h>

int main(){
    //32
    char flag[32];
    int s2[]={196,204,96,96,202,106,108};
    for(int i=0;i<8;i++){
        flag[i]=s2[i]/2;
    }
    char v11[16]={'h','\t','F','G','-',14,17,93};
    char v22[] = "XorrLord";
    for(int i =8;i<16;i++){
        flag[i]=v11[i-8]^v22[i-8];
    }
    for(int i=0;i<16;i++){
        printf("%c",flag[i]);
        //printf("(%d)",flag[i]);
    }
    
}