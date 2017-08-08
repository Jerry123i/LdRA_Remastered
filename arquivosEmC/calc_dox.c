/* 
 * File:   roll.c
 * Author: Usuario
 *
 * Created on 4 de Outubro de 2015, 17:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

extern int tool;
extern int sleepers;
extern int cum_dox;

int calc_dox(int base, int mod) {
    
    int test;
    
    test = base + (sleepers*5) + (cum_dox*5) - (tool*20) + mod;
    
    if(test>=100){
        test=95;
    }
    
    if(test<=0){
        test=5;
    }
    
    return test;
}

