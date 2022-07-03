

#ifndef INT_HANDLER_H_
#define INT_HANDLER_H_
#include <stdbool.h>

void IntPortLHandler(void);
void IntPortKHandler(void);
void IntUART0Handler(void);

//void IntHandlerTimer0A(void);
extern bool toggleLeft;
extern bool toggleRight;
extern bool toggleInvert;
extern bool togglePreset;
extern unsigned char buffer[10];
extern unsigned char preset[10];
extern unsigned char preset1[10];
extern int counter;
#endif /* INT_HANDLER_H_ */
