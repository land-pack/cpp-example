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


# if endif()

#Don't use file(GLOB) in projects



# Constructors:

# add_executable()
# add_library()


# Member functions:

# Forget those commands:
# add_compile_options ..# Forget those commands:
# add_compile_options ..# Forget those commands:
# add_compile_options ..


##target_compile_features(Foo
##    PUBLIC
##        cxx_strong_enums
##    PRIVATE
##        cxx_lambdas
##        cxx_range_for
##)

# Get your hands off CMAKE_CXX_FLAGS!

# Use target_link_libraries()
# to express direct dependencies!

# Use a Find module for third party libraries that
# are not build with CMake


# Export your library interface!
# find_package(Bar 2.0 REQUIRED)
# add_library(Foo ...)
# target_link_libraries(Foo PRIVATE Bar:Bar)

# install(TARGETS Foo EXPORT FooTarget ~)

# Warning:
# The library interface may change during ...

# ================Create a Cpack
# CPack is a packaging tool distributed with CMake
# set variables ...
# include 
# Write your own CPackConfig.cmake
# and include ...
# CPACK_INSTALL_CMAKE_PROJECTS is a list of
# quadruples ...


# 1.
