/* 
 * File:   CCard.h
 * Author: baumjeff
 *
 * Created on September 4, 2014, 12:02 PM
 */

#ifndef CCARD_H
#define	CCARD_H

#include <string>

using namespace std;

class CCard
{
public:
    CCard(int value, string suit);
    CCard(const CCard& orig);
    virtual ~CCard();
    
    string DisplayCardValue();
    string GetSuit() {return mSuit;}
    
private:
    bool mIsShown;
    string mSuit;
    int mCardValue;
    bool mIsBlack;
    

};

#endif	/* CCARD_H */

