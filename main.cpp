//
//  main.cpp
//  Inventory
//
//  Created by Emmanuel Idehen on 1/24/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//
/*
 
 
 
 
 
 Design an Inv e ntory class tha t can hold information for an item in a retail store's
 inventory. The class sho uld have the following private member variables.
 Variable Name
 itemNumber
 qua nt i t y
 cost
 Description
 An int that holds the item's number.
 An int that holds the quant ity of the item on hand .
 A do ubl e that holds the wholesale per-unit cost of the item
 The class should have the following public member functions.
 Member Function
 default constructor
 constructor #2
 Description
 Sets all the member variables to 0.
 Accepts an item's number, quanti ty, and cost as arguments. Calls
 other class functions to copy these values into the approp riate
 member variables. Then calls the se t Tot a l Cost function.
 

 Demonstrate the class by writing a simple program that uses it. This program should
 validate the user inputs to ensure that negative values are not accepted for item number,
 quantity, or cost.
 
 
 
 
 
 Pusedo code:
 UML diagram
 ...............................................
 .   -    ItemNumber : int                     .
 .   -    Quantity : int                       .
 .   -    Cost : double                        .
 .   -    Total Cost : double                  .
 ..............................................
 .      + Inventory()                          .
 .      + Inventory(int, int, double)          .
 .      + Set ItemNumber(int) : void           .
 .      + Set Quantity(int) : void             .
 .      + Set cost( double) : void             .
 .      + Set Total Cost (int, double) : void  .
 .      + get ItemNumber() : int               .
 .      + get quantity() : int                 .
 .      + get cost() : double                  .
 .      + get totalcost (): double             .
 .      + ~Inventory()                         .
 .                                             .
 .                                             .
 .                                             .
 ...............................................
 
 
 
 output "Enter the item number"
 input itemnumber
 Validate The users inputs
 output "Enter the Quantity"
 input Quatity
 Validate the users input
 output "Enter the Cost"
 input Cost
 Validate the users input
 create an Inventory Object
 
 
 functions
 + get item number(){ return item number}
 + get quantity(){ return quantity}
 + get cost() { return cost}
 +get total cost (){ return total cost }
 +set ItemNumber(int){initialize item number}
 +set quantity(int){ initialize quantity}
 +set cost(double){initialize cost}
 + set total cost(int,double){initialize total cost}
 +Inventory(){initialize all variables to zero}
 +Inventory(int, int, double){initialize all variables to user input by calling all other functions in this constructor }
 
 
 
 */

#include <iostream>
using namespace std;
#include "Inventory.h"




int main()
{
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
    //ask user to enter their input
    cout << "Enter the Item Number: "<<endl;
    cin >> itemNumber;
    while (itemNumber < 0) //Validate Users input
    {
        cout << "Please enter a positive value for the Item Number: ";
        cin >> itemNumber;
    }
    cout << "Enter the Quantity of the item: "; //Take Quantity
    cin >> quantity;
    while (quantity < 0) // Validate Users input
    {
        cout << "Please enter a positive value for the Quantity of the item: ";
        cin >> quantity;
    }
    cout << "Enter the Cost of the item: "; //Take Cost
    cin >> cost;
    while (cost < 0)//Validate Input
    {
        cout << "Please enter a positive value for the Cost of the item: ";
        cin >> cost;
    }
    //object
    Inventory information( itemNumber,quantity, cost);

    
    Inventory* s = new Inventory();
    totalCost = information.getTotalCost();
    itemNumber = information.getItemNumber();
    cost = information.getCost();
    quantity = information.getQuantity();
    //Output
    cout<<"=========================================================="<<endl;
    cout << "The Item Number is: " << itemNumber << endl;
    cout << "The Quantity is: " << quantity << endl;
    cout << "The Cost is: " << cost << endl;
    cout << "The Total Cost is: " << totalCost << endl;
    cout<<"=========================================================="<<endl;
    delete s;
    return 0;
}
/*
 Test Case (1)
 Enter the Item Number:
 50
 Enter the Quantity of the item: 30
 Enter the Cost of the item: 40
 ==========================================================
 The Item Number is: 50
 The Quantity is: 30
 The Cost is: 40
 The Total Cost is: 1200
 ==========================================================
 Program ended with exit code: 0
 
 Test Cases(2)
 
 Enter the Item Number:
 2
 Enter the Quantity of the item: 3
 Enter the Cost of the item: 4
 ==========================================================
 The Item Number is: 2
 The Quantity is: 3
 The Cost is: 4
 The Total Cost is: 12
 ==========================================================
 Program ended with exit code: 0
 
 Test case(3)
 
 Enter the Item Number:
 20
 Enter the Quantity of the item: 20
 Enter the Cost of the item: 90
 ==========================================================
 The Item Number is: 20
 The Quantity is: 20
 The Cost is: 90
 The Total Cost is: 1800
 ==========================================================
 Program ended with exit code: 0
 
 */
