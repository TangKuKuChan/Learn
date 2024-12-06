#include <stdio.h>
#include <string.h>

int scores_b[5];
void ssort(){
    int temp;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (scores_b[j] > scores_b[j + 1]) {
                temp = scores_b[j];
                scores_b[j] = scores_b[j + 1];
                scores_b[j + 1] = temp;
            }   
        }
    }
}
char MatchSc(int s,int rels){
    if(rels<s){
        return ' ';
    }
    else{
        return '*';
    }
}
int main(){
    int repeat,n,score;
    
    scanf("%d",&repeat);
    for(int i=1;i<=repeat;i++){
        int scores[5]={0};
        scanf("%d",&n);
        for(int k=1;k<=n;k++){
            scanf("%d",&score);
            scores[score-1]++;
        }
        for(int k=0;k<5;k++){
            scores_b[k]=scores[k];
        }
        ssort();
        int max = scores_b[4];
        for(int k=max;k>=1;k--){
            char s2[13];
            sprintf(s2,"%c %c %c %c %c",MatchSc(k,scores[0]),MatchSc(k,scores[1]),MatchSc(k,scores[2]),MatchSc(k,scores[3]),MatchSc(k,scores[4]));
            //printf("%c %c %c %c %c\n",MatchSc(i,scores[0]),MatchSc(i,scores[1]),MatchSc(i,scores[2]),MatchSc(i,scores[3]),MatchSc(i,scores[4]));
            for(int j=strlen(s2)-1;j>=0;j--){
                if(s2[j]==' '){
                    continue;
                }
                s2[j+1]='\0';
                break;
            }
            printf("%s\n",s2);
        }
        printf("1 2 3 4 5\n");
    }
}