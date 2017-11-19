cmake_minimum_required(VERSION 3.9)
set(hello world) # set variable 


message([WARNING] 'HELLO ${hello}') # output the value of variable to consolse


# Custom function : Function

function(my_function input output)
    set(${output} 'add more information to input ${input}')
    message([STATUS] '${output}')
endfunction(my_function)

my_function(foo bar)

# Custom function : Macros
# Create macros to wrap commands
# that have output parametes
# Otherwise, create a function.

macro(my_macro input output)
    message([WARNING] 'hello you input is ${input}')
endmacro(my_macro)


my_macro(hello frank)
