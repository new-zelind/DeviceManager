//Header to define the Laptop class

#ifndef LAPTOP_H
#define LAPTOP_H

#include "person.h"
#include "device.h"

class Laptop{
   private:
	  
	  //Instance of a device
	  Device device;

	  //Assigned to person
	  bool isPersonal;

	  //Assigned to cart
	  bool isShared;

	  //Owner
	  Person owner;

	  //Cart
	  string cartID;

   public:

	  //Default constructor
	  Laptop();

	  //Person constructor
	  Laptop(Device device, Person owner);

	  //Cart constructor
	  Laptop(Device device, string cart);

	  //Get device information
	  string getLaptopInfo();

	  //Check to see if the device is assigned to a person
	  bool checkIsPersonal();

	  //Check to see if the device is in a cart
	  bool checkIsInCart();

	  //Get device owner info
	  string getAssigneeInfo();

	  //Get cart id
	  string getCartID();

	  //Clear current assignment
	  void clearAssignment();

	  //Assign to a new person
	  void assign(Person person);

	  //Assign to a new cart
	  void assign(string cartID);
}

#endif
