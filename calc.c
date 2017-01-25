#include <stdio.h>

float add (float x, float y)
{
    return x + y;
}

int main()
{
    float a, b, r;
    char op;
    do {
       printf("number  op  number?  ");
       scanf(" %f %c %f", &a, &op, &b);
       switch (op)
       {
           case '+' : r = add(a,b);
                      break;
           case 'q' : break;
           default  : op='?';
       }
       if (op=='?')
          printf("Unknown operator\n");
       else if (op=='q')
          printf("Bye\n");
       else
          printf("%f %c %f = %f\n", a, op, b, r);
          printf("average %f", r);
  	  
  if (1 < a > 5)
	printf("Try again picking numbers between 1 and 5");
 else if (1 < b > 5);
        print("Try again picking numbers between 1 and 5");
    }
    

       
    while (op != 'q');
    
    return 0;
}

