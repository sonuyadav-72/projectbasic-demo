#include <stdio.h>
int main ()
{
    float radius ; 
    scanf ("radius of a circle : 5%f", &radius) ; 
    float pi = 3.1415 ;
    float area = pi*radius*radius ;
    printf ("Area of a Circle is : %f", area) ;
    
    return 0 ;
}
