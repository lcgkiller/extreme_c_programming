#include <stdio.h>

void P1(){
    char arr[100];
    int cnt=0;
    int num1=0, num2=0, num3=0, num4=0;
    int c;
    int i;
    do{
        scanf("%c", &c);
        if(c=='*') break;
        arr[cnt++] = c;
        if(c>='a' && c<='z') num2++;
        else if(c>='A' && c<='Z') num1++;
        else if(c>='0' && c<='9') num3++;
        else num4++;
    }while(c!='*');

    for(i=cnt-1; i>=0; i--){
        printf("%c", arr[i]);
    }
    printf("\n");
    printf("%d %d %d %d", num1, num2, num3, num4);
}

void P2(){
    int arr[100];
    int num;
    int i, j;

    scanf("%d", &num);
    for(i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for(i=0; i<num-1; i++){
        for(j=0; j<num-1; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i=0; i<num; i++){
        printf("%d ", arr[i]);
    }

}

float grade(int a, int b, int c){
    int sum = a+b+c;
    return sum/3.0;
}
void P3(){
    int a,b,c;
    float result = 0;
    scanf("%d %d %d", &a, &b, &c);
    result = grade(a,b,c);

    if(result>=91.5) printf("A");
    else if(result>=82.5) printf("B");
    else if(result>=72.5) printf("C");
    else printf("F");
    
}
void P4(){
    int arr[10];
    int i;
    int sum=0;
    int input;
    int cnt=0;

    scanf("%d", &input);

    while(input != 0){
        arr[cnt++] = input % 10;
        sum += input % 10;
        input /= 10;
    }

    for(i=0; i<cnt/2; i++){
        if(arr[i] != arr[cnt-1-i]){
            printf("%d\nNo\n", sum);
            return ;
        }
    }
    printf("%d\nYes\n", sum);
    
}

void P5(){
    char arr[100];
    int cnt=0;
    int cnt1 = 0, cnt2 = 0; // 대문자 // 소문자
    int i;
    char c;
    int max1=0, max2=0; // 대문자 연속, 소문자 연속
    do{
        scanf("%c", &c);
        if(c=='*') break;
        arr[cnt++] = c;
    }while(c!='*');

    for(i=0; i<cnt; i++){

        // flag : 0 대문자, flag : 1 소문자
        int flag = (arr[i+1] >= 'a' && arr[i+1] <= 'z');

        if(arr[i] >= 'a' && arr[i] <= 'z'){ // 소문자
            cnt2++;
            // printf("소문자 : %c, 개수 : %d\n", arr[i], cnt2);
            if (max2 < cnt2) max2 = cnt2;
            if (flag){ // 다음문자가 소문자인 경우
                continue;
            }
            else{ // 다음문자가 대문자인 경우
                cnt2=0;
            }
        }
        else if(arr[i] >= 'A' && arr[i] <= 'Z'){ // 대문자
            cnt1++;
            // printf("대문자 : %c, 개수 : %d\n", arr[i], cnt1);
            if (max1 < cnt1) max1 = cnt1;
            if (flag){ // 다음문자가 소문자인 경우
                cnt1=0;
            }
            else{ // 다음문자도 대문자인 경우
                continue;
            }
        }
    }
    printf("%d\n%d",max1, max2);
}

void print_1(int x, int y){
    int i;
    if ( x > y){
        int temp = y;
        x = y;
        y = temp;
    }

    for(i=1; i<=y; i++){
        printf("%d", i);
    }
    printf("\n");
}
void print_2(int x, int y){
    int i;
    if ( x > y){
        int temp = y;
        x = y;
        y = temp;
    }

    for(i=1; i<=y; i++){
        if(i==1) printf("1");
        else if(i==y) printf("%d", i);
        else printf(" ");
    }
    printf("\n");
}

void P6(){
    int a,b;
    int i, j;
    int num;
    scanf("%d", &num);
    b = num % 10;
    a = (num / 10) % 10;

    for(i=0; i<a; i++){
        if(i==0 ||i==a-1){
            print_1(a,b);
        }
        else{
            print_2(a,b);
        }
    }
}

void P7(){
    int arr[200];
    int input;
    int i;
    int sum=0;
    int max = 0;
    scanf("%d", &input);
    for(i=0; i<input; i++){
        scanf("%d", &arr[i]);
    }

    max = arr[0] + arr[input-1];
    if (input==1) max = arr[0];
    else{
        if (input % 2 == 0){
            for(i=0; i<input/2; i++){
                if (max < (arr[i] + arr[input-1-i])) max = arr[i] + arr[input-1-i];
            }
        }
        else{
            for(i=0; i<input/2; i++){
                if (max < (arr[i] + arr[input-1-i])) max = arr[i] + arr[input-1-i];
                if (max < arr[input/2]) max = arr[input/2];
            }
        }
    }

    printf("%d\n", max);
}
int main(void){
    P7();
    return 0;
}