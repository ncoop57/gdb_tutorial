#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bank.h"

// The exchange rate for Bitcoin to USD
int BITCOIN_TO_USD = 8000;

// The structure of a bank datatype
struct bank {
  double balance; // The current balance in the bank
  char* type; // The currency being used by the bank
};

Bank* init(double amount, char* type)
{

  Bank* bank = (Bank*) malloc(sizeof(Bank)); // Malloc the space required for the new bank
  bank->balance = amount; // Set the initial bank balance to the new amount
  bank->type = type; // Set the initial bank currency type to the new currency type

  return bank;

}

void exchangeToUSD(Bank* bank)
{

  // Check if the bank's currency type is Bitcoin.
  if (strcmp(bank->type, "Bitcoin"))
  {
  
    bank->balance = bank->balance * BITCOIN_TO_USD; // Perform the exchange calculation from Bitcoin to USD
    bank->type = "USD"; // Update the bank's currency type to USD
  
  }

}

void exchangeToBitCoin(Bank* bank)
{

  // Check if the bank's currency type is USD.
  if (strcmp(bank->type, "USD"))
  {
  
    bank->balance = bank->balance * (1 / BITCOIN_TO_USD); // Perform the exchange calculation from USD to Bitcoin
    bank->type = "Bitcoin"; // Update the bank's currency type to Bitcoin
  
  }

}

void printBankStatement(Bank* bank)
{

  printf("Amount: %0.2f Currency: %s\n", bank->balance, bank->type);

}
