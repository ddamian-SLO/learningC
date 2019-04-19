/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   celcToFahr.c
 * Author: Davis
 *
 * Created on April 18, 2019, 8:03 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
main(){
    
    float celcius, fahr;
    int lower, upper, step;
    
    lower = -10;
    upper = 150;
    step = 10;
    
    celcius = lower;
    printf("%3s %6s\n%3s %6s\n", "C", "F", "---", "---");
    while (celcius <= upper) {
        fahr = (9.0/5.0) * celcius + 32;
        printf("%3.0f %6.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
}
