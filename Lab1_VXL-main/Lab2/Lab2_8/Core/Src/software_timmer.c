

#include "software_timmer.h"
int timer1_counter= 0;
int timer1_flag= 0;
int timer2_counter= 0;
int timer2_flag= 0;
int timer3_counter= 0;
int timer3_flag= 0;
int timer4_counter= 0;
int timer4_flag= 0;
int led_buffer [4] = {1 , 2 , 3 , 4};
void setTimer1(int duration){
	timer1_counter= duration;
	timer1_flag= 0;
}
void setTimer2(int duration){
	timer2_counter= duration;
	timer2_flag= 0;
}
void setTimer3(int duration){
	timer3_counter= duration;
	timer3_flag= 0;
}
void setTimer4(int duration){
	timer4_counter= duration;
	timer4_flag= 0;
}
void timerRun(){
	if(timer1_counter>0){
		timer1_counter--;
		if(timer1_counter<=0){
			timer1_flag= 1;
		}
	}
	if(timer4_counter>0){
		timer4_counter--;
		if(timer4_counter<=0){
			timer4_flag= 1;
		}
	}
}
