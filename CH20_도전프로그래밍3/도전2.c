#include<stdio.h> 

int main(void)
{
    int arr[50][50]; 
    int len,  i, j; 
    int s=0, w=-1, inc=1, val=0; 

    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf("%d", &len); 

    while(1) 
	{
        for(i=0; i<len;i++) // ���� ���� �׸� 
		{
            val++; 
            w=w+inc; // w = -1 + 1 = 0
            printf("���� : %d\n", w);
            arr[s][w]=val;
        }
        len=len-1; 

        if(val==len*len) 
			break; 

        for(i=0; i<len; i++) // ���� ���� �׸�
		{ 
            val++; 
            s=s+inc; 
            printf("���� : %d\n", s);
            arr[s][w]=val; 
        }
        inc=inc*(-1);
    }

    for(i=0; i<len; i++)  // ������ �迭 ���.  
	{ 
		for(j=0; j<len; j++) 
            printf("%5d", arr[i][j]); 
        printf("\n");
    } 

	return 0;
}

