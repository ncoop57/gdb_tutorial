#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bank.h"

int main(int argc, char** argv)
{

  int amount = atof(argv[1]);
  char* from_currency = argv[2];
  char* to_currency = argv[3];

  printf("Amount entered: %d\n", amount);
  printf("From currency: %s\n", from_currency);
  printf("To currency: %s\n\n", to_currency);

  Bank* bank = init(amount, from_currency);
  printf("Before exchange bank statement:\n");
  printBankStatement(bank);

  if (strcmp(from_currency, "USD"))
  {

    exchangeToBitCoin(bank);

  }
  else
  {
  
    exchangeToUSD(bank);

  }

  printf("After exchange bank statement:\n");
  printBankStatement(bank);

  return 0;

}
