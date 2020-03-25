#include "mbed.h"


DigitalIn Switch(SW3);
DigitalOut redLED_(LED1);
DigitalOut greenLED_(LED2);


int main(){
    while(1){
        if(Switch == 1){
            greenLED_ = 0;
            redLED_ = 1;
        } else{
            redLED_ = 0;
            greenLED_ = 1;
        }
    }

}