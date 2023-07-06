/*
 * Auth: Nathan Stone
 * Date: 7-6-23  (Due: 7-9-23)
 * Course: CSCI-3550 (Sec: 850)
 * Desc:  PREPROJECT-02, Take in CLI arguments, format and print them
 */
#include<stdio.h>

int main( int argc, char *argv[] ) {
  int i;

  /*Check if arguments were passed or not*/
  if ( argc == 1 ) {
    printf("ERROR: Must supply one or more arguments.  Try again.");
  }
  
  else {

    /*Print the program name and how many arguments*/
    printf( "Program Name: \"%s\"\n", argv[0] );
    printf( "Arguments: %d\n", argc-1);
    
    /*Perform the loop to print out the arguments*/
    for (i = 1; i < argc; i++) {
        printf("argv[%d]: \"%s\"\n",i,argv[i]);  
    }
  }
  
  return 0;
} /* end main() */