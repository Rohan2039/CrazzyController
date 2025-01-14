#include <stdbool.h>

extern int VolatileFunc();
void userfunction(int * shared_mem);
bool TXConf_Status = false;

void userfunction(int* const TxConfReg_ADDR){

    int * ptr;
    ptr = TxConfReg_ADDR; 
    *ptr = 0;
    while(*ptr==0){

    }
    TXConf_Status = true;
    
}

int main(){
    VolatileFunc();
}