#include<stdio.h> 

int main(void)
{
    int arr[100][100];
    int idx, i, j; 
    int width, height;
    int s=0, w=-1, inc=1, val=0; 

    scanf("%d %d", &height, &width); 

    while(1) 
	{
        for(i=0; i<width;i++) // 가로 단위 그림 
		{
            val++; 
            w=w+inc; 
            arr[s][w]=val;
        }
        idx=idx-1; 

        if(val==width*height) 
			break; 

        for(i=0; i<height; i++) // 세로 단위 그림
		{ 
            val++; 
            s=s+inc; 
            arr[s][w]=val; 
        }
        inc=inc*-1;
    }

    for(i=0; i<width; i++)  // 달팽이 배열 출력.  
	{ 
		for(j=0; j<height; j++) 
            printf("%5d", arr[i][j]); 
        printf("\n");
    } 

	return 0;
}

