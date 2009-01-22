#ifndef _GROUNDSTATIONDRIVER_H_
#define _GROUNDSTATIONDRIVER_H_

#ifdef __cplusplus
       extern "C"{
#endif

#include "circBuffer.h"
#include "apDefinitions.h"
#include "protDecoder.h"
#include "apUtils.h"
#include <p33fxxxx.h>
#include <string.h>
#include <uart.h>
#include "DEE.h"
#include "interProcCommSlave.h"
       	
void uart1Init (void);
void gsRead (unsigned char* gsChunk);       	
void prepareTelemetry ( unsigned char* dataOut);
void updatePWM (unsigned short * PWMData);
void updateLoad (unsigned char mcuLoad);
void controlMCUInit (void);
void EEPInit (void);
void loadPIDData (void);

#ifdef __cplusplus
      }
#endif


#endif /* _GROUNDSTATIONDRIVER_H_ */
