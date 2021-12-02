#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "shell.h"

int main(void)
{
  char **arr, *cmd;
  size_t n = 0;
  ssize_t strin = 0;
  int ecode = 0, i;
    
  do
    {
      i = 0;
      if (isatty(STDIN_FILENO))
	prompt;
      signal(SIGINT, stopcc);
      cmd = getline(&cmd, &n, stdin);
      if (strin == EOF)
	break;
      cmd[strin - 1] = '\0';
      arr = delim(cmd, " ");
        if(arr == NULL)
        {
	  continue;
        }

        if(strcmp(arr[0], "\n") == 0)
        {
            free(cmd);
            continue;
        }
        if (strincmp(arr[0], "exit") == 0)
        {
	  while (arr[i])
            free(arr[i++]);
	  free(arr);
	  break;
        }
	if (strincmp(arr[0], "env") == 0)
	  {
	    penv();
	    while (arr[i])
	      free(arr[i++]);
	    free(arr);
	    continue;
	  }
	pfind(arr), ecode = exec(arr);
	while (arr[i])
	  free(arr[i++]);
        free(arr);
    } while(1);
  free(cmd);
return(ecode);
}
