#include <stdio.h>
void P5_3(){
    int num;
    int cnt1=0, cnt2=0;
    int i1=1, i2=1;
    int result1=0, result2=0;
    int digit1=1, digit2=1;
    int temp;

    scanf("%d", &num);
    temp = num;
    while(temp!=0){
        if (temp % 2 == 0){
            cnt1++;
            temp /= 10;
        }
        else{
            cnt2++;
            temp /= 10;
        }
    }

    while(i1<cnt1){
        digit1*=10;
        i1++;
    }
    while(i2<cnt2){
        digit2*=10;
        i2++;
    }
    while(num!=0){
        if ((num%10) % 2 == 0){
            result1 += digit1 * (num % 10);
            digit1 /= 10;
            num /= 10;
        }
        else{
            result2 += digit2 * (num %10);
            digit2 /= 10;
            num /= 10;
        }
    }
    printf("%d %d", result1, result2);
}
void P5_2(){
    int num;
    int digit=1;
    int result=0;
    int temp;
    int cnt=1;
    int i=1;

    scanf("%d", &num);
    temp = num;
    while(temp>10){
        cnt++;
        temp /= 10;
    }
    while(i!=cnt){
        digit*=10;
        i++;
    }
    // printf("digit : %d, cnt : %d\n", digit, cnt);
    while(num!=0){
        result += digit * (num % 10);
        num /= 10;
        digit /= 10;
    }
    printf("%d", result*result);
}
void P5_1(){
    int num;
    scanf("%d", &num);
    while(num!=0){
        printf("%d", num % 10);
        num /= 10;
    }
}
void P4_3(){
    int a, b;
    int i, j, k;
    scanf("%d %d", &a, &b);
    for(i=a; i<=b; i+=2){
        for(j=1; j<=9; j++){
            for(k=i; k<=i+1; k++){
                if (k>b) break;
                printf("%d*%d=%2d\t", k, j, k*j);
            }
            printf("\n");
        }        
        printf("\n");
    }
}
void P4_2(){
    int a, b;
    int i, j;
    scanf("%d %d", &a, &b);
    for(i=1; i<=9; i++){
        for(j=a; j<=b; j++){
            printf("%d*%d=%2d\t", j, i, j*i);
        }
        printf("\n");
    }
}
void P4_1(){
    int i, j,num;

    scanf("%d", &num);

    for(i=1; i<=9; i++){
        printf("%d*%d=%2d\n", num, i, num*i);
    }
}
void P3(){
    int num;
    int i,j,k;
    scanf("%d", &num);
    
    for(i=0; i<num; i++){
        for(j=0; j<(num-1)-i; j++){
            printf(" ");
        }
        for(j=0; j<(i*2)+1; j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=num-2; i>=0; i--){
        for(j=0; j<(num-1)-i; j++){
            printf(" ");
        }
        for(j=0; j<(i*2)+1; j++){
            printf("*");
        }
        printf("\n");
    }

}
void P2(){
    int result =0;
    int cnt=0;
    int i, j;
    int a, b;

    scanf("%d %d", &a, &b);

    if(a>=b){
        for(i=b; i<=a; i++){
            cnt = 0;
            for(j=1; j<=i; j++){
                if(i % j== 0) cnt++;
            }
            if (cnt % 2 == 0) result++;
            else cnt=0;
        }
    }
    else{
        for(i=a; i<=b; i++){
            cnt = 0;
            for(j=1; j<=i; j++){
                if(i % j== 0) cnt++;
            }
            if (cnt % 2 == 0) result++;
            else cnt=0;
        }
    }
    printf("%d", result);
}

void P1(){
    int i, j;
    int num;
    int result =0;
    int cnt = 0;
    scanf("%d", &num);
    for(i=2; i<num; i++){
        cnt = 0;
        for(j=1; j<=i; j++){
            if ( i % j == 0){
                cnt ++;
            }
        }
        if(cnt==2) result++;
    }
    printf("%d", result);
}

int main(void){
    // P1();
    // P2();
    // P3();
    // P4_1();
    // P4_2();
    // P4_3();
    // P5_1();
    // P5_2();
    // P5_3();
    
    return 0;
}