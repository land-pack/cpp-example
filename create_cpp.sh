#!/bin/bash


SOURCE="${BASH_SOURCE[0]}"
DIR="$( cd -P "$( dirname "$SOURCE" )" && pwd )"
echo "CWD --> '$DIR'"
# custom project name
if [ $# -lt 1 ]; then
   proj_name="cpp_demo";
else
   proj_name=$1;
fi;

echo $proj_name;

echo 'create new project name as >>', $proj_name

proj_path="$DIR/$proj_name"

echo $proj_path


mkdir $proj_path
cd $proj_path

# Create sub-folder for the project!


mkdir bin build doc include lib spike src test
touch Makefile README.md


# Tips

echo '.............create successfully'
