//Header file to track an instance of an invoice

#ifndef INVOICE_H
#define INVOICE_H

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Invoice{
   private:
	  
	  //Invoice Number
	  string ID;

	  //Reason for invoice
	  string message;

	  //Affected device
	  string deviceAssetNum;

	  //Date issued
	  string dateIssued;

	  //Person charged
	  string recipient;

	  //Recipient's email
	  string email;

	  //Invoice amount
	  float charge;

	  //Has the invoice been paid off?
	  bool isPaid;

   public:

	  //Default constructor
	  Invoice();

	  //Constructor to be used
	  Invoice(string message, string asset, string recipient, string email,
			   float charge);

	  //Destructor
	  ~Invoice();

	  //Check to see if the invoice has been paid off
	  bool hasBeenPaid();

	  //Set paid status
	  void setPaidStatus(bool isPaid);
}

#endif
