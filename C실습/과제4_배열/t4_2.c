#include <stdio.h>



int main(void){
    int arr[20]; // �Է� �迭
    int num; // �Է��� ���� ����
    int i=0;
    int min=21, max=-1; // �Է°��� ���� ����
    int max_arr[10]; // max�迭 ����
    int min_arr[10]; // min�迭 ����
    int p=0, q=0; // max, min�迭�� �ε��� ��
    int index = 0;  // 0, 3, 6 ������ �ٴ� index
    int innerIndex = 0; // 0, 1, 2, 3, ... ������ �ٴ� index

    scanf("%d", &num);
    for(i=0; i<num; i++){ // �Է��ϴ� ����
        scanf("%d", &arr[i]);
    }

    for(i=num-1; i>=0; i--){ // �Ųٷ� ����ϴ� ����
        printf(" %d", arr[i]);
    }
    printf("\n");
    while( index < num ) {
        min = max = arr[innerIndex]; // min, max�� �ֱ����� ��ü
        while (innerIndex < num && ( innerIndex < index + 3)){ // innerIndex�� �Է°��� �����ϰ�, innerIndex�� 3�� �ٴ� index���� �ʰ��ϸ� while�� Ż�� 
            printf("index : %d, innerIndex : %d\n", index, innerIndex);
            if (min > arr[innerIndex]){ // min ��ü ����
                min = arr[innerIndex];
            }
            if (max < arr[innerIndex]){ // max ��ü ����
                max = arr[innerIndex];
            }
            innerIndex++;
        }
        max_arr[p++] = max; // max ����
        min_arr[q++] = min; // min ����
        index += 3; // index = 0, 3, 6, 9 �� ����
        innerIndex = index; 
    }
    for(i=0; i<p; i++){ // max �迭 ���
        printf(" %d", max_arr[i]);
    }
    printf("\n");
    for(i=0; i<q; i++){ // min �迭 ���
        printf(" %d", min_arr[i]);
    }
    return 0;

}