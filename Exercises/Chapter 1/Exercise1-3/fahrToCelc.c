/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Davis
 *
 * Created on April 18, 2019, 5:54 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Print Fahrenheit-Celcius table
 * for fahr = 0, 20, ..., 300 
 */
main(){
    float fahr, celcius;
    int lower, upper, step;
    
    lower = 0;      /* Lower limit of temperature table */
    upper = 300;    /* Upper limit of temperature table */
    step = 20;      /* step size */
    
    fahr = lower;
    printf("%3s %6s\n%3s %6s\n", "F", "C", "---", "---"); /* Exercise 1-3, format a header for the output of Celcius to Fahrentheit. */
    while (fahr <= upper) {
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}

