/* 
 * File:   Hand.h
 * Author: Joshua Germing
 *
 * Created on April 28, 2022, 4:22 AM
 */

#ifndef HAND_H
#define HAND_H
#include "DeckofCards.h"
#include <deque>
#include <iterator>

class Hand{
    private:
        std::deque<Cards> hand;
        int score;
        bool jack;
    
    public:
        Hand();
        int getScore() const;
        int getHandCount() const;
        void calculateScore();
        bool checkJack() const;
        void clear();
        void addScore(int score);
        int getCardValue(int n) const;
        std::string getCard(int n);
        void drawCard(Cards card);
        void setJack(bool jack);
        const int BLACKJACK = 21;
};


#endif /* HAND_H */

