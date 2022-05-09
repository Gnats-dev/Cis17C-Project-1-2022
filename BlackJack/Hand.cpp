/* 
 * File:   Hand.cpp
 * Author: Joshua Germing
 *
 * Created on April 28, 2022, 2:22 AM
 */
#include "Hand.h"

Hand::Hand() {
    score = 0;
    jack = false;
}

void Hand::drawCard(Cards card) {
    hand.push_back(card);
}

int Hand::getScore() const {
    return score;
}

void Hand::clear() {
    hand.clear();
}

int Hand::getHandCount() const {
    return hand.size();
}

void Hand::calculateScore() {
    //Reset the score after a round. 
    score = 0;
    
    for(int i = 0; i < hand.size(); i++) {
        addScore(hand[i].getValue());
        if(score <= 10 && hand[i].getRank() == 'A') {
            score -= hand[i].getValue();
            score += 11;
        }
    } 
    if(score == 21) {
        setJack(true);
    }
}

std::string Hand::getCard(int n){
    return hand.at(n).toString();
}

bool Hand::checkJack() const{
    //check whether BJ is hit
    return jack;
}

void Hand::setJack(bool check) {
    jack = check;
}

void Hand::addScore(int score) {
    this->score += score;
}

int Hand::getCardValue(int n) const {
    assert(n >= 0 && n < hand.size());
    
    return hand[n].getValue();
} 
