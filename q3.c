#include <stdio.h>

int main() {
    float base=5, height=3;
    double area;

    
    printf("enter a triangle edge and its height respectively:%d %d \n",base,height );
   
    
    area = 0.5 * base * height;


    printf("the triangel aerea is: %.3f\n", area);

   

  int base1=312.45 ,height1=20.012;
    float area1;
    printf("enter a triangle edge and its height respectively:%.2f %.3f \n",base1,height1 );
    area1 = 0.5 * base1 * height1;
     printf("the triangel aerea is: %.3f\n", area1);

      return 0;
}
