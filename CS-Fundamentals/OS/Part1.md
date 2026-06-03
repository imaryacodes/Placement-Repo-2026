# OPERATING SYSTEM & IT'S FUNCTIONs

- OPERATING SYSTEM - a system software which is an interface between the hardware and users

- Hardware - CPU, I/O Devices, RAM are the devices accessed by the help of OS

- Mostly used OS : Windows (convenience), Linux (throughput) 

- Users can access the OS through applications or directly

- OS works through "system calls".

- FUNCTIONS

1. Resource management - accompanies while concurrrent access of a particular resource to use it's data, i.e. parallel processing (multiprocessing)
2. Process management - manages the execution of multiple processes at a time with the help of CPU scheduling
3. Storage management - uses file system to manage the storage of data in the hard disk(HDs)
4. Memory management - all the processes to be executed are alloted the RAM and then taken back when execution gets completed, as RAM has limited storage
5. Security & Privacy - passwords, security protocol to access the processes and helps prevent interference of processes with each other's execution



# TYPES OF OS

1. BATCH OS
-  similar jobs are clubbed in a batch and are executed afterwards
- earlier, "punch cards" were used to load the processes in offline mode which were given to the operator converted into different Batches.
- CPU and I/O devices are demanded by the processes and non-preemption is present which leads to increased CPU idle time.
- "Monitors" were new updates

2. MULTIPROGRAMMED OS
- RAM accompanies as much processes as possible as it has a limited amount of size
- works on CPU Scheduling
- Processes are brought in a non-preemptive manner which leads to increase in the PPU idle ttime if any process being executed needs to do an I/O operation

3. MULTITASKING OS
- works on TIME Scheduling
- processes brought in preemptive manner
- a process being executed if executes at once completely is good but if it goes to do some I/O, any other process is scheduled to be executed
- more responsive

4. REAL TIME OS
- timing of execution matters, i.e. time restriction is important (eg. missile launch)
- delays can be accepted but timing of execution does matter (eg. gaming launches)

5. DISTRIBUTED OS 
- machines are loosely coupled over a distributed environment throughout the geographical area
- each device is independent with it's own resources and has seperate kernels, which leads to robust nature of the system

6. CLUSTERED OS 
- a supercomputer
- different machines connected through local network acting like a supermachine 
- availability is more
- fault tolerance

7. EMBEDDED OS
- works over fixed functionalities, can't be changed
- eg. microwaves, washing machines, etc


# PROCESS STATES

- A model used to show the user that a processpasses through what all states while growing in its execution progress

1. NEW State
- a process created
- stored in secondary memory

2. READY state
- limited processes out of multiple in new state being turned on are sent to ready state, i.e. are scheduled in RAM by "Long Term Scheduler" for their execution
- accomodates as much processes as possible 

3. RUNNING
- processes being dispatched from ready state sent to running 
- "Short Term Schedulers" perform the process of scheduling other processes when a process has to be stopped from executing after a certain time quantum when a process of higher priority arrives, by preemption
- number of processes being sent depends on the number of CPUs present
- execution occurs, 1 process at a time

4. TERMINATED
- processes once executed enter terminated state
- RAM is deallocated from the processes

5. WAITING
- while in running, if a process demands to do I/O operation, it is done from secondary memory
- the CPU idle time is avoided with the help of sending the respective process into waiting state

6. SUSPENDED
- if wait state is full, process is swapped to suspended waiting state for the time when other process need to enter wait state as well
- "Medium Term Scheduler" accomplish this
- also, if ready state full by new to ready is to happen, the process goes to suspended ready state



# IMPORTANT LINUX COMMANDS

 1. PS - Process State, PID is given

 2. chmod - changes mode of I/O (read, write, execute)

 3. USER CATEGORIES
 - u - Users : first three positions (r,w,e)
 - g - Group : next three positions (r,w,e)
 - o - Others : last three positions(r,w,e)

 4. r,w,e is allotted in the same order and blank indicates that the particular mode is not assigned

 5. in OctalNot - read -> 4, write -> 2, execute -> 1

 6. lseek - m=helps move read/write head fwd or bwd

 7. By default, r/w head at 1st position which can be changed by lseek

 8. lseek_cur = change from current to next

 9. lseek_set = change the current position as given

 10. lseek_end = changes from current to end


# SYSTEM CALLS

- System call is a programmatic way to shift from user mode to kernel mode
- Kernel helps do this as it's the logical unit in OS
- varies for different systems

1. FILE RELATED  - to access a file
- open()
- read()
- write()
- close()
- create()

2. DEVICE RELATED - to access different devices
- read()
- write()
- reposition - value is repositioned
- ioctl - input-ouput decvices are controlled
- fcntl - file control

3. INFORMATION - to access the data of a system
- PID - to know the Parent ID
- attributes
- system data

4. PROCESS CONTROL - process related fns
- load
- execute
- abort
- fork - process creates it's child process (clone) 
- wait
- signal
- allocate

5. COMMUNICATION - for inter-process communication
- pipe() - shared memory value
- create
- delete
- shmget


# fork()

- process creates it's child process (clone) 
- child has it's own ID inheriting the attributes of the parent process
- execution is done for the child and parent as well
- uses values - child(0), parent(1), no child(-1)
- Total number of child processes for each parent is 2^n-1 where n is the no. of forks
- Total number of times of execution = 2^n