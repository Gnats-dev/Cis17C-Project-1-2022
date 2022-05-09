/* 
 * File:   Money.h
 * Author: Joshua Germing
 *
 * Created on April 28, 2022, 4:20 AM
 */

#ifndef MONEY_H
#define MONEY_H
class Money{
    private:
        int bank;
        int bet;
        
    public:
        //Enum that lays out the available chip options
        enum chips {
            ONE = 1,
            FIVE = 5,
            TWENTY_FIVE = 25,
            FIFTY = 50,
            ONE_HUNDRED = 100,
            FIVE_HUNDRED = 500
        };
        Money();
        int getBet() const;
        int getBank() const;
        void setBank(int bank);
        void setBet(int bet);
        void winMoney(int chip);
        void loseMoney(int chip);
};


#endif /* MONEY_H */

