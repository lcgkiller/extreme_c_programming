#include<stdio.h>

void reverseRecursive(int x){
    if (x==0)
        return;
    
    printf("%d\n", x%10);
    reverseRecursive(x/10);
}

void Recursive(int x)
{
    if(x==0)
        return;
    
    Recursive(x/10); 
    printf("%d\n", x%10);
}

int main()
{
    int x; 
    scanf("%d", &x);
    
    // Recursive(x);
    reverseRecursive(x);

    return 0;
} 
   