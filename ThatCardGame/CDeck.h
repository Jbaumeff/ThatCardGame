/* 
 * File:   CDeck.h
 * Author: baumjeff
 *
 * Created on September 4, 2014, 12:04 PM
 */

#ifndef CDECK_H
#define	CDECK_H

#include <vector>
#include "CCard.h"

using namespace std;

class CDeck
{
public:
    CDeck();
    CDeck(const CDeck& orig);
    virtual ~CDeck();
    
    void DisplayDeck();
    void CreateDeck();
    void CreateCardsInSuit(string suit);
private:
    vector<CCard> mCards;
};

#endif	/* CDECK_H */

