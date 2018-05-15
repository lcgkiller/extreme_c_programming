#include <stdio.h>
void P1(){
    int i=0;
    int arr[10];

    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<10; i++){
        if(arr[i] % 2 == 0){
            printf(" %d", arr[i]);
        }
    }
}

void P2(){
    int i=0;
    int arr[10];
    int sum=0;
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
}

void P3(){
    int arrX[10];
    int arrY[10];
    int arrZ[10];
    int i=0;

    for(i=0; i<10; i++){
        scanf("%d", &arrX[i]);
    }

    for(i=0; i<10; i++){
        scanf("%d", &arrY[i]);
    }

    for(i=0; i<10; i++){
        arrZ[i] = arrX[i] + arrY[i];
    }
    for(i=0; i<10; i++){
        printf(" %d", arrZ[i]);
    }
}

void P4(){
    int arrX[10];
    int arrY[10];
    int arrZ[10];
    int i=0;

    for(i=0; i<10; i++){
        scanf("%d", &arrX[i]);
    }

    for(i=0; i<10; i++){
        scanf("%d", &arrY[i]);
    }

    for(i=0; i<10; i++){
        arrZ[i] = arrX[i] + arrY[9-i];
    }
    for(i=0; i<10; i++){
        printf(" %d", arrZ[i]);
    }
}

void P5(){
    int i;
    int max;
    int arr[10];
    int result[10];
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i=1; i<10; i++){
        if (max < arr[i]) max = arr[i];
    }
    printf("%d", max);
}

void P6(){
    int arr[10];
    int result[10];
    int i, j;
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<10; i++){
        int cnt=0;
        for(j=0; j<10; j++){
            if (arr[i] < arr[j]) cnt++;
        }
        result[i] = cnt;
    }
    for(i=0; i<10; i++){
        printf(" %d", result[i]);
    }
}

// void P7(){
 
//     int x[10];
//     int i, k, cnt = 0;
 
//     for (i = 0; i<10; i++){
//         scanf("%d", &x[i]);
//         for (k = 0; k<i; k++){
//             if (x[k] == x[i]){
//                 printf("나야나 : %d\n", i);
//                 cnt++;
//             }
//         }
//         if (cnt == 0)
//             printf(" %d", x[i]);
//         cnt = 0;
//     }
// }

void P7(){
    int arr[10];
    int i, j;
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<10; i++){
        int temp = 0;
        for(j=0; j<i; j++){
            if(arr[i] == arr[j])
                temp++;
        }
        if(temp == 0){
            printf(" %d", arr[i]);
        }
        temp = 0;
    }
}
void P8(){
    int num;
    int arr[10];
    int i=0;
    int cnt=0;
    scanf("%d", &num);

    while(num!=0){
        arr[i++] = num % 10;
        cnt++;
        num /= 10;
    }
    for(i=0; i<cnt; i++){
        printf(" %d", arr[i]);
    }
}

void P9(){
    int n;
    int i;
    int arr[10];
    int input;
    int digit=1;
    int result=0;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &input);
        arr[i] = input;
        
    }

    for(i=1; i<n; i++){
        digit *= 10;
    }

    for(i=0; i<n; i++){
        result += digit*arr[i];
        digit /= 10;
    }      
    printf("%d", result);
    
}

void P10(){
    double arr[10];
    int i=0;

    for(i=0; i<10; i++){
        scanf("%lf", &arr[i]);
    }

    for(i=0; i<10; i++){
        if(arr[i]>0.0) printf(" %.1lf", arr[i]);
        else{
            continue;
        }
    }
}

void P11(){
    double arr[10];
    int i=0;
    double min;

    for(i=0; i<10; i++){
        scanf("%lf", &arr[i]);
    }

    min = arr[0];

    for(i=0; i<10; i++){
        if(arr[i]<min) min = arr[i];
    }
    printf("%.1f", min);
}
void P12(){
    double arr[10];
    int result[10];
    int i, j;
    for(i=0; i<10; i++){
        scanf("%lf", &arr[i]);
    }
    for(i=0; i<10; i++){
        int cnt=0;
        for(j=0; j<10; j++){
            if (arr[i] > arr[j]) cnt++;
        }
        result[i] = cnt;
    }
    for(i=0; i<10; i++){
        printf(" %d", result[i]);
    }
}

void P13(){
    char str[10];
    int i=0;
    for(i=0; i<10; i++){
        scanf("%c", &str[i]);
    }
    for(i=0; i<10; i++){
        if(str[i] >= 'A' && str[i] <= 'Z') printf(" %c", str[i]);
    }
}

void P14(){
    char strX[10];
    char strY[10];
    int i=0;
    for(i=0; i<10; i++){
        scanf("%c", &strX[i]);
    }
    getchar();
    for(i=0; i<10; i++){
        scanf("%c", &strY[i]);
    }
    for(i=0; i<10; i++){
        printf(" %c", strX[i]);
        printf(" %c", strY[i]);
    }
}

void P15(){
    char arr[10];
    int i, j;
    char result[10];
    int q=0;
    int tmp = 0;
    for (i = 0; i<10; i++){
        scanf("%c", &arr[i]);
    }

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if (arr[i] == arr[j]){
                tmp++;
            }            
        }
        if(tmp == 1){
            result[q] = arr[i];
            q++;
        }
        tmp = 0;
    }
    for(i=0; i<q; i++){
        printf(" %c", result[i]);
    }

}
int main(void){
    // P1();
    // P2();
    // P3();
    // P4();
    // P5();
    // P6(); // check
    // P7(); // ★★ 배열에 10개의 정수를 입력 받아서 저장하고 (동일 정수가 반복 입력 될 수 있음), 
             //저장된 정수를 중복 없이 한 번씩만 출력 하시오

    // P8();
    P9(); // 테크닉
    // P10();
    // P11();
    // P12();
    // P13();
    // P14();
    // P15();
}