/* 
 * File:   Money.cpp
 * Author: Joshua Germing
 *
 * Created on April 28, 2022, 1:17 AM
 */
#include "money.h"

Money::Money() {
    //Initialize the bank to be $800.
    setBank(800);
    setBet(50);
}

void Money::setBank(int bank) {
    this->bank = bank;
}

void Money::winMoney(int chip) {
    bank += chip;
}

void Money::loseMoney(int chip) {
    bank -= chip;
    
    if (bank < 0) {
        bank = 0;
    }
}

int Money::getBank() const {
    return bank;
}

int Money::getBet() const {
    return bet;
}

void Money::setBet(int bet) {
    this->bet = bet;
}