#include <iostream>
#include <cstring>

#include "b_manager.h"
#include "booking.h"
#include "hotel.h"
#include "Manager.h"
#include "newCustomer.h"
#include "Packages.h"
#include "payment.h"
#include "r_customer.h"
#include "receptionist.h"
#include "Room.h"
#include "staff.h"
using namespace std;

int main ()
{
  b_manager * bm = new b_manager();
  booking * bk = new booking(); 
  hotel * hl = new hotel(); 
  Manager * mg = new Manager();
  newCustomer * nc = new newCustomer();
  Packages * pc = new Packages();
  payment * pt = new payment();
  r_customer * rc = new r_customer();
  receptionist * rt = new receptionist();
  Room * rm = new Room();
  staff * sf = new staff();

	bm-> displaybranchmanager ();
  bm-> updateprofiles();

  bk -> setbooking();
  bk-> editbooking();
  bk -> displaybooking ();


  hl -> manageHotel();  
	hl -> displayHotel();
	hl -> addRecords();

  
  mg -> displayManager();
  mg -> updateprofile();

  nc -> displayNewCustomer();
  nc -> addNewCustomer();
  nc -> editNewCustomer();

  pc-> updatePackages();
 
	pt -> displaypayment();
  pt -> editpayment();
  pt -> addPayment();
  pt -> calcPayment();
  pt -> confirmpayment();

 rc -> displaydetails();
 rc -> editdetails();


  rt -> displaydetails();
  rt ->  editReceptionist();
  rt ->  addPayment();
  rt -> calcPayment();

  rm -> addRoom();
  rm ->	displayRoom();
  rm -> editRoom();

  sf ->  editstaff();
  sf -> editdisplaystaff();

    