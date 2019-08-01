#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>


/**
 * startupfun - Executes after main
 */
void startupfun(void)
{
	char *str1;
	char *str2;

	str1 = "You're beat! and yet, you must allow,\nI bore my house upon";
	str2 = " my back!\n";

	printf("%s%s", str1, str2);

}
