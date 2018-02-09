#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bank.h"

int USD_TO_BITCOIN = 1 / 8000;
int BITCOIN_TO_USD = 8000;

struct bank {
  double balance;
  char* type;
};

Bank* init(double amount, char* type)
{

  Bank* bank = (Bank*) malloc(sizeof(Bank));
  bank->balance = amount;
  bank->type = type;

  return bank;

}

void deposit(Bank* bank, double amount)
{

  bank->balance += amount;

}

void exchangeToUSD(Bank* bank)
{

  if (strcmp(bank->type, "Bitcoin"))
  {
  
    bank->balance = bank->balance * BITCOIN_TO_USD;
    bank->type = "USD";
  
  }

}

void exchangeToBitCoin(Bank* bank)
{

  if (strcmp(bank->type, "USD"))
  {
  
    bank->balance = bank->balance * USD_TO_BITCOIN;
    bank->type = "Bitcoin";
  
  }

}

void printBankStatement(Bank* bank)
{

  printf("Amount: %0.2f Currency: %s\n", bank->balance, bank->type);

}
