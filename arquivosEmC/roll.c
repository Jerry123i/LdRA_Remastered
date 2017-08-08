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

extern int dmg_dox;
extern int dmg;

int roll(int base, int mod) {
    
    int r;
    int test;
    
    test = calc_roll(base, mod);
    
    srand(time(NULL));
    
    do{
    r = rand() % 101 ;
    }while(r==0);
    
    if(r<=test){
        return 1;
    }
    
    else{
        return 0;
    }
}

