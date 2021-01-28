all: Calendar

Calendar: Time.o Calendar.o
	g++ Time.h Calendar.o -o Calendar

Calendar.o: Time.cpp Time.h
	g++ -c Calendar.cpp

Time.o: Time.cpp Time.h
	g++ -c Time.cpp

clean:
	rm -rf *.o

