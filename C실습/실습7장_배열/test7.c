#include <stdio.h>
int main(){
    int k[11];
    int v[11]={0,};
    int n = 0;
    int num;
    int i=0;
    for(i=0;i<10;i++){
        scanf("%d",&num);
        if(i==0){
            k[i]=num;
            v[i]++;
            n++;
        }
        else{
            int flag = 0;
            int j;
            for(j=0;j<n;j++){
                if(k[j]==num){
                    flag = 1;
                    break;
                }
            }
            if(flag){
                v[j]++;
            }
            else{
                k[n]=num;
                v[n]++;
                n++;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d %d\n",k[i],v[i]);
    }
    return 0;
}