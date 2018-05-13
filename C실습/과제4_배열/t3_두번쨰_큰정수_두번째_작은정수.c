#include <stdio.h>

void P3(){
    int arr[10];
    int i=0;
    int max;
    int sec_max; // 두번쨰 큰 정수
    int num;
    int min;
    int sec_min; // 두번째 작은 정수

    scanf("%d", &num);

    for(i=0; i<num; i++){ // 사용자 입력을 받음
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1]){ // 초기 max, min값, sec_max, sec_min값 지정을 위한 if문
        max = arr[0]; 
        sec_max = arr[1];
        min = arr[1];
        sec_min = arr[0];
    }
    else{ // 초기 max, min값, sec_max, sec_min값 지정을 위한 if문
        max = arr[1];
        sec_max = arr[0];
        min = arr[0];
        sec_min = arr[1];
    }

    for(i=2; i<num; i++){
        if(max < arr[i]){ // arr[i]값이 max보다 크다면 
            sec_max = max; // max값이 sec_max가 되고 
            max = arr[i];  // 새로 들어온 arr[i]가 max값이 된다.
        }

        else if(sec_max < arr[i] && arr[i] <= max){ // 만약 새로들어온 arr[i]값이 sec_max보다 크고, max보다 작다면
            sec_max = arr[i];   // 새로들어온 arr[i]값이 sec_max가 된다.
        }

        if(min > arr[i]){ // 새로들어온 arr[i] 값이 min보다 작다면, 
            sec_min = min; // 이전의 min값이 sec_min로 뒤로 밀려나고
            min = arr[i]; // 새로 들어온 arr[i] 값이 min 자리를 차지한다.
        }

        else if (sec_min > arr[i] && sec_min >= min){ // arr[i]가 sec_min보다는 작지만, min보다는 크다면
            sec_min = arr[i]; // 두번째 큰 값은 sec_min이 된다.
        }
    }
    printf("%d\n%d", sec_max, sec_min);
}
int main(void){
    P3();
}