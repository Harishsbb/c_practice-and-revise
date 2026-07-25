Question 1 – Basic Pointer

\#include <stdio.h>



int main()

{

&#x20;   int a = 10;

&#x20;   int \*p = \&a;



&#x20;   printf("%d\\n", a);

&#x20;   printf("%d\\n", \*p);



&#x20;   return 0;

}



Question:



What is the output?

10

10

Why?

a=10

pointer p stores a's address so it has same 10

pf(a) gives 10

pf(\*p) also print 10 // because p stores address of a and pf has %d this is integer so it will print stored integer number 

suppose i give %p it will print stored memory address 





Question 2 – Change Value Using Pointer

\#include <stdio.h>



int main()

{

&#x20;   int a = 10;

&#x20;   int \*p = \&a;



&#x20;   \*p = 50;



&#x20;   printf("%d\\n", a);

&#x20;   printf("%d\\n", \*p);



&#x20;   return 0;

}



Question:



What is the output?

50

50

Why did a change?



same as first question but this time we changed \*p value ,the value is 50 it will be replace the main a variable also so a = 50

\*p=50 





Question 3 – Two Pointers

\#include <stdio.h>



int main()

{

&#x20;   int a = 10;



&#x20;   int \*p = \&a;

&#x20;   int \*q = p;



&#x20;   \*q = 100;



&#x20;   printf("%d\\n", a);

&#x20;   printf("%d\\n", \*p);

&#x20;   printf("%d\\n", \*q);



&#x20;   return 0;

}



Question:



What is the output?

10

10

10

Do p and q point to different memory or the same memory?



same memory 

Question 4 – Array Pointer

\#include <stdio.h>



int main()

{

&#x20;   int arr\[] = {10,20,30};



&#x20;   int \*p = arr;



&#x20;   printf("%d\\n", \*p);

&#x20;   printf("%d\\n", \*(p+1));

&#x20;   printf("%d\\n", \*(p+2));



&#x20;   return 0;

}



Question:



What is the output?

10

20

30

Why does p+1 print 20?

\*p print first value of array 
so p+1 it will to another value like p++ so it will point p\[1] -----> p\[1] is 20 ,so it will print 20 


Question 5 – Pointer Arithmetic

\#include <stdio.h>



int main()

{

&#x20;   int arr\[] = {10,20,30};



&#x20;   int \*p = arr;



&#x20;   p++;



&#x20;   printf("%d\\n", \*p);



&#x20;   return 0;

}



Question:



What is the output?

20

Where is p pointing now?

p\[1]



Question 6 – Function with Pointer

\#include <stdio.h>



void update(int \*x)

{

&#x20;   \*x = \*x + 5;

}



int main()

{

&#x20;   int a = 10;



&#x20;   update(\&a);



&#x20;   printf("%d\\n", a);



&#x20;   return 0;

}



Question:



What is the output?

15

Why did the function change a?

because update function get a parameter of a in this case pointer update function is doing a+5, x point as a ,then a change to 10+5=15 seeing 10 address and it will be change 


Question 7 – malloc()

\#include <stdio.h>

\#include <stdlib.h>



int main()

{

&#x20;   int \*p;



&#x20;   p = malloc(sizeof(int));



&#x20;   \*p = 99;



&#x20;   printf("%d\\n", \*p);



&#x20;   free(p);



&#x20;   return 0;

}



Question:



Where is 99 stored?

in p variable

Why do we use free()?

it will free  the allocted memory in ram heap





Question 8 – calloc()

\#include <stdio.h>

\#include <stdlib.h>



int main()

{

&#x20;   int \*p;



&#x20;   p = calloc(3, sizeof(int));



&#x20;   printf("%d %d %d\\n", p\[0], p\[1], p\[2]);



&#x20;   free(p);



&#x20;   return 0;

}



Question:



What is the output?

000

Why?



because calloc defaultly take it as 0





Question 9 – realloc()

\#include <stdio.h>

\#include <stdlib.h>



int main()

{

&#x20;   int \*p;



&#x20;   p = malloc(2 \* sizeof(int));



&#x20;   p\[0] = 10;

&#x20;   p\[1] = 20;



&#x20;   p = realloc(p, 4 \* sizeof(int));



&#x20;   p\[2] = 30;

&#x20;   p\[3] = 40;



&#x20;   for(int i = 0; i < 4; i++)

&#x20;   {

&#x20;       printf("%d ", p\[i]);

&#x20;   }



&#x20;   free(p);



&#x20;   return 0;

}



Question:



What is the output?

10,20,30,40

Why do we need realloc()?

first we allocate 2 memory only but loop need 4 in this case we realloc address as 4 







Question 10 – Pointer to Pointer

\#include <stdio.h>



int main()

{

&#x20;   int a = 10;



&#x20;   int \*p = \&a;

&#x20;   int \*\*pp = \&p;



&#x20;   \*\*pp = 50;



&#x20;   printf("%d\\n", a);

&#x20;   printf("%d\\n", \*p);

&#x20;   printf("%d\\n", \*\*pp);



&#x20;   return 0;

}



Question:



What is the output?

50 50 50

Explain how \*\*pp = 50 changes a.



\#include <stdio.h>



int main()

{

&#x20;   int a = 10;



&#x20;   int \*p = \&a;

&#x20;   int \*\*pp = \&p;



&#x20;   \*\*pp = 50; // here we change \*\*pp=50 it has address of p ,so p value also 50 ,p point address of a ,so a value also 10 ,pp--->p---->a

//in this case pp\*\* will change a value of a as 50  



&#x20;   printf("%d\\n", a);

&#x20;   printf("%d\\n", \*p);

&#x20;   printf("%d\\n", \*\*pp);



&#x20;   return 0;

}

