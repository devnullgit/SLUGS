#ifndef _NAVSUPPORT_H_
#define _NAVSUPPORT_H_

#ifdef __cplusplus
       extern "C"{
#endif
       	
#include "apDefinitions.h"
#include "protDecoder.h"
       	       	
void getMidLevelCommands (float* commands);
unsigned char isApManual (void);
void getPidIdx (unsigned char idx, float* PID);
float getDynamic (void);
void getAttitude ( float* attitude);
void getXYZ (float* xyz);
unsigned char getMaxWp (void);
unsigned char isWpFly (void);
void setDiagnosticFloat (float * flValues);
void setDiagnosticShort (short* shValues);
void getWP (unsigned char idx, float* WPpos);
void setDiagnosticAb (float * flValues);
void setDiagnosticGb (float * flValues);
unsigned char getApControlType (void);
unsigned char getPassValues (unsigned char * pasVals);
void setCurrentCommands (float airSpeed);

#ifdef __cplusplus
       }
#endif

#endif /* _NAVSUPPORT_H_ */
