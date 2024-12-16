#include <stdio.h>
#include <math.h>
int main(){
    int a[20],b[20],k=0,sum=0,sum2=0;
    for(int i=0;i<20;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    float ave= sum/20.0;
    for(int i=0;i<20;i++){
        if(fabs(a[i]-ave)>10){
            b[k]=a[i];
            k++;
        }
        else{
            sum2+=a[i];
        }
    }
    printf("所有评委平均分:%.3f分.\n",ave);
    printf("不合格得分:");
    for(int i=0;i<k;i++){
        printf("%d ",b[i]);
    }
    printf(".\n");
    if(k!=20){
        printf("最后得分:%.3f分.",(float)sum2/(20-k));
    }
    else{
        printf("无合格打分.");
    }
    
}