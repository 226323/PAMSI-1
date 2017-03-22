CPP = g++ -std=c++11
FLAGS= -Wall -pedantic -I inc/ 
OBJECTS = obj/main.o obj/klasa.o obj/plus1.o obj/razy2.o
__start__: a.out
	./a.out

a.out: ${OBJECTS}
	${CPP} ${FLAGS} ${OBJECTS}

obj/main.o: src/main.cpp inc/klasa.hh inc/plus1.hh
	${CPP} ${FLAGS} -c -o obj/main.o src/main.cpp

obj/klasa.o: src/klasa.cpp inc/klasa.hh 
	${CPP} ${FLAGS} -c -o obj/klasa.o src/klasa.cpp

obj/plus1.o: src/plus1.cpp inc/plus1.hh
	${CPP} ${FLAGS} -c -o obj/plus1.o src/plus1.cpp

obj/razy2.o: src/razy2.cpp inc/razy2.hh
	${CPP} ${FLAGS} -c -o obj/razy2.o src/razy2.cpp


clean:
	rm -f ${OBJECTS} a.out