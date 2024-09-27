#include "serial.h"
#include "rprintf.h"

char glbl[128];

unsigned int getEL() {
	unsigned int el;
	asm("mrs %0,CurrentEL"
			: "=r"(EL)
			:
			:);
	return el>>2;
}

void kernel_main() {
   
    extern int __bss_start, __bss_end;    
    char *bssstart, *bssend;

    bssstart = &__bss_start;
    bssend = &__bss_end;

    for(char *ptr = bssstart; ptr < bssend; ptr++) {
	    *ptr = 0x0;
    }

    unsigned int current_el = getEL();
    putc('d');
    esp_printf(putc, "Current Execution Level is %d\r\n", current_el);

      
    while(1){
   }
}
