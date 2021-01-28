all: BankAccount

BankAccount: BankAccount.o lab5.o
	g++ -o BankAccount BankAccount.o lab5.o

BankAccount.o: BankAccount.cpp BankAccount.h
	g++ -c BankAccount.cpp

lab5.o: lab5.cpp BankAccount.h
	g++ -c lab5.cpp


//Edit

clean:
	rm -rf *.o