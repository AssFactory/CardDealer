#ifndef CARD_WHEEL
#define CARD_WHEEL

#include "HW_Config.hpp" 

int slotState[NUM_OF_SLOTS];
int slotOrder[NUM_OF_SLOTS];
int aktSlot;

/*****************************************************************/
/* Function: initCardWheel                                       */
/* Purpose:  initalize all parts of card wheel                   */
/*****************************************************************/
int initCardWheel();

/*****************************************************************/
/* Function: moveToSlot                                          */
/* Purpose:  initalize all parts of card wheel                   */
/*****************************************************************/
void moveToSlot(int slot);

/*****************************************************************/
/* Function: getNextFreeSlot                                     */
/* Purpose:  initalize all parts of card wheel                   */
/*****************************************************************/
int getNextFreeSlot();

/*****************************************************************/
/* Function: shuffle                                             */
/* Purpose:  initalize all parts of card wheel                   */
/*****************************************************************/
void shuffle();

/*****************************************************************/
/* Function: calcNumOfSteps                                      */
/* Purpose:  initalize all parts of card wheel                   */
/*****************************************************************/
int calcNumOfSlots(int targetSlot);

/*****************************************************************/
/* Function: unLoadCard                                      */
/* Purpose:  initalize all parts of card wheel                   */
/*****************************************************************/
int unLoadCard();

#endif