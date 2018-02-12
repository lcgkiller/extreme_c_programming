#include <stdio.h>

int main(void){
    int grade[5][5];
    int i=0, j=0, sum1=0, sum2=0, total=0;
    int input;

    printf("성적 입력 : ");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            scanf("%d", &input);
            grade[i][j] = input;
            sum1 += grade[i][j];
        }
        grade[i][4] = sum1;
        sum1 = 0;
    }

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            sum2 += grade[j][i];
        }
        grade[4][i] = sum2;
        sum2 = 0;
    }
    
    for(i=0; i<4; i++){
        total += grade[i][4];
    }
 
    grade[4][4] = total;

    for(i=0; i<5; i++){        
        for(j=0; j<5; j++){
            sum2 = grade[j][i];
            printf("%4d ", grade[i][j]);
        }
        printf("\n");
    }
    return 0;
}