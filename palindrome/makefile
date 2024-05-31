palindrome: palindrome.cpp
	g++ -Wall -pedantic -o palindrome palindrome.cpp

palind: palindrome.o
	g++ -Wall -pedantic -o palindrome palindrome.o

palind.o: palindrome.cpp ../myfunctions.h ../myfunctions.cpp
	g++ -Wall -pedantic -c palindrome.cpp ../myfunctions.h ../myfunctions.cpp