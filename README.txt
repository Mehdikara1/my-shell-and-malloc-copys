Wed Oct 14 04:12:09 PM UTC 2026
started working on my malloc
Wed Oct 14 05:55:46 PM UTC 2026
setting the main file with the supposed things for malloc



---------------------my notes---------------------

- sbrk returns a * void
- the value is equal to the address where the break it was 
-addresses has to be a multiple of the max align size (16 bit / 8 bit ... it follows the biggest data type) for cpu speed and to keep the memory organized when freeing


---------------------problems to fix ------------------

-calling other functions in between may move the break up making calling my_alloc twice in a row may give uncontinous memory    XXX

-setting padding  XXX


--------------------fix history----------------------

-Sat Oct 17 09:13:14 PM UTC 2026
---made pointer converter

Wed Oct 21 03:10:51 PM UTC 2026
--- made padding using bit masks 