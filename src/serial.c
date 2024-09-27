#include "rprintf.h"
#define MU_IO 0x3F215040

int putc(int data){
	unsigned int *mu_io = (unsigned int*) MU_IO;
	*mu_io = (unsigned int)data;
	return 0;
}


int main() {
	esp_printf(putc, "Current Execution Level is %d\r\n", getEL());
}




