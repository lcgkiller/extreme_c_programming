#include <stdio.h>

void P1(){
    int i;
    int num;
    int sum=0;
    int arr[100];
    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
        printf("%d ", sum);
    }

}

void P2(){
    int num;
    int a, b;
    int i;
    int arr[1000];
    int sum=0;
    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &a, &b);

    for(i=a; i<=b; i++){
        sum += arr[i];
    }

    printf("%d", sum);
}

void P3(){
    int num;
    int a, b;
    int i;
    int arr[1000];
    int sum=0;
    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    do {
        scanf("%d %d", &a, &b);
        if ( a > b ){
            int temp = b;
            b = a;
            a = temp;
        }
        if (a==0 && b==0 || b>=num) break;
        for(i=a; i<=b; i++){
            sum += arr[i];
        }
        printf("%d\n", sum);
        sum = 0;
    }while(a!=0 || b!=0);

}
void P4(){
    int num;
    int i;
    int sum1=0;
    int sum2=0;

    scanf("%d", &num);
    for(i=1; i<=num; i++){
        if (num % i == 0){
            printf("약수 : %d\n", i);
            sum1+=i;
        }
        int j;
        int cnt = 0;
        for(j=1; j<=i; j++){
            if(j==num) continue;
            if ( i % j == 0){
                cnt++;
            }
        }
        if (cnt==2){
            printf("소수 : %d\n", i);
            sum2 +=  i;
        }
    }

    printf("%d\n%d", sum1, sum2);
}
void P5(){
    int arr[100];
    int num;
    int i, j;
    int max;

    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(i=0; i<num; i++){
        int sum = 0;
        for(j=i; j<num; j++){
            sum += arr[j];
            if (max < sum) max = sum;
        }
    }

    printf("%d", max);
}

int checker(char c){
    char aeiou[5]={'a', 'e', 'i', 'o', 'u'}; // 배열 쓸떄 []가 아니라 {}임을 주의
    int i=0;
    for(i=0; i<5; i++){
        if (c == aeiou[i]){
            return 1;
        }
    }
    return 0;
}
void P6(){
    
    char arr[10];
    int i=0;
    for(i=0; i<10; i++){
        scanf("%c", &arr[i]);
    }
    for(i=0; i<8; i++){
        int flag = !checker(arr[i]) && checker(arr[i+1]) && !checker(arr[i+2]);
        if(flag){
            printf("%c%c%c\n", arr[i], arr[i+1], arr[i+2]);
        }
        flag = 0;
    }

}
void P7(){
    int arr[100];
    int num;
    int i;
    int cnt=0;
    int sum = 0;
    while(1){
        scanf("%d", &num);
        arr[cnt++] = num;
        sum += num;
        for(i=0; i<cnt-1; i++){
            if (arr[i] == num){
                printf("%d", sum-num);
                return ;
            }
        }
    }
}

void P8(){
    int arr[100];
    int cnt=0;
    int sum=0;
    int i=0;
    int avg=0;

    do{
        int max=0, min=0, equal=0;
        scanf("%d", &arr[cnt++]);
        if(arr[cnt-1] < 0) break;
        sum += arr[cnt-1];

        for(i=0; i<cnt; i++){
            avg = (int)sum/cnt;
        }

        for(i=0; i<cnt; i++){
            if(arr[i] > avg){
                max++;
            }
            else if(arr[i] < avg){
                min++;
            }
            else if(arr[i] == avg){
                equal++;
            }
        }

        printf("%d %d %d\n", max, min, equal);

    }while(arr[cnt-1] >= 0);
}
int main(void){
    // P1();
    // P2();
    // P3();
    P4();
    // P5();
    // P6();
    // P7();
    // P8();
    return 0;
}