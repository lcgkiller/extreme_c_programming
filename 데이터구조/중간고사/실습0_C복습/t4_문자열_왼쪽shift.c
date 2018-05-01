#include <stdio.h>
#include <string.h>

int main( void)
{
   char  ptr[101];
   char  tmp;
   int   ndx;
   scanf("%s",ptr);

   for ( ndx = 0; ndx < strlen(ptr); ndx++)
   {
      printf( "%s\n", ptr);              // 현재의 ptr 출력
      
      tmp   = ptr[0];                    // ptr의 첫번째 문자
      memmove( ptr, ptr+1, strlen(ptr)); // 2번째문자부터 끝문자까지 복사
      ptr[strlen(ptr)] =  tmp;           // ptr 끝에 보관해둔 첫번째 문자 
   }
   return 0;
}