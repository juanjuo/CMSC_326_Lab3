# CMSC_326_Lab3
# Juan Diego Mora


# TO DO

## Get Started with Tests

Run the 5 tests required to complete the lab (which tests are these?) (all except alarm-priority)

## Create a list of sleeping threads
and keep track of how many ticks they each will to wait for (somewhere in the Kernel level. It cannot be in the Thread Level because they're going to be sleeping!)

## Add them to the Ready list 
So that they can be waken up by the scheduler. Where is the threads-ready-to-run list? There's already one in the Kernel level...

## Make Sure!
With the current implementation, all threads are still being swapped by the scheduler, this mechanic will stop happening after the correct implementation has been implemented. 

