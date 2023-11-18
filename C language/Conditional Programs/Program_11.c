#include <stdio.h>  
  
main()  
{  
    int no;  
  
    printf("Enter number\n");  
    scanf("%d", &no);  
  
    (no%2==0) ? (printf("Even number\n")):(printf("Odd  number"));  
}