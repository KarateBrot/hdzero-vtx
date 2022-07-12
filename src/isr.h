#ifndef  _IRS_H_
#define _IRS_H_

extern uint8_t btn1_tflg;
extern uint8_t pwr_sflg;
extern uint8_t pwr_tflg;
extern uint8_t cfg_tflg;
extern uint8_t temp_tflg;
extern uint16_t  seconds;
extern uint16_t idata timer_ms10x;
extern uint8_t timer_4hz;
extern uint8_t timer_8hz;
extern uint8_t timer_16hz;
extern uint8_t RS0_ERR;


void CPU_init(void);

#endif  //_IRS_H_
