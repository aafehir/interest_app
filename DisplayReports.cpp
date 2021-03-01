//Aaron Fehir
//February 5, 2021
//Programming Languages
//Project Two

#include <iostream>
#include <iomanip>
using namespace std;

//Include DataInput class
#include "DataInput.h"
//Include DisplayReports class
#include "DisplayReports.h"
//Include DisplayMenu class
#include "DisplayMenu.h"

DisplayMenu menu;

//Function to print to reports side by side for comparison purposes
//Balance and Interest without monthly deposits on the left
//Balance and Interest with monthly deposits on the right
void DisplayReports::PrintReports() {
	cout << "**** BALANCE AND INTEREST WITHOUT ADDITIONAL MONTHLY DEPOSITS **** BALANCE AND INTEREST WITH ADDITIONAL MONTHLY DEPOSITS ****" << endl;
	cout << "*****************************************************************************************************************************" << endl;
	cout << "****   Year      Year-End Balance      Earned Interest        ****   Year      Year-End Balance      Earned Interest     ****" << endl;

	openBalWithoutDeposits = DataInput::GetInvestment();
	openBalWithDeposits = DataInput::GetInvestment();
	for (int i = 0; i < DataInput::GetYears(); ++i) {
		cout << "****" << setw(7) << i + 1;
		for (int j = 0; j < 12; ++j) {
			monthlyWithoutDeposits = openBalWithoutDeposits * (DataInput::GetInterest() / 100) / 12;
			closeBalWithoutDeposits = openBalWithoutDeposits + monthlyWithoutDeposits;
			openBalWithoutDeposits = closeBalWithoutDeposits;
			interestWithoutDeposits += monthlyWithoutDeposits;
		}
		cout << setprecision (2) << fixed;
		cout << setw(11) << "$" << setw(11) << closeBalWithoutDeposits;
		cout << setw(10) << "$" << setw(11) << interestWithoutDeposits;
        cout << setw(12) << "****" << setw(7) << i + 1;
        interestWithoutDeposits = 0.0;
        for (int k = 0; k < 12; ++k) {
        	monthlyWithDeposits = (openBalWithDeposits + DataInput::GetDeposit()) * (DataInput::GetInterest() / 100 ) / 12;
        	closeBalWithDeposits = (openBalWithDeposits + DataInput::GetDeposit()) + monthlyWithDeposits;
        	openBalWithDeposits = closeBalWithDeposits;
        	interestWithDeposits += monthlyWithDeposits;
        }
		cout << setprecision (2) << fixed;
		cout << setw(11) << "$" << setw(11) << closeBalWithDeposits;
		cout << setw(10) << "$" << setw(11) << interestWithDeposits;
		cout << setw(9) << "****" << endl;
		interestWithDeposits = 0.0;
	}

	char ans = '\0';
	while (true) {
		cout << "Enter Y to continue or Q to quit..." << endl;
		cin >> ans;

		if (ans == 'Y' || ans == 'y') {
			menu.PrintMenu();
			break;
		}

		if (ans == 'Q' || ans == 'q') {
			exit(0);
			break;
		}
	}

}


