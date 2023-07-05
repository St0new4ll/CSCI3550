/*
 * Auth: Nathan Stone
 * Date: 7-5-23  (Due: 7-9-23)
 * Course: CSCI-3550 (Sec: 850)
 * Desc:  PREPROJECT-01, A Simple "Hello, World" C program.
 */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main( void )  {

	/* Personalized hello. */
	printf( "Hello, World, from John/Jane Doe!\n" );

	/* Proper way to finish a program in a POSIX-system. */
	exit( EXIT_SUCCESS );

} /* end main() */