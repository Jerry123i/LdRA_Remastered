/* 
 * File:   clear.c
 * Author: Usuario
 *
 * Created on 30 de Setembro de 2015, 15:07
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

extern int dmg;
extern int dmg_dox;
extern int mana;

clear() {
    
    int a;
    int i;

    system("cls");
    
    printf("Saúde: ");
    printf("%d",(5-(dmg+dmg_dox)));
    printf("/5 ");
    
    
    printf("[");
    
    for(i=0; i<=(4-dmg-dmg_dox); i++){
        printf("O ");        
    }       
    
    for(i=0; i<=(dmg_dox-1);i++){
        printf("X ");
    }
    
    for(i=0; i<=(dmg-1);i++){
        printf("  ");
    }
    
    printf("\b]");
    
    printf("\nMana:   ");
    printf("%d",mana);
    printf("/5 ");
    
    printf("[");
    
    for(i=0; i<=(mana-1); i++){
        printf("O ");
    }
    
    for(i=0; i<=(5-mana-1);i++){
        printf("  ");
    }
    
    printf("\b]");
    
    printf("\n\n");

            
    return (EXIT_SUCCESS);
}

