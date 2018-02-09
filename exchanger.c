#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bank.h"

int main(int argc, char** argv)
{

  /**
   * Grab the command line arguments for the amount to be exchanged, the
   * currency it amount it is originally in, and the currency it is being
   * converted into.
   */
  int amount = atof(argv[1]);
  char* from_currency = argv[2];
  char* to_currency = argv[3];

  /**
   * Print out each of the grabbed command line arguments to check for
   * correctness.
   */
  printf("Amount entered: %d\n", amount);
  printf("From currency: %s\n", from_currency);
  printf("To currency: %s\n\n", to_currency);

  /**
   * Create a new bank for containing the money amount and original currency
   * type.
   */
  Bank* bank = init(amount, from_currency);

  /**
   * Print out what the bank structure looks like before we perform the
   * exchange.
   */
  printf("Before exchange bank statement:\n");
  printBankStatement(bank);

  /**
   * Perform the exchange based on which the original currency is.
   */
  if (strcmp(from_currency, "USD"))
  {

    exchangeToBitCoin(bank);

  }
  else
  {
  
    exchangeToUSD(bank);

  }

  /**
   * Print out what the bank structure looks like after we perform the
   * exchange.
   */
  printf("After exchange bank statement:\n");
  printBankStatement(bank);

  return 0;

}
