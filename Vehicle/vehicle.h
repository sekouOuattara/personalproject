//
//  vehicle.h
//  carClasses.cpp
//
//  Created by Skou  on 2/14/17.
//  Copyright © 2017 Skou . All rights reserved.


#include <string>
using namespace std;

class vehicle {
public:
    // Default Constructor
    vehicle() {
        this->typeOfcar = "SUV ";
    }
    
    // Constructor initializer
    vehicle(const string& typeOfcar) {
        this->typeOfcar = typeOfcar;
    }
    
    // vehicle (string typeOfcar, int door, int speed)
  //  :Name {vehicleType}, Door{numberOfdoor}, Speed{maxSpeed} {
        
   // }
    
    void setName (string vehicleType){
        typeOfcar = vehicleType;
    }
    
    void setDoor(int numberOfdoor){
        door = numberOfdoor;
    }
    
    void setSpeed (int maxSpeed){
        Speed = maxSpeed;
        
    }
    
    string getName () const {
        return typeOfcar;
    }
    
    int getDoor (){
        return door;
        
    }
    
    int getSpeed (){
        return Speed;
        
    }
    
    void print(int numberOfVehicle);
    
private:
    string typeOfcar;
    int door;
    int Speed;
};


