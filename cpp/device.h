// Header file to define Device object

#ifndef DEVICE_H
#define DEVICE_H

#include "ticket.h"
#include "person.h"

class Device{
   private:

	  //Serial number
	  string serialNum;

	  //Asset number
	  string assetNum;

	  //Company that made the device
	  string manufacturer;

	  //Device model
	  string model;

	  //Date of purchase
	  string dateOfPurchase;

	  //List of tickets currently assigned to the device
	  vector<Ticket> tickets;

	  //Does the device currently have an open ticket?
	  bool hasOpenTicket;

	  //Name of person/cart that "owns" the device
	  string assignedTo;

	  //Is the device assigned to someone or something?
	  bool isAssigned;

   public:
	  
	  //Default constructor
	  Device();

	  //Constructor to define a new device
	  Device(string serialNum, string assetNum, string manufacturer, string model, string DOP);

	  //Destructor
	  ~Device();

	  //Get serial number
	  string getSerialNumber();

	  //Get asset number
	  string getAssetNumber();

	  //Get device make+model
	  string getDeviceInfo();

	  //Get device date of purchase
	  string getDOP();

	  //Get list of tickets
	  string getTickets();

	  //Add a ticket
	  void addTicket();

	  //Pull an open ticket
	  Ticket getTicket(string ticketID);

	  //Check to see if a ticket is open
	  bool checkForOpenTicket();

	  //See who "owns" the device, or location
	  string checkAssignment();

	  //Clear device assignment
	  void clearAssignmenet();

	  //Change device assignment
	  void changeAssignment(string newAssignment);
}

#endif
