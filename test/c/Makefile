all:
	python3 main.py > result < test
	clear
	cat result
	rm result

clean:
	rm test
	mv main.py accepted.py
	rm Makefile

build:
	cat ../../Prototypes/main.py.prototype > main.py
	touch test
