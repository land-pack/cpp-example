cmake_minimum_required(VERSION 3.9)
set(hello world) # set variable 


message([WARNING] 'HELLO ${hello}') # output the value of variable to consolse


# Custom command : Function

function(my_command input output)
    set(${output} 'add more information to input ${input}')
    message([STATUS] '${output}')
endfunction(my_command)

my_command(foo bar)
