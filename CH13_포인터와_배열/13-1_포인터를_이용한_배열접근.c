#include <stdio.h>

int main()
{
    int arr[3] = {1, 2, 3};
    int * ptr = arr;
    int i;

    for(i=0; i<3; i++){
        printf("%d\n", arr[i]);
        
    }

    /* ������ ���� ptr�� ����� ���� ������Ű�� ������ ������ ������� +2�� �ϱ� */
    for(i=0; i<3; i++){
        * ptr += 2;
        ptr ++;
    }

    for(i=0; i<3; i++){
        printf("%d\n", arr[i]);
    }

    /* ������ ���� ptr�� ����� ���� �����Ű�� �ʰ�, ptr�� ������� ���������� �Ͽ�, �� ����� ��ȯ�Ǵ� �ּ� ���� ���ؼ� +2�� �ϱ� */
    
    for(i=0; i<3; i++){
        printf("���⼭ ���� ptr���� ������ ���� ����Ŵ: %x\n", ptr+i);
        *(ptr+i) += 2;

    }

    for(i=0; i<3; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}

