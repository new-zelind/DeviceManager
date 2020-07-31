//Header file to define Lab object

#ifndef LAB_H
#define LAB_H

#include "desktop.h"

class Lab{

   private:
	  
	  //Vector of desktop objects
	  vector<Desktop> desktops;

	  //Location
	  string school;

	  //Room
	  string room;

   public:

	  //Constructor
	  Lab();

	  //Constructor to be used
	  Lab(string school, string room);

	  //Destructor
	  ~Lab();

	  //Add a device
	  void addDevice(Desktop device);

	  //Remove a device
	  void removeDevice(string assetID);

	  //List all devices
	  string listDevices();

	  //See location information
	  string getLocation();

	  //Update school
	  void updateSchool(string school, string room);

	  //Update room
	  void updateRoom(string room);
}

#endif
