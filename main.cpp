/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: MArc
 *
 * Created on 19 de septiembre de 2018, 9:27
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

/*
 * 
 */



int main(int argc, char** argv) {
    string repeat;
    int a, b;
    do{
        cout << "indica el valor del primer sumant: " << endl;
        cin >> a;
        cout << "indica el valor del segon sumant: " << endl;
        cin >> b;
        cout << "suma: " << a+b << endl;
        cout << "vols repetir la operacio (si/no): ";
        cin >> repeat;
    }while(repeat != "no");
    return 0;   
}

