Wed Oct 14 04:12:09 PM UTC 2026
started working on my malloc
Wed Oct 14 05:55:46 PM UTC 2026
setting the main file with the supposed things for malloc



---------------------my notes---------------------

- sbrk returns a * void
- the value is equal to the address where the break it was 
-addresses has to be a multiple of the max align size (16 bit / 8 bit ... it follows the biggest data type) for cpu speed and to keep the memory organized when freeing

-my first design i were going with aligning the pointers before calling (sbrk) but that leaves a problem when freeing , since i need to also know how many bytes i should go behind
---my second design will make sure for it to always be aligned with the max align value making it easier for freeing later by just freeing only the bytes after the pointer (depends in the size) and not having to go behind


---------------------problems to fix ------------------

-calling other functions in between may move the break up making calling my_alloc twice in a row may give uncontinous memory    XXX

-setting padding  XXX

-break doesnt move with the pointer padding   XXX (but scrapped for design problems)

-making my_alloc align the pointers always when calling


--------------------fix history----------------------

-Sat Oct 17 09:13:14 PM UTC 2026
---made pointer converter

Wed Oct 21 03:10:51 PM UTC 2026
--- made padding using bit masks 

-Fri Oct 23 02:42:33 PM UTC 2026
--- scrapping the first design