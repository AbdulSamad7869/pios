

char glbl[128];

void kernel_main() {
   
    extern int __bss_start, __bss_end;    
    char *bssstart, *bssend;

    bssstart = &__bss_start;
    bssend = &__bss_end;

    for(char *ptr = bssstart; ptr < bssend; ptr++) {
	    *ptr = 0x0;
    }
      
    while(1){
   }
}
