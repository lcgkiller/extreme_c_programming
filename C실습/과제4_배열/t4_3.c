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
    int origin_num;
    scanf("%d", &num);
    origin_num = num;
    for(i=0; i<num; i++){ // �Է��ϴ� ����
        scanf("%d", &arr[i]);
    }

    for(i=num-1; i>=0; i--){ // �Ųٷ� ����ϴ� ����
        printf(" %d", arr[i]);
    }
    printf("\n");

    int outerIndex = num % 3 == 0 ? num / 3 : num / 3 + 1; // ���� �ٱ��� while���� ���� ����, ���̰� 20�̶�� 20, 7, 2, 0 ������ �پ���. (min, max�迭�� ���̸� �����ϱ� ����)
    int flag = 1; // while�� �ȿ��� "ù��°" ����Ǵ� ���, arr�迭���� min�� max�迭�� �������ֱ� ����
    while(outerIndex != 0){ // ���� ���̰� 20�̶��, 20-> 7 -> 3 -> 1 -> 0������ ��������.
        while( index < num ) {

            if (flag){ // ù���� min, max�迭�� �����ϴ� ���� arr�� ����
                min = max = arr[innerIndex]; 
            }
            else{ // ù��° min, max�迭�� ������ ���Ŀ��� min�迭�� max�迭�� �������� ���� ����ش�.
                min = min_arr[innerIndex];
                max = max_arr[innerIndex];
            }
            while (innerIndex < num && ( innerIndex < index + 3)){ // innerIndex�� �Է°��� �����ϰ�, innerIndex�� 3�� �ٴ� index���� �ʰ��ϸ� while�� Ż�� 
                if(flag){
                    if (min > arr[innerIndex]){ // min ��ü ����
                        min = arr[innerIndex];
                    }
                    if (max < arr[innerIndex]){ // max ��ü ����
                        max = arr[innerIndex];
                    }
                }
                else{
                    if (min > min_arr[innerIndex]){ // min ��ü ����
                        min = min_arr[innerIndex];
                    }
                    if (max < max_arr[innerIndex]){ // max ��ü ����
                        max = max_arr[innerIndex];
                    } 
                }
                innerIndex++; // while�� Ż��
            }
            max_arr[p++] = max; // max ����
            min_arr[q++] = min; // min ����
            if (p==outerIndex && q==outerIndex){ // min, max �迭�� ���� p, q�� outerIndex�� �����ϸ� ����ϰ�, �ٽ� p�� q�� 0���� ����
                for(i=0; i<p; i++){ // max �迭 ���
                    printf(" %d", max_arr[i]);
                }
                printf("\n");
                for(i=0; i<q; i++){ // min �迭 ���
                    printf(" %d", min_arr[i]);
                }
                printf("\n");
                p = 0;
                q = 0;
            }
            index += 3; // index = 0, 3, 6, 9 �� ����
            innerIndex = index; 
        }
        num = outerIndex;
        flag = 0; // 
        innerIndex = index = 0;
        outerIndex = outerIndex % 3 == 0 ? outerIndex / 3.0 : outerIndex == 1 ? 0 : outerIndex/3.0 + 1; // outerIndex�� 3���� ������ ��������(TRUE) : /3 ��
                                                                                                        // ������ �������� ������(FALSE) outerIndex�� 1�̶�� 0���� ����� �� �ܴ̿� +1
        // printf("outerIndex : %d\n", outerIndex);
    }

    return 0;

}