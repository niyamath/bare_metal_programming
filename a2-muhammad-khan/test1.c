#include "header1.h"
/*  TODO:  Create a function called 'lio' that takes a pointer to a 'struct tjb' and an int.  The function should set the struct's only member to the logical negation of the int that gets passed.
Check the header file to find out what the structure definition and function prototype looks like.
*/
	
void lio(struct tjb *q, int a )
{

(*q).miz=!a;
}
