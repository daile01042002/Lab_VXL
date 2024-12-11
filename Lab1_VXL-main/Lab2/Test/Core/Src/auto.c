/*
 * auto.c
 *
 *  Created on: Sep 30, 2022
 *      Author: ASUS
 */
#include "auto.h"
void fsm_automatic_run(){
	switch(status){
	case INIT:
		break;
	case AUTO_RED:
		if(timer1_flag==1){
			status= AUTO_RED;
			setTimer1(500);
		}
		break;
	case AUTO_GREEN:
		if(timer1_flag==1){
			status= AUTO_GREEN;
			setTimer1(300);
		}
		break;
	case AUTO_YELLOW:
		if(timer1_flag==1){
			status= AUTO_YELLOW;
			setTimer1(200);
		}
		break;
	default:
		break;
	}
}

