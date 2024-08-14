all:
	g++ main.cpp
	./a.out > result < test
	rm ./a.out
	clear
	cat result
	rm result

clean:
	rm test
	mv main.cpp accepted.cpp
	rm Makefile

build:
	cat ../../Prototypes/main.cpp.prototype > main.cpp
	touch test

import:
	head -7 main.cpp > tmp
	cat ../../Macros/$(file) >> tmp
	tail -n +7 main.cpp >> tmp
	mv tmp main.cpp
