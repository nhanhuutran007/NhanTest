#include <stdio.h>
int main() {
    int a,b,max;
    printf("nhap so thu nhat:",a);
    scanf("%d",&a);
    printf("nhap vao so thu hai:",b);
    scanf("%d",&b);
    if ( a>b ) {   
       max= a ;
    } else { 
        max= b;
    }
   printf("max: %d\n",max);
   return 0;
}