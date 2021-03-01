//Aaron Fehir
//February 5, 2021
//Programming Languages
//Project Two

//Include DataInput class
#include "DataInput.h"

//Initialize static variables
double DataInput::m_investment = 0.0;
double DataInput::m_deposit = 0.0;
double DataInput::m_interest = 0.0;
int DataInput::m_years = 0;

//Define setter/getter functions
void DataInput::SetInvestment (double t_investment) {
  m_investment = t_investment;
}

double DataInput::GetInvestment() {
  return m_investment;
}

void DataInput::SetDeposit(double t_deposit) {
  m_deposit = t_deposit;
}

double DataInput::GetDeposit() {
  return m_deposit;
}

void DataInput::SetInterest(double t_interest) {
  m_interest = t_interest;
}

double DataInput::GetInterest() {
  return m_interest;
}

void DataInput::SetYears(int t_years) {
  m_years = t_years;
}

int DataInput::GetYears() {
  return m_years;
}

