Chad Calvert, Matt Hill and Mikey Shrier's simple shell project!

This shell works in both interactive and non-interactive mode. It serves as a command line interface terminal to interact with your computer, much like the bash program found on almost all linux/unix systems. For more details on functionality, please reference man(bash).

To compile, run the following in your existing shell terminal:

$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

and then run the program in interactive mode by entering

$ ./hsh

or non-interactive mode by entering, for example,

$ echo "/bin/ls" | ./hsh

Thank you for viewing our project!