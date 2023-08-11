//toggle LED1, LED";
#include "mbed.h"


Ticker Timer_1;
Ticker Timer_2;
DigitalOut led1(LED1);
DigitalOut led2(LED2);


void led_switch_1(){
    led1=!led1;}
void led_switch_2(){
    led2=!led2;}


int main(){
 Timer_1.attach(led_switch_1, 2); 
 Timer_2.attach(led_switch_2, 5);
 
while(1){ }
}