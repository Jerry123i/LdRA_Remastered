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

int dox(int base, int mod) {
    
    int r;
    int test;
    
    test = calc_dox(base, mod);    
    
    srand(time(NULL));
    
    do{
    r = rand() % 101 ;
    }while(r==0);
    
    cum_dox++;
    
    if(r<=test){
        return 1;
    }
    
    else{
        return 0;
    }
}

