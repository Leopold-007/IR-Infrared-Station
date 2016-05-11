#ifndef IR_OPERATION
#define IR_OPERATION

#include <ESP8266WiFi.h>
#include "IR-lib.h"

#define IR_STATION_MODE_NULL  0
#define IR_STATION_MODE_STA   1
#define IR_STATION_MODE_AP    2

// define variables
extern remocon ir[IR_CH_SIZE];
extern uint8_t mode;

void modeSetup(void);

void irSendSignal(int ch);
int irRecodeSignal(int ch);

void irDataBackupToFile(int ch);
void irDataRestoreFromFile(void);

void settingsRestoreFromFile(void);
void settingsBackupToFile(void);

// extracts a string between "head" and "tail"
String extract(String target, String head, String tail = "&");

#endif

