//----------------------------------------------------------
//
// Name: Alan Cheng
// SID: 861094564
//
// CS 120B Final Project: GlowPong
//
// Filename: timer.h
//
// Disclaimer: Me and Natalie made this for lab, and are currently
// 			   reusing it for the final project
//
//----------------------------------------------------------

#ifndef __TIMER_H__
#define __TIMER_H__

//You may call these functions:
void TimerSet(unsigned long M); 
void SetTimerFunction(void (*newFunc)());

//Never call the following functions:
void TimerOn();
void TimerOff();
void TimerISR();
ISR(TIMER1_COMPA_vect);

#endif

/*
The function, TimerSet, sets the period
for when the timer to send an interrupt signal
in order to perform its function.
The function, SetTimerFunction, sets the function the
timer calls upon its interrupt. 
*/