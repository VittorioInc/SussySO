/*Implement the System Service Interface (SSI) process. 
This involves handling various system service calls (SYS1, SYS3, SYS5, SYS6, SYS7, etc.).*/


/*ROBE DA IMPLEMENTARE:
    [fun. name - identifiers for different system service calls (services provided by the operating system) - explaination]

TerminateProcess (SYS1): This service is responsible for terminating a process and all its progeny. 
                        When a process is terminated, the entire subtree of processes rooted at that process must be terminated.

GetTimeOfDay (SYS3): This service allows a process to obtain the current time of day from the operating system.

WaitForClock (SYS5): This service is used by a process to wait for the next Pseudo-clock Tick. 
                    The operating system is expected to unblock all processes that are waiting for this clock tick.

Delay (SYS6): This service enables a process to delay its execution for a specified amount of time.

GetPid (SYS7): This service allows a process to obtain its process identifier (PID).

GetSupportData (SYS6): This service enables a process to obtain the process's Support Structure.

GetProcessID (SYS7): This service allows a process to obtain the process identifier (PID) of itself or its parent.
*/