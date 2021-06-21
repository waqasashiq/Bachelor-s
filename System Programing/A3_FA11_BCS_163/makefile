all : runsim testsim
runsim : runsim.o 
	gcc -o runsim runsim.o 

testsim : testsim.o
	gcc -o testsim testsim.o

runsim.o: runsim.c 
	gcc -c runsim.c 

testsim.o: testsim.c
	gcc -c testsim.c
clean:
	rm -rf *.o runsim testsim
																					



