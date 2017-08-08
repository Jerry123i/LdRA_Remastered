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

extern int dmg;
extern int dmg_dox;

int calc_roll(int base, int mod) {
    
    int test;
    
    test = base + mod - ((dmg+dmg_dox)*5);
    
    if(test>=100){
        test=95;
    }
    
    if(test<=0){
        test=5;
    }
    
    return test;

}

