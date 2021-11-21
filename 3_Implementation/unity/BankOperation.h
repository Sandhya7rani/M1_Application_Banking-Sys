#ifndef BANKOPERATIONS_H /* IF NOT DEFINE THE BANKOPERATIONS_H*/

#define BANKOPERATIONS_H /* DEFINING THE BANKOPERATIONS_H*/
/* INCLUDING THE STRUCTURE_H */
int diposite(int totalamount,int amount);  
int withdraw(int totalamount,int amount);
int login(int accountnumber,int password);
int transfer1(int totalamount,int transferaccount,int amount);

#endif
