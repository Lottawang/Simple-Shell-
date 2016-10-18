//comments:
//NAME: Danfeng Wang,  SECTION 2. 
//DATE: 2016-03-07
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#define command_Max_length 255
int main(int argc, char {
char str[255]; int result; char *p;
int status;
while(1) {
*argv[])
printf("Please input the commands(input exit to exit)>\n"); if((result=read (STDIN_FILENO,str,255))>0)// read the user's commands {
str[result-1]='\0';//change the end '\n' to '\0'; //printf("result is%d\n", result );
char *cmd[255];
int i=0;
p = strtok(str, " ");
while(p) {
cmd[i] = p;
//printf("i is %d , p is %s.\n", i,p); //printf("i is %d cmd[i] is%s\n", i,cmd[i]); i++;
p = strtok(NULL, " ");
} //split the user's commands.
//printf("cmd[0] is %s\n",cmd[0] ); cmd[i]= NULL;
if(strcmp(cmd[0], "cd") == 0) {
int a = chdir(cmd[1]); if(a == -1)
{
printf("ERROR: cd: %s No such file\n",cmd[1]); }
}
if(strcmp(cmd[0], "exit") == 0) {
exit(0); }
int pid = fork();
if(pid == -1) {
printf("ERROR: impossible to fork");
exit(1); }
else if(pid == 0)// child exec to the new program {
if( execvp(cmd[0],cmd) == -1) {
printf("Error:exec failed\n");
exit(1); }
}
else //parent {
do {
//printf("\nChild status %d.\n\n",status);
break; }
process
has terminated with
wait(&status);
while(!WIFEXITED(status) && !WIFSIGNALED(status)); }
} else {
printf("ERROR: Cannot read the user commands\n");
} }
}
