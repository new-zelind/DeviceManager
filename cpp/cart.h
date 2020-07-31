// Header file to define the Cart object

#ifndef CART_H
#define CART_H

#include "device.h"

class Cart{
   private:
	  //Cart name
	  string name;

	  //Organization Asset Number
	  string assetNum;

	  //Cart Serial Number
	  string serialNum;

	  //Number of laptops assigned to the cart
	  string numDevices;

	  //Vector of laptops in the cart
	  vector<Laptop> laptops;

	  //Maximum capacity of the cart
	  int maxDevices;

   public:

	  //Default constructor
	  Cart();

	  //Cart with provided specifications
	  Cart(string name, string assetNum, string serialNum, int maxDevices);

	  //Destructor
	  ~Cart();

	  //Get name
	  string getName();

	  //Get asset number
	  string getAssetNum();

	  //Get serial number
	  string getSerialNum();

	  //Get maximum capacity
	  int getMaxDevices();

	  //Add a device
	  void addDevice(Laptop laptop);

	  //Remove a device by asset number
	  //returns false if device doesn't exist
	  //returns true if complete
	  bool removeDevice(int assetNum);

	  //Print contents of the cart
	  void printDevices();

	  //Print cart information
	  void printCartInfo();
}

#endif
