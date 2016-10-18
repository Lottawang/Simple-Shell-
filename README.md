# Simple-Shell



 This is a C program to act like a small shell that processes single commands entered by the user. In particular, the program assembles the command and execute it by using the strtok() and fork(). The commands/programs location can be anywhere in $PATH and might have arguments.
 
E.g., if the input-line entered by the user is

  ls -F

# Instruction:

The pseudo-code

Algorithm:
While(1)
begin
  read command line from user
  assemble command args
  duplicate current process (fork)
  child should exec to the new program
  parent process waits for its child to terminate
end


# Language: 

C
