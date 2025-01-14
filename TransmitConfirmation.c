#include <stdbool.h>

extern int VolatileFunc();
void userfunction(int * shared_mem);
bool TXConf_Status = false;

void userfunction(int* const TxConfReg_ADDR){

    /*Please complete the code by following below step:
    1. Declare an integer pointer and assign it with TxConfReg_ADDR.
    2. TxConfReg_ADDR is a controller register address which will set by the controller
       once message trasnitted successfully.
    3. Wait till ptr is set which means till controller sets the register by using while or any other lop.
    4. If controller sets the ptr then come out of the loop and make TXConf_Status as true

    Note : Please use the same name TXConf_Status for setting the status to true*/

}

int main(){
    VolatileFunc();
}