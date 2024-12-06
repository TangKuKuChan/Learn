#include <stdio.h>
#include <math.h>

char s[3];
int sps[3];
int isXL(int a,int b,int c){
    void simplysort(int a,int b,int c);
    simplysort(a,b,c);
    //printf("s%d s%d s%d\n",sps[0],sps[1],sps[2]);
    if(sps[0]-sps[1]==1&&sps[1]-sps[2]==1){
        return 1;
    }
    else{
        return 0;
    }
}
void simplysort(int a,int b,int c){
    int t;
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a < c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b < c)
    {
        t = b;
        b = c;
        c = t;
    }
    sps[0]=a;
    sps[1]=b;
    sps[2]=c;
}
void findmax(int a,int b,int c){
    simplysort(a,b,c);
    int max=sps[0];
    if(max>10){
        if(max==11){
            max='J';
        }
        else if(max==12){
            max='Q';
        }
        else if(max==13){
            max='K';
        }
        else if(max==14){
            max='A';
        }
        sprintf(s,"%c",max);
        return;
    }
    sprintf(s,"%d",max);
}

int main(){
    int N;
    scanf("%d",&N);
    int a,b,c;
    char c1,c2,c3;
    for(int i=1;i<=N;i++){
        scanf("%d%c %d%c %d%c",&a,&c1,&b,&c2,&c,&c3);
        //printf("ISXL:%d\n",isXL(a,b,c));
        if(a==b&&a==c){
            findmax(a,b,c);
            printf("Leopard %s\n",s);
        }
        else if(c1==c2&&c1==c3){
            if(isXL(a,b,c)){
                findmax(a,b,c);
                printf("Flush straight %s\n",s);
            }
            else{
                findmax(a,b,c);
                printf("Same kind %s\n",s);
            }
        }
        else if(isXL(a,b,c)){
            findmax(a,b,c);
            printf("Straight %s\n",s);
        }
        else if(a==b){
            findmax(a,b,0);
            printf("Pair %s\n",s);
        }
        else if(a==c){
            findmax(a,c,0);
            printf("Pair %s\n",s);
        }
        else if(b==c){
            findmax(b,c,0);
            printf("Pair %s\n",s);
        }
        else{
            findmax(a,b,c);
            printf("General %s\n",s);
        }
    }
    return 0;
}