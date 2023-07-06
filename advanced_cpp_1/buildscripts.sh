echo "Starting the build process ..."
g++ -c dummy.cc
g++ -c main.cc
g++ -o exe_generated_by_sh main.o dummy.o
echo "Finished building your program"