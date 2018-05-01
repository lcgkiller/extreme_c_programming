#include <stdio.h>

void mo2(){
    int num;
    int a, b;
    int i, j;
    int res1=0, res2=0, res3=0, res4=0;
    scanf("%d %d %d", &num, &a, &b);

    for(i=1; i<=num; i++){
        if(i % a == 0) res1+=i;
        if(i % b == 0) res2+=i;
        if( i % a == 0 && i % b == 0) res3+=i;
        else if ( i % a != 0 && i % b != 0){
            res4 += i;
        }
    }
    printf("%d %d %d %d", res1, res2, res3, res4);

}
void P7(){
    int num;
    int i, j;
    int start=1;
        
    scanf("%d", &num);

    for(i=0; i<=num; i++){
        for(j=1; j<i+1; j++){
            printf(" %d", start%10);
            start++;
        }
        printf("\n");
    }
}
void P6(){
    int num;
    int i=0, j;
    scanf("%d", &num);

    while(i<num){
        for(j=i+1; j<=num+i; j++){
            printf(" %d", j%10);
        }
        printf("\n");
        i++;
    }
}
void P6_2(){
    int num;
    int i,j;
    int cnt=1;
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        for(j=1; j<=num; j++){
            printf(" %d", cnt%10);
            cnt++;
        }
        printf("\n");
    }
}
void P6_1(){
    int i,j;
    int num;

    scanf("%d", &num);

    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            if( j == i || j == (num-1-i))
                printf(" X");
            else{
                printf(" O");
            }
        }
        printf("\n");
    }
}
void P5(){
    int i, j;
    int num;
    scanf("%d", &num);

    for(i=0; i<num; i++){
        for(j=num-(i+1); j>=0; j--){
            printf(" ");
        }
        for(j=0; j<(i+1)*2-1; j++){
            printf("*");
        }
        printf("\n");
    }
}
void P5_4(){
    int i, j;
    int num;

    scanf("%d", &num);

    for(i=num; i>0; i--){
        for(j=0; j<2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

}
void P5_3(){
    int i,j;
    int num;
    scanf("%d", &num);

    for(i=0; i<num; i++){
        for(j=1; j<=(i*2)+1; j++){
            printf("*");
        }
        printf("\n");
    }
}
void P5_2(){
    int i, j;
    int num;

    scanf("%d", &num);

    for(i=0; i<num; i++){
        for(j=num-i; j>0; j--){
            printf("*");
        }
        printf("\n");
    }
}
void P5_1(){
    int num;
    int i, j;
    scanf("%d", &num);

    for(i=0; i<num; i++){
        for(j=1; j<=i+1; j++){
            printf("*");
        }
        printf("\n");
    }
}
void P4(){
    int a,b;
    int result;
    int i;
    scanf("%d %d", &a, &b);

    if (a>b){
        i = b;
        while(i!=0){
            if (a%i==0 && b%i==0){
                result = i;
                break;
            } 
            i--;
        }
    }

    else{
        i = a;
        while(i!=0){
            if (a%i==0 && b%i==0) {
                result = i;
                break;   
            }
            i--;
        }
    }
    printf("%d", result);
}

void P3(){
    int num;
    int answer;
    int cnt=0;
    scanf("%d", &answer);
    do{
        scanf("%d", &num);
        cnt++;
        if(num>answer){
            printf("%d>?\n", num);
        }
        else if(num<answer) {
            printf("%d<?\n", num);
        }
        else{
            printf("%d==?\n%d", num, cnt);
        }

    }while(num!=answer);
}
void P2(){
    int num;
    int sum=0;

    while(num!=0){
        scanf("%d", &num);
        sum+=num;
    }
    printf("%d", sum);
}
void P1(){
    int num;
    int i;
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        if(num%i == 0) printf("%d ", i);
    }
}
void P13(){
    int cnt=0;
    int sum=0;
    int num=1;

    while(num>0){
        scanf("%d", &num);
        if (num<=0) break;

        if (num>100) continue;

        sum += num;
        cnt++;
    }

    printf("%d %.2lf %d", sum, (double)sum/cnt, cnt);
}
void P12(){
    int num;
    int sum=0;
    
    scanf("%d", &num);

    for(;;){
        if (num==0) break;
        sum += num--;
    }
    printf("%d", sum);
}
void P11(){
    int num;
    int i,j,k;
    scanf("%d", &num);

    for(i=1; i<=6; i++){
        for(j=1; j<=6; j++){
            for(k=1; k<=6; k++){
                if(i+j+k==num) printf("%d %d %d\n", i, j, k);
            }
        }
    }
}
void P10(){
    int num;
    int sum=0;
    int result=0;
    int cnt=0;
    scanf("%d", &num);
    result = num;

    while(result >= 10){
        num = result;
        result = 0;
        while(num!=0){
            result += num % 10;
            num /= 10;
        }
    }
    printf("%d\n", result);
}
void P10_1(){
    int num;
    int sum=0;

    scanf("%d", &num);

    while(num!=0){
        sum += (num % 10);
        num /= 10;
    }
    printf("%d", sum);
}
void P9_1(){

    int cnt=0;
    int num;

    scanf("%d", &num);

    while(num!=0){
        if ((num%10) == 3) cnt++;
        num /= 10;
    }
    printf("%d", cnt);
}
void P8(){
    int m, n;
    int i,j;

    scanf("%d %d", &m, &n);

    for(i=m; i<=n; i++){
        int result = 1;
        printf("%d!=", i);
        for(j=1; j<=i; j++){
            if(j==1) printf("%d",j);
            else if (j>1 && j<i){
                printf("*%d", j);
                result *= j;
            }
            else if(j==i) printf("*%d=%d",j, result*j);
        }
        printf("\n");
    }
}

int main(void){
    mo2();
    // P1();
    // P2();
    // P3();
    // P4();
    // P5();
    // P6();
    // P7();
    // P6_1();
    // P6_2();
    // P5_1();
    // P5_2();
    // P5_3();
    // P5_4();
    // P8();
    // P9_1();
    // P10_1();
    // P10();
    // P11();
    // P12();
    // P13();
}