/* 
 * File:   main.cpp
 * Author: baumjeff
 *
 * Created on August 28, 2014, 4:59 PM
 */

#include <cstdlib>
#include "CDeck.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    CDeck deckOne = CDeck();
    deckOne.CreateDeck();
    deckOne.DisplayDeck();
    return 0;
}

