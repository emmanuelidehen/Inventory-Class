//
//  Inventory.h
//  Inventory
//
//  Created by Emmanuel Idehen on 1/24/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//  Header file 

#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory
{
private:
    
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
    
public:
    Inventory();
    Inventory(int,int,double);
    void setItemNumber(int);
    void setQuantity(int);
    void setCost(double );
    void setTotalCost(int, double);
    int getItemNumber();
    int getQuantity();
    double getCost();
    double getTotalCost();
    ~Inventory();
    
    class shirt
    {
    private:
        int size;
       
        
    };
    
    
    
    
};
class myInventory{
    Inventory x;
    
    
    
    
};

#endif /* Inventory_h */
