#include "header2.h"
/*  TODO:  Create a function called 'zkf' that takes a pointer to a 'struct zkz' and an int.  The function should set the struct's only member to the bitwise not of the int that gets passed.
Check the header file to find out what the structure definition and function prototype looks like.
*/


void zkf(struct zkz *q, int a)
{
 q->wvn=~a;
}
	
