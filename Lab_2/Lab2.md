# Title :- Intro to VIM

# Objectives

- To learn to use VIM

# Lab Activity

1.  vi <filename>
    vi helloworld.txt,

    - enter in VIM to edit the content on file named helloworld.txt
    - if file isn't created, it creates a new file and enter in edit mode

2.  enter text on file
    <esc> :q - to exit without saving
    <esc> :wq - to exit writing the content on file

3.  Vim basic commands

    a Append text following current cursor position

        A    Append text to the end of current line

        i     Insert text before the current cursor position

        I     Insert text at the beginning of the cursor line

        o    Open up a new line following the current line and add text there

        O   Open up a new line in front of the current line and add text there

Ctrl + e - 1 line up  
Ctrl + d - 1/2 page up
Ctrl + f - 1 page up
Ctrl + y - 1 line down  
Ctrl + u - 1/2 page down
Ctrl + b - 1 page down

4. Execute C program in terminal

- gcc <programfile.c>
  gcc hello.c

  - compile c program on hello.c file
  - It gives a compiled file named a.out
  - To execute the compiled file we use
    ./a.out

- gcc -o <outputfile> <programfile.c>
  gcc -o hello hello.c
  - compile c program on hello.c file
  - It gives a compiled file named hello
    To execute the compiled file we use
    ./hello

# Using nano

1. nano <filename>
   - nano hello.c
   - It opens the nano editor
   - Write code on the file

Basic nano commands:

- CTRL + X - exit nano
- CTRL + O - write on file
- CTRL + G - get help
- CTRL + R - read file
- CTRL + K - cut
- CTRL + U - paste
- CTRL + T - execute
- CTRL + J - justify
