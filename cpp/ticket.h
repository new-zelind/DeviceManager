//Header file for Ticket class

#ifndef TICKET_H
#define TICKET_H

#include "invoice.h"

class Ticket{
   private:

	  //Ticket ID
	  string ID;

	  //Ticket description/message
	  vector<string> messages;

	  //Type of ticket
	  //Account, Hardware, Inventory, Network, Software, User Error
	  string type;

	  //Ticket Priority
	  //critical, urgent, medium, low
	  string priority;

	  //Assigned asset
	  string assetID;

	  //Is the ticket open?
	  bool isOpen;

	  //If the ticket requires an invoice
	  Invoice invoice;

   public:

	  //Default constructor
	  Ticket();

	  //Constructor to be used
	  Ticket(string message, string type, string priority, string assetID);

	  //Destructor
	  ~Ticket();

	  //Get ticket ID
	  string getID();

	  //Get latest ticket message
	  string getLatestMessage();

	  //Get all messages
	  string getAllMessages();

	  //Add a message
	  void addMessage();

	  //Get ticket type
	  string getType();

	  //Get ticket priority
	  string getPriority();

	  //Set ticket priority
	  bool updatePriority(string status);

	  //Get associated asset
	  string assetID();

	  //Get status of the ticket
	  string getStatus();

	  //Set status of the ticket
	  void setStatus(bool status);

	  //View current invoice
	  string getInvoice();

	  //Create an invoice
	  void createInvoice(string message, float charge);
}

#endif
