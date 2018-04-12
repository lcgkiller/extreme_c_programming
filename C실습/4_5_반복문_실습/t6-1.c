#include <stdio.h>

 int main(){
	int num;
	scanf("%d",&num);
	int half = num/2;
	int m = num-half;
    int i=1, j;
    int start=0;

    for(i=1; i<=m; i++){
        for(j=1; j<i; j++)
            printf(" O");
        printf(" X");
        for(j=1; j<=(num-(2*i)); j++)
            printf(" O");
        
        if(i!=m)
            printf(" X");

        for(j=1; j<i; j++)
            printf(" O");
        printf("\n");
    }
    for(i=1; i<=half; i++){
        for(j=1; j<=half-i; j++)
            printf(" O");
        printf(" X");
        for(j=1; j<=(2*i-1); j++)
            printf(" O");
        printf(" X");
        for(j=1; j<=half-i; j++)
            printf(" O");
        printf("\n");
    }


	return 0;
}