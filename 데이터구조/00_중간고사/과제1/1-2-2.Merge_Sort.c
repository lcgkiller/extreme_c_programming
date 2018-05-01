#include <stdio.h>
#include <stdlib.h>

void merge(int * array, int start, int mid, int end){
    int * tmp = (int *)malloc(sizeof(int)*(end-start+1));
    int tmp_idx = 0;
    int p = start, q = mid+1;
    int i;

    for (i=tmp_idx; i<end-start; i++){
        while(p<=mid && q<=end){
            if(array[p]>array[q]){
                tmp[tmp_idx] = array[q];
                q++;
            }else{
                tmp[tmp_idx] = array[p];
                p++;
            }
            tmp_idx++;
        }
        if (p>mid){
            while(q<=end){
                tmp[tmp_idx] = array[q];
                q++;
                tmp_idx++;
            }
        }
        else{
            while(p<=mid){
                tmp[tmp_idx]=array[p];
                p++;
                tmp_idx++;
            }
        }
    }

    for(i=start; i<=end; i++){
        array[i] = tmp[i-start];
    }
        
    free(tmp);
}
void MergeSort(int * array, int start, int end){
    if(start>=end) return;

    int mid = (start+end)/2;

    MergeSort(array,start,mid);
    MergeSort(array, mid+1, end);
    merge(array, start ,mid, end);
}



int main(void){
	int * array;
	int i;
	int input;

	scanf("%d", &input);
    array = (int *)malloc(sizeof(int) * input);

	for (i = 0; i < input; i++) {
		scanf("%d", &array[i]);
	}

    MergeSort(array, 0, _msize(array)/sizeof(int)-1);

    for(i=0; i<input; i++){
        printf("%d ", array[i]);
    }

    return 0;
}