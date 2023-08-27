//https://www.guru99.com/c-type-casting.html
#include <stdio.h>
void main() {
	//impilicit tvpe conversion
   int  num = 1;
   char c = 'a'; /* ASCII value is 97 */
   int sum;
   sum = num+ c;
   printf("sum = %d\n\n-------------------------\n", sum );
   
   
   //Explicit
   float a = 1.2;
	//int b  = a; //Compiler will throw an error for this
	int b = (int)a ;
	printf("Value of a is %f\n", a);
	printf("Value of b is %d\n",b);
}
