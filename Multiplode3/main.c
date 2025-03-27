/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: 0076969
 *
 * Created on 27 de março de 2025, 09:41
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int soma = 0;
    //imrpimir 1000 e verificar se sao multiplos 
    
    for(int i = 0; i < 1000; i++){
        if(i%3 == 0 || i%5 == 0){
            soma += i;
        }
    }
    return (EXIT_SUCCESS);
}

