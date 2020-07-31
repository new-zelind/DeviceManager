//Header file to define a Person class

#ifndef PERSON_H
#define PERSON_H

#include "device.h"

class Person{

   private:

	  //Name strings
	  string firstName;
	  string lastName;

	  //Employee/student ID
	  string ID;

	  //Position
	  //Admin, Teacher, Staff, Student
	  string position;

	  //Contact info
	  string email;
	  string phone;

	  //list of assigned devices
	  vector<Device> devices;
   
   public:

	  //Default constructor
	  Person();

	  //Constructor to be used
	  Person(string fName, string lName, string ID, string position,
			 string email, string phone);

	  //Destructor
	  ~Person();

	  //Get information
	  string getPersonalInfo();

	  //Set new position
	  void setPosition(string pos);

	  //Set new email
	  void setEmail(string email);

	  //set new phone number
	  void setPhone(string phoneNumber);

	  //List all active devices
	  string listAssignedDevices();

	  //Remove a device
	  void removeDevice(string assetID);

	  //Add a device
	  void addDevice(Device newDevice);
}

#endif
