#ifndef _SLEEP_H_
#define _SLEEP_H_

#include <stdint.h>


#if defined(CPU_CC1110)

	void WOR_ISR(void) __interrupt (5);

#endif


void sleepForMsec(uint32_t msec);
void sleepTillInt(void);	//assumes you left only one int enabled!

#endif
