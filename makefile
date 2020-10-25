main: HW02.o
	cc -o HW02 HW02.o

main.o: HW02.c
	cc -c HW02.c

.PHONY: clean 

clean: 
	-rm *.o