//  main.cpp
//  carClasses.cpp
//
//  Created by Sekou  on 2/12/17.
//  Copyright © 2017 Skou . All rights reserved.
//

#include <iostream>
#include <string>
#include "vehicle.h"

using namespace std;


int main() {
    
    const int numberOfVehicle = 8;
    
    vehicle V;
    //   vehicle V2("Ferrary");
    vehicle vArr[numberOfVehicle];
    
    cout << V.getName() << endl;
    // cout << V2.getName() << endl;
    
    string vehicleType;
    int numDoors;
    int maxSpeed;
    
    for(int i = 0; i < numberOfVehicle; i++){
        cout << "\nPlease enter the vehicle type " << i+1 << ":";
        getline (cin, vehicleType);
        vArr[i].setName (vehicleType);
        
        cout << "\nenter the number of doors of vehicle " << i+1 << ":";
        cin >> numDoors;
        // cin.ignore();
        vArr[i].setDoor(numDoors);
        
        cout << "\nenter the maximun speed of vehicle " << i+1 << ":";
        cin >> maxSpeed;
        cin.ignore();
        vArr[i].setSpeed(maxSpeed);
    }
    
    /* int i = 0;
     while(i < numberOfVehicle) {
     cout <<"Vehicle " << i+1 << " = " << vArr[i].getName() << "has,"
     << vArr[i].getDoor()<< " doors and it runs "
     << vArr[i].getSpeed() << " MPH." << endl;
     i++;
     }*/
    
    for(int i = 0; i < numberOfVehicle; i++)
    {
        cout <<"\nVehicle " << i+1 << " = " << vArr[i].getName() << "has,"
        << vArr[i].getDoor()<< " doors and it runs "
        << vArr[i].getSpeed() << " MPH." << endl;
    }
    
    return 0;
}
