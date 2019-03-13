//
//  Inventory.cpp
//  Inventory
//
//  Created by Emmanuel Idehen on 1/24/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//

#include <stdio.h>
#include "Inventory.h"
#include <iostream>
using namespace std;
Inventory::Inventory() //default contructor
{
    //initialise variable to 0
    itemNumber = 0;
    quantity = 0;
    cost = 0.0;
    totalCost = 0.0;
}
Inventory::Inventory(int nummber, int amount, double cost2) //specific constructor
{
    setItemNumber(nummber);
    setTotalCost(amount, cost2);
    setQuantity(cost2);
    setCost(cost2);
    
}

void Inventory::setItemNumber(int itemNumber1) // setItem function
{
     itemNumber = itemNumber1;
}
void Inventory:: setQuantity(int quantity1) //SetQuantity Function
{
    quantity = quantity1;
}
void Inventory:: setCost(double cost1) //SetCost Function
{
    cost = cost1;
}
void  Inventory:: setTotalCost(int quantity1, double cost1) //setTotalCost Function
{
    totalCost = (quantity1 * cost1);
}

int Inventory::getItemNumber() //getItemNumber Function
{
    return itemNumber;
}
int Inventory::getQuantity() //getQuantity Function
{
    return quantity;
}
double Inventory:: getCost() //getCost Function
{
    return cost;
}
double Inventory:: getTotalCost() //getTotalCost Functions
{
    return totalCost;
}

Inventory::~Inventory(){  //distrutor 
    
}




