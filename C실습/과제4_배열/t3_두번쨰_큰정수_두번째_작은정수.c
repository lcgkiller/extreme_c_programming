#include <stdio.h>

void P3(){
    int arr[10];
    int i=0;
    int max;
    int sec_max; // �ι��� ū ����
    int num;
    int min;
    int sec_min; // �ι�° ���� ����

    scanf("%d", &num);

    for(i=0; i<num; i++){ // ����� �Է��� ����
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1]){ // �ʱ� max, min��, sec_max, sec_min�� ������ ���� if��
        max = arr[0]; 
        sec_max = arr[1];
        min = arr[1];
        sec_min = arr[0];
    }
    else{ // �ʱ� max, min��, sec_max, sec_min�� ������ ���� if��
        max = arr[1];
        sec_max = arr[0];
        min = arr[0];
        sec_min = arr[1];
    }

    for(i=2; i<num; i++){
        if(max < arr[i]){ // arr[i]���� max���� ũ�ٸ� 
            sec_max = max; // max���� sec_max�� �ǰ� 
            max = arr[i];  // ���� ���� arr[i]�� max���� �ȴ�.
        }

        else if(sec_max < arr[i] && arr[i] <= max){ // ���� ���ε��� arr[i]���� sec_max���� ũ��, max���� �۴ٸ�
            sec_max = arr[i];   // ���ε��� arr[i]���� sec_max�� �ȴ�.
        }

        if(min > arr[i]){ // ���ε��� arr[i] ���� min���� �۴ٸ�, 
            sec_min = min; // ������ min���� sec_min�� �ڷ� �з�����
            min = arr[i]; // ���� ���� arr[i] ���� min �ڸ��� �����Ѵ�.
        }

        else if (sec_min > arr[i] && sec_min >= min){ // arr[i]�� sec_min���ٴ� ������, min���ٴ� ũ�ٸ�
            sec_min = arr[i]; // �ι�° ū ���� sec_min�� �ȴ�.
        }
    }
    printf("%d\n%d", sec_max, sec_min);
}
int main(void){
    P3();
}