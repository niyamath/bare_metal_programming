#include "header3.h"
#include <stdlib.h>
/*  TODO:  For this problem, we are going to build a function that creates a linked list node.  Create a function called 'jlz' that takes a pointer to a 'struct mkd' and an item of type double.  The function should use malloc to allocate a new linked list node.  The 'struct mkd' pointer that was passed will be the pointer to the next node in the list after the newly allocated node.  You also need to initialize the member jov to the other value that was passed.
Check the header file to find out what the structure definition and function prototype looks like.
*/
	

  struct mkd * jlz(struct mkd *q, double a)
  {
   struct mkd *newnode= (struct mkd *)malloc(sizeof(struct mkd));
   newnode->next_mkd=q;
   newnode->jov=a;

   return newnode;



  }
