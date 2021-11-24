#include "./inc/BankOperations.h"
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int login(int accountnumber,int password)
{
    if((accountnumber==12345678 && password==11111111)||
    (accountnumber==23456789 && password==22222222)||
    (accountnumber==34567890 && password==333333333)||
    (accountnumber==10101010 && password==44444444)||
    (accountnumber==20202020 && password==55555555))
    return 0;
    else
    return -9;
}
int diposite(int totalamount,int amount)
{
    return totalamount+amount;
}
int withdraw(int totalamount,int amount)
{
    return totalamount-amount;
}
int transfer1(int totalamount,int transferaccount,int amount)
{
    if((transferaccount==12345678)||
    (transferaccount==23456789)||
    (transferaccount==34567890)||
    (transferaccount==10101010)||
    (transferaccount==20202020))
    return totalamount-amount;
    else
    return -1;
}
