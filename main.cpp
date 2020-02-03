//Wilfrido Varela COCS-1436-57002, Unit 2 Assignment C++
//Entering pennies and then calculating the number of dollars, quarters, dimes, nickels, and pennies Joe will receive

#include <iostream>
using namespace std;
int main() 
{
  //Declaring and initializing variables
 int inputpennies = 0;
 int pennies = 1, nickels = 5, dimes = 10;
 int quarters = 25, dollars = 100;
 int quartersleft = 0, dimesleft = 0, nickelsleft = 0;
 int penniesleft = 0;
 //Input
 cout << "Please enter the amount of pennies that you have: " << endl;
 cin >> inputpennies;
   quartersleft = inputpennies % dollars;
   dimesleft = inputpennies % quarters;
   nickelsleft = inputpennies % dimes;
   penniesleft = inputpennies % nickels; 
 //Process
 if (inputpennies >= dollars)
 { 
   
   
   dollars = inputpennies / dollars;
   cout << "You will have is " << dollars << " dollar" << endl;
 }
 else if (inputpennies < dollars)
 //Output
 {
   cout << "You will have 0 dollars" << endl;
 }
 else
 {
   cout << "\nError" << endl;
 }
 //converting remainder of pennies into quarters
 //process
 if (quartersleft >= quarters)
 {
   quarters = quartersleft / quarters;
   //output
   cout << "You will have " << quarters << " quarters" << endl;
 }
 //process
 else if (quartersleft < quarters)
 //output
 {
   cout << "You will have 0 quarters" << endl;
 }
 else 
 {
   cout << "Error" << endl;
 }
 // Converting remainder of pennies into dimes
 //process
 if (dimesleft >= dimes)
 {
   dimes = dimesleft / dimes;
   //Output
   cout << "You will have " << dimes << " dimes" << endl;
 }
 else if (dimesleft < dimes)
 {
   //output
   cout << "You will have 0 dimes" << endl;
 }
 else 
 {
   cout << "\nError" << endl;
 }
 //Converting remainder of pennies into nickels
 //process
 if (nickelsleft >= nickels)
 {
   nickels = nickelsleft / nickels;
   //output
   cout << "You will have " << nickels << " nickels" << endl;
 }
 else if (nickelsleft < nickels)
 {
   //output
   cout << "You will have 0 nickels" << endl;
 }
 else
 {
   cout << "\nError" << endl;
 }
 //Getting the remainder of the pennies
 //process
 if (penniesleft >= pennies)
 {
   pennies = penniesleft / pennies;
   //output
   cout << "You will have " << pennies << " pennies" << endl;
 }
 else if (penniesleft < pennies)
 {
   //output
   cout << "You will have 0 pennies" << endl;
 }
 else
 {
   cout << "\nError" << endl;
 }

  return 0; //Exit success
}