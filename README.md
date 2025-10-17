# CMSC_326_Lab3
# Juan Diego Mora


# TO DO

## Get Started with Tests

Run the 5 tests required to complete the lab
1. Alarm Single (source code inside alarm-wait.c)
2. Alarm Multiple (source code inside alarm-wait.c)
3. Alarm Zero
4. Alarm Negative
5. Alarm Simultaneous

To run test just call `make check` on the threads directory, you can also call `make VERBOSE=1 build/tests/threads/alarm-single.result`
to make it show extra information about the test

## Create a list of sleeping threads
and keep track of how many ticks they each will to wait for (somewhere in the Kernel level. It cannot be in the Thread Level because they're going to be sleeping!)

## Add them to the Ready list 
So that they can be waken up by the scheduler. Where is the threads-ready-to-run list? There's already one in the Kernel level...

## Make Sure!
With the current implementation, all threads are still being swapped by the scheduler, this mechanic will stop happening after the correct implementation has been implemented. 

