
//Aaron Fehir
//February 5, 2021
//Programming Languages
//Project Two

#include <iostream>
#include <iomanip>
using namespace std;

//Include DataInput class
#include "DataInput.h"
//Include DisplayMenu class
#include "DisplayMenu.h"
//Include DisplayReports class
#include "DisplayReports.h"

//Instantiate objects from DataInput class
DataInput input;
DisplayReports reports;

void DisplayMenu::PrintMenu() {

   //Print menu
   char ans = '\0';
   do {
	   cout << "********************************" << endl;
	   cout << "***********" << "DATA INPUT" << "***********" << endl;
	   cout << "Initial Investment Amount:" << endl;
	   cout << "Monthly Deposit:" << endl;
	   cout << "Annual Interest:" << endl;
	   cout << "Number of Years:" << endl;
	   cout << "Enter Y to continue..." << endl;
	   cin >> ans;
   }
   while (ans != 'y' && ans != 'Y');

   //Accept user input; Throw exceptions and terminate program for invalid inputs
   cout << "Enter initial investment amount:" << endl;
   cin >> m_investment;
   if (!(m_investment > 0))  {
	   throw runtime_error ("Only positive numbers are allowed for input.");
   }
   input.SetInvestment(m_investment);

   cout << "Enter monthly deposit:" << endl;
   cin >> m_deposit;
   if (!(m_deposit > 0))  {
	   throw runtime_error ("Only positive numbers are allowed for input.");
   }
   input.SetDeposit(m_deposit);

   cout << "Enter annual interest:" << endl;
   cin >> m_interest;
   if (!(m_interest > 0))  {
	   throw runtime_error ("Only positive numbers are allowed for input.");
   }
   input.SetInterest(m_interest);

   cout << "Enter number of years:" << endl;
   cin >> m_years;
   if (!(m_years > 0))  {
	   throw runtime_error ("Only positive numbers are allowed for input.");
   }
   input.SetYears(m_years);

   //Print menu with input
   char key = '\0';
   do {
	   cout << "********************************" << endl;
	   cout << "***********" << "DATA INPUT" << "***********" << endl;
	   cout << setprecision(2) << fixed;
	   cout << "Initial Investment Amount:  $" << DataInput::GetInvestment() << endl;
	   cout << "Monthly Deposit:  $" << DataInput::GetDeposit() << endl;
	   cout << "Annual Interest:  %" << DataInput::GetInterest() << endl;
	   cout << "Number of Years:  " << DataInput::GetYears() << endl;
	   cout << "Enter Y to continue..." << endl;
	   cin >> key;
   }
   while (key != 'y' && key != 'Y');

   reports.PrintReports();
}
