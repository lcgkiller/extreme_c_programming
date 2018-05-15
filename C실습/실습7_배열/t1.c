#include <stdio.h>

void P1(){
    int arr[5];
    int i=0;
    int sum = 0;
    double avg;

    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<5; i++){
        sum += arr[i];
    }
    avg = sum / 5.0;

    for(i=0; i<5; i++){
        if (arr[i] > avg) printf("%d\n", arr[i]);
    }
    
}

void P2(){
    char arr[7];
    int i=0;
    int cnt=0;
    for(i=0; i<7; i++){
        scanf("%c", &arr[i]);
    }
    for(i=0; i<5; i++){
        if(arr[i] == 'c' && arr[i+1]=='a' && arr[i+2]=='t') cnt++;
    }

    printf("%d\n", cnt);
}

void P3(){
    int arr[10];
    int i=0;
    int max;
    int sec_max;
    int num;

    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1]){
        max = arr[0];
        sec_max = arr[1];
    }
    else{
        max = arr[1];
        sec_max = arr[0];
    }
    for(i=2; i<num; i++){
        if(max < arr[i]){
            sec_max = max;
            max = arr[i];
        }

        else if (sec_max < arr[i] && sec_max < max){
            sec_max = arr[i];
        }
    }
    printf("%d\n%d", max, sec_max);
}

void P4(){
    int arr[10];
    int i=0;
    int cnt1 =0, cnt2=0, cnt3=0; 
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<10; i++){
        if(arr[i]==1) cnt1++;
        else if(arr[i]==2) cnt2++;
        else cnt3++;
    }

    printf("1:");
    for(i=0; i<cnt1; i++){
        printf("*");
    }
    printf("\n");
    printf("2:");
    for(i=0; i<cnt2; i++){
        printf("*");
    }
    printf("\n");
    printf("3:");
    for(i=0; i<cnt3; i++){
        printf("*");
    }
    printf("\n");
}

void P5(){
    int i=0, j=0, k=0;
    char arr[5];
    for(i=0; i<5; i++){
        scanf("%c", &arr[i]);
    }

    for(i=0; i<5; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
    for(i=0; i<4; i++){
        char temp = arr[4];
        for(j=3; j>=0; j--){
            arr[j+1] = arr[j];
        }
        arr[0] = temp;
        for(j=0; j<5; j++){
            printf("%c", arr[j]);
        }
        printf("\n");
    }
}

void P6(){
    int i=0, j=0, cnt=0;
    char arr[3];
    char result[3] = {'_', '_', '_'};
    char input;
    int quit = 3;

    for(i=0; i<3; i++){
        scanf("%c", &arr[i]);
    }
    getchar();
    while(cnt<5){
        scanf("%c", &input);
        getchar();
        for(i=0; i<3; i++){
            if (arr[i] == input){
                result[i] = input;
                quit--;
            }
        }
        for(i=0; i<3; i++){
            printf(" %c ", result[i]);
        }
        if(quit == 0) break;
        printf("\n");
        cnt++;
    }
}
void P7(){
    int arr[10];
    int k[10];
    int v[10] = {0,};
    int i, j;
    int n=0;

    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<10; i++){
        if(i==0){
            k[i] = arr[i];
            v[i]++;
            n++;
        }
        else{
            int flag=0;
            for(j=0; j<n; j++){
                if(k[j] == arr[i]){
                    flag = 1;
                    break;
                }
            }

            if (flag){
                v[j]++;
            }
            else{
                k[n] = arr[i];
                v[n]++;
                n++;
            }
        }
    }

    for(i=0; i<n; i++){
        printf("%d %d\n", k[i], v[i]);
    }
}

void P8(){
    int i, j;
    int arr[5];
    int max;
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<4; i++){
        if (arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    for(i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }
}

void P9(){
    int arr[5];
    int i, j;

    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }
}
int main(void){
    // P1();
    // P2();
    // P3();
    // P4();
    // P5();
    // P6();
    // P7();
    // P8();
    P9();
}