/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * Archivo:   main.cpp
 * Autor: Kei Shimabukuro Kohatsu
 * Código: 20210477
 *
 * Creado el 27 de agosto de 2023, 02:00
 */

#include <iostream>
#include <iomanip>
#include <cmath>        
#include "Funciones.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int n = 4; //cantidad de productos
    int m = 5; //las divisiones para transportar los productos
    int c = 20; //Maximo peso posible en el camión
    
    int Bahia[][4] = 
    {
        {2,5,6,10}, //Bahia 1
        {7,8,15,3}, //Bahia 2
        {11,9,6,4}  //Bahia 3
    };
    
    int i, j,k, z,x;
    int cromo1[n], cromo2[n], cromo3[n];
    int pesoParcial, contador;
    
    
    int opciones = pow(2,n);
    
    for(i=0;i<opciones;i++){ //Bahía 1: 1011
        
        llenarCromo(i,cromo1,n);
        
        for(j=0;j<opciones;j++){ //Bahía 2: 0011
            
            llenarCromo(j,cromo2,n); 
           
            
            
            for(k=0;k<opciones;k++){ //Bahía 3: 0001
                
                pesoParcial = 0;
                contador = 0;
                
                llenarCromo(k,cromo3,n);
                
                for(z=0;z<n;z++){ //Recorre el arreglo
                    
                    if(cromo1[z] == 1){
                        
                        pesoParcial = pesoParcial + cromo1[z]*Bahia[0][z];
                        contador++;
                    }
                    
                    if(cromo2[z] == 1){
                        
                        pesoParcial = pesoParcial + cromo2[z]*Bahia[1][z];
                        contador++;
                    }
                    
                    if(cromo3[z] == 1){
                        
                        pesoParcial = pesoParcial + cromo3[z]*Bahia[2][z];
                        contador++;
                    }
                    
                    
                    
                    
                }
                
                if(pesoParcial == c and contador == m){
                    
                    cout << "Bahia 1: ";
                    for(x=0;x<n;x++){ //Se necesito emplear otro indice ya que el indice i ya estaba ocupado
                        
                        if(cromo1[x]==1){
                            
                            cout << Bahia[0][x] << " ";
                            
                            
                        }
                        
                        
                    }
                    
                    cout << "Bahia 2: ";
                    for(x=0;x<n;x++){
                        
                        if(cromo2[x]==1){
                            
                            cout <<  Bahia[1][x] << " ";
                            
                            
                            
                        }
                        
                        
                    }
                    
                    cout << "Bahia 3: ";
                    for(x=0;x<n;x++){
                        
                        if(cromo3[x]==1){
                            
                            cout << Bahia[2][x] << " ";
                            
                            
                            
                        }
                        
                        
                    }
                    cout << endl;
                    
                    
                    
                    
                    
                }
                
               
                
                
            }
            
            
            
        }
        
        
    }
    
    
    
    
    
    
    return 0;
}

