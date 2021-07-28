g++ -c main.cpp
g++ -c singlevar.cpp
g++ main.o singlevar.o -o cpp_program
rm main.o singlevar.o
./cpp_program
rm ./cpp_program
