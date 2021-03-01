//Aaron Fehir
//February 5, 2021
//Programming Languages
//Project Two

#ifndef DATA_INPUT_H
#define DATA_INPUT_H

//Create DataInput class
class DataInput {

//Declare public static setter/getter functions
public:
   void SetInvestment (double t_investment);
   static double GetInvestment();
   void SetDeposit(double t_deposit);
   static double GetDeposit();
   void SetInterest(double t_interest);
   static double GetInterest();
   void SetYears(int t_years);
   static int GetYears();

//Declare private static variables
private:
   static double m_investment;
   static double m_deposit;
   static double m_interest;
   static int m_years;

};

#endif

