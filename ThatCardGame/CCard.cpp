/* 
 * File:   CCard.cpp
 * Author: baumjeff
 * 
 * Created on September 4, 2014, 12:02 PM
 */

#include <iostream>
#include "CCard.h"

using namespace std;

CCard::CCard(int value, string suit)
{
    mCardValue = value;
    mSuit = suit;
    mIsShown = false;
    
    if(suit == "Club" || suit == "Spade")
    {
        mIsBlack = true;
    }
    else
    {
        mIsBlack = false;
    }
}

CCard::CCard(const CCard& orig)
{
}

CCard::~CCard()
{
}

string CCard::DisplayCardValue()
{
    if(mCardValue == 1)
    {
        return "Ace";
    }
    else if(mCardValue == 11)
    {
        return "Jack";
    }
    else if(mCardValue == 12)
    {
        return "Queen";
    }
    else if(mCardValue == 13)
    {
        return "King";
    }
    else
    {
        return to_string(mCardValue);
    }
}

