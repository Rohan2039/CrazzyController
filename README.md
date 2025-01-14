# CrazzyController
~~Software for Hardware~~ Software is a Hardware.

This repo demonstrates the use case of the volatile keyword through a device driver example.

**Files Overview:**
1. Driver.o // This is the driver code which is incomplete.
2. TransmitConfirmation.c // write this txconfirmation function to make driver code complete
3. crazycontroller // executable file which mimics hardware.

**Steps to Run:**
1. Write the TransmitConfirmation.c file as outlined.
2. Run the make command using the provided Makefile.
3. Open two terminals:
4. Run crazycontroller in one terminal.
5. Run Driver in the other.
6. Modify the pointer in TransmitConfirmation.c to volatile, recompile, and rerun.
![image](https://github.com/user-attachments/assets/e5829c0c-32a7-4183-85b6-3c6646fcd937)

**Observation** 
1. With a non-volatile pointer, the while loop does not terminate.
2. With a volatile pointer, the code executed as expected.

But why !!!

**Hint**(AI generated image + some edits)
![image](https://github.com/user-attachments/assets/5a6c5801-5376-42cb-a5fb-5d58a891c2c2)

