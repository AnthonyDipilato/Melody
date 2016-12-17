/*   Arduino Simple Melody Library 
 *   Written By Anthony DiPilato
 *   
 *  A simple melody library for a piezo buzzer.
 *  
 *  The original melody example (https://www.arduino.cc/en/tutorial/melody) 
 *  uses delays to control tempo length of notes. This isn't
 *  practical in a normal application since it freezes the loop
 */

#ifndef Melody_h
#define Melody_h

#include "Arduino.h"

class Melody{
    public:
        Melody(int pin);
        void create(int notes_array[], int beats_array[], int numNotes, int repeat, int tempo, int pause);
        void start();
        void stop_();
        void loop_();
        void play_tone(int note_tone);
        int get_tone(char note);
        // melody_status vars
        int * notes;
        int * beats;
        int pos;
        int melody_status;
        int playing;
        int numNotes;
        unsigned long next;
        int tempo;
        int pause;
        int repeat;
        int note_tone;
    private:
        int _pin;
};

#endif


