#include <stdio.h>

int main(void){
    int i=0, j=0;
    int arr[10];
    int k[10]; // key�� ����
    int v[10] = {0, }; // value(count��)�� ���� (0���� �ʱ�ȭ�ϴ� ���� ����Ʈ)
    int index = 0;

    for(i=0; i<10; i++){  // ����ڷκ��� �迭 �Է�
        scanf("%d", &arr[i]);
    }

    for(i=0; i<10; i++){
        if(i==0){              // i=0�� ��쿡�� k[0], v[0]�� �ռ� �Է�
            k[i] = arr[i];     // ù key�� ����
            v[i]++;            // i=0�� ��� ù��° ���� ������ count++
            index++;           // k �迭�� ��ȸ�ϴ� index
        }
        else{
            int flag = 0;
            for(j=0; j<index; j++){ // index�� k�迭�� ��ȸ�ϱ� ����
                if(k[j] == arr[i]){ // ���� k�迭�� arr[i]�� ��ġ�ϴ� ���� ������
                    flag = 1;       // flag=1�� �����ϰ� for��Ż��
                    break;
                }
            }
            if (flag){
                v[j]++; // ��ġ�ϴ� ���� ������ v���� count�� ����
            }
            else{   // ��ġ�ϴ� ���� ���ٸ�
                k[index] = arr[i]; // ��ĭ ������ k[index]�� ���ο� �� arr[i]�� ����
                v[index]++;        // v���� �ϳ� �÷��ְ�
                index++;           // index���� �ϳ� �������Ѽ� k�迭�� ��ȸ�ϴ� �ε��� �� �÷��ش�.
            }
        }
    }

    for(i=0; i<index; i++){
        printf("%d %d\n", k[i], v[i]);
    }
}