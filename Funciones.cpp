/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */


/* 
 * Archivo:   Funciones.cpp
 * Autor: Kei Shimabukuro Kohatsu
 * Código: 20210477
 *
 * Creado el 27 de agosto de 2023, 02:00
 */


#include <iostream>
#include <iomanip>
#include "Funciones.h"

using namespace std;


void llenarCromo(int num,int *cromo,int n){
    
    int i;
    for(i=0;i<n;i++) cromo[i] = 0;
    
    i = 0;
    int res;
    while(num>0){
        
        res = num % 2;
        num = num/2;
        
        cromo[i] = res;
        
        i++;
        
        
        
    }
    
    
    
}