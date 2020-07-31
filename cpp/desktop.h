//Header file to declare a Desktop class

#ifndef DESKTOP_H
#define DESKTOP_H

#include "device.h"

class Desktop{

   private:

	  //Device info
	  Device device;

	  //School assigned to
	  string school;

	  //Room
	  string room;

   public:

	  //Default constructor
	  Desktop();

	  //Constructor to be used
	  Desktop(Device device, string school, string room);

	  //Get location information
	  string getInfo();

	  //Reset location information
	  void moveLocation(string school, string room);

}

#endif
