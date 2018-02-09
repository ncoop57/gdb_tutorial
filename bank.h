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
 * Deposit a certain amount of currency into a bank
 * @param bank the bank that will receive the deposit
 * @param amount the amount that will be deposited into the bank
 */
void deposit(Bank* bank, double amount);

void exchangeToUSD(Bank* bank);

void exchangeToBitCoin(Bank* bank);

void printBankStatement(Bank* bank);

#endif
