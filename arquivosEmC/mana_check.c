/* 
 * File:   mana_check.c
 * Author: Usuario
 *
 * Created on 27 de Outubro de 2015, 18:11
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int mana_check(int cost, int tower) {

    extern int mana;
    extern int path;
    
    int a;
    
    if(path==tower){
        return(1);
    }
    
    else{
        if(cost>mana){
            printf("Você não possui mana o bastante");

            printf("\n\n1.Voltar...\n\n");
            scanf("%i",&a);

            return (0);
        }

        else{
        mana-=cost;
        return (1);
        }
    }
}

