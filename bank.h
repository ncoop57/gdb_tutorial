#ifndef CURRENCY_H
#define CURRENCY_FILE

//int BITCOIN_TO_USD = 1 / 8000;
//int USD_TO_BITCOIN = 8000;

typedef struct bank Bank;

/**
 * Creates a new bank account with an initial balance and the type of currency
 * stored
 * @param amount the amount of currency being initially deposited
 * @param type the type of current (USD or Bitcoin)
 * @return the bank pointer with the specified initial amount and type of
 * currency
 */
Bank* init(double amount, char* type);

/**
 * Calculates the new balance for converting the current bank's currency to USD
 * @param bank the bank to be converted to USD
 */
void exchangeToUSD(Bank* bank);

/**
 * Calculates the new balance for converting the current bank's currency to
 * Bitcoin
 * @param bank the bank to be converted to Bitcoin
 */
void exchangeToBitCoin(Bank* bank);

/**
 * Prints out the bank statement for a given bank
 * @param bank the bank to have its information printed out
 */
void printBankStatement(Bank* bank);

#endif
