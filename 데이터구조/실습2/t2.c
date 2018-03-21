#include<stdio.h>

int Recursive(int x)
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
    
    Recursive(x);
   } 
   