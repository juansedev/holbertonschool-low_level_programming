# _0x15. C - File I/O


# Table of contents

	1. [Authors](#Authors)
	2. [Features](#Features)
	3. [How Use](#How-Use)
	4. [Tasks](#Tasks)

# Authors

	**Juan Llano Gallego**

	- Twitter: [@llanoJS] <https://twitter.com/llanoJS>
	- Github: [@EckoJuan] <https://github.com/EckoJuan>

# Features

	- The main function uses a structure to switch among the different functions

	- The function uses a buffer to store temporary  and print the string

	- The function returns the number of characters printed

# How Use

## How to compile

### Requirements

	- compile on Ubuntu 14.04 LTS
	- compile with gcc 4.8.4

### Flags to compile

	- `$ gcc -Wall -Werror -Wextra -pedantic *.c`

#### Main Exampple

	```c
	```Task 0
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

	/**
	 * main - check the code for Holberton School students.
	 *
	 * Return: Always 0.
	 */
int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}
	n = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}


```

##

# Tasks

## Task 0

