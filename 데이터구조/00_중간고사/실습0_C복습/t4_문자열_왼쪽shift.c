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
      printf( "%s\n", ptr);              // ������ ptr ���
      
      tmp   = ptr[0];                    // ptr�� ù��° ����
      memmove( ptr, ptr+1, strlen(ptr)); // 2��°���ں��� �����ڱ��� ����
      ptr[strlen(ptr)] =  tmp;           // ptr ���� �����ص� ù��° ���� 
   }
   return 0;
}