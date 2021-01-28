all: lab4
lab4: functions.o lab4.o
	gcc functions.o lab4.o -o lab4
lab4.o: lab4.c functions.h
	gcc -c lab4.c
functions.o: functions.c functions.h
	gcc -c functions.c
clean:
	rm -rf *.o
