#include "Card_Wheel.hpp"
#include "Arduino.h"


int initCardWheel()
{
    for(int i = 0; i < NUM_OF_SLOTS; i++)
    {
        slotOrder[i] = i;
        slotState[i] = 0;
    } 
    shuffle();
    return 0;
}

void shuffle()
{
    for(int j = 0; j < NUM_OF_SHUFFLE_ITERATIONS; j++)
        for(int i = 0; i < NUM_OF_SLOTS; i++)
        {
            int temp = slotOrder[i];
            int index = random(NUM_OF_SLOTS);

            slotOrder[i]=slotOrder[index];
            slotOrder[index]=temp;
        }
}