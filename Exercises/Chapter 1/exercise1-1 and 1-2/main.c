/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Davis
 *
 * Created on April 18, 2019, 5:27 PM
 */
/* Exercise 1-1 has you break this program to see what errors you get.
 *
 * Commenting out #include <stdio.h> makes the program not recognize printf. It will say that it has not been defined.
 * Commenting out #include <stdlib.h> doesn't seem to do anything right now.
 * Separating "hello," and "world\n" with a new line makes the program unable to compile. It is expecting a terminating end double quote and does not receive one. 
 * 
 */

/*
 * Exercise 1-2 has you inputting \c into your string argument. 
 * Result: printf ignores \c and just outputs c in the middle of the string.
 * Error in IDE says: Unknown escape character '\c'.
 */

#include <stdio.h> 
#include <stdlib.h>

/*
 * 
 */
main(){
    printf("hello, world\n"); // Exercise 1-1
    printf("Hello\c world"); // Exercise 1-2
}
