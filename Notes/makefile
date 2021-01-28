all: book

book: book.o Textbook.o EBook.o
	g++ -o book book.o Textbook.o EBook.o

book.o: book.cpp Textbook.h EBook.h 
	g++ -c book.cpp

Textbook.o: Textbook.cpp Textbook.h
	g++ -c Textbook.cpp

EBook.o: EBook.cpp EBook.h
	g++ -c EBook.cpp


