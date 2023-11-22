# 0x1C. C - Makefiles

## Description

This project focuses on understanding and implementing Makefiles in C programming. The tasks involve creating a Makefile to compile specific files and achieving various learning objectives related to make, Makefiles, rules, variables, and more.

## Resources

- [Makefile Documentation](https://www.gnu.org/software/make/manual/make.html)
- [Installing the make utility](https://www.gnu.org/software/make/)
- [Learning Objectives](#learning-objectives)

## Learning Objectives

By the end of this project, you should be able to:

- Explain what make and Makefiles are.
- Understand when, why, and how to use Makefiles.
- Define rules and know how to set and use them.
- Differentiate between explicit and implicit rules.
- Identify common and useful rules.
- Work with variables and understand how to set and use them.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- OS: Ubuntu 20.04 LTS
- Version of gcc: 9.3.0
- Version of make: GNU Make 4.2.1
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory

## Files

In the following tasks, we are going to use these files. We want to compile these only.

## Tasks

### Task 0: make -f 0-Makefile

**Requirements:**

- Name of the executable: school
- Rules: all
  - The all rule builds your executable
- Variables: none

**Example:**

```bash
julien@ubuntu:~/0x1C. Makefiles$ make -f 0-Makefile 
gcc main.c school.c -o school
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
julien@ubuntu:~/0x1C. Makefiles$ 
