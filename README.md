# CrazzyController
~~Software for Hardware~~ Software is a Hardware.

This repo demonstrates the use case of the volatile keyword through a device driver example.

**Files Overview:**
1. Driver.o // This is the driver code which incomplete.
2. TransmitConfirmation.c // write this txconfirmation function to make driver code complete
3. crazycontroller // executable file which mimics hardware.

**Steps to Run:**
1. Write the TransmitConfirmation.c file as outlined.
2. Run the make command using the provided Makefile.
3. Open two terminals:
4. Run crazycontroller in one terminal.
5. Run Driver in the other.
6. Modify the pointer in TransmitConfirmation.c to volatile, recompile, and rerun.

**Observation** 
1. With a non-volatile pointer, the while loop does not terminate.
2. With a volatile pointer, the code executed as expected.

But why !!!
