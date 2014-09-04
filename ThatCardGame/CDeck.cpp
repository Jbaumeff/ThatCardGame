/* 
 * File:   CDeck.cpp
 * Author: baumjeff
 * 
 * Created on September 4, 2014, 12:04 PM
 */

#include <iostream>
#include "CDeck.h"

using namespace std;

CDeck::CDeck()
{

}

CDeck::CDeck(const CDeck& orig)
{
}

CDeck::~CDeck()
{
}

void CDeck::DisplayDeck()
{
    for(int i = 0; i < mCards.size(); ++i)
    {
        mCards[i].DisplayCardValue();
        cout << " " << mCards[i].GetSuit() << endl;
    }
}

void CDeck::CreateDeck()
{
    CreateCardsInSuit("Spade");
    CreateCardsInSuit("Heart");
    CreateCardsInSuit("Club");
    CreateCardsInSuit("Diamond");
}

void CDeck::CreateCardsInSuit(string suit)
{
    for(int i = 1; i < 14; i++)
    {
        CCard card = CCard(i, suit);
        mCards.push_back(card);
        //cout << card.GetSuit() << endl;
        //cout << card.DisplayCardValue() << endl;
        //mCards[0].DisplayCardValue();
    }
}
