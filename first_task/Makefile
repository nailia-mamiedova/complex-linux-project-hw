library:
	gcc -Wall -Werror -Wextra -c src/*.c
	ar -rc libcalc.a *.o
	ranlib libcalc.a
	ar -t libcalc.a

main: libcalc.a
	gcc main.c -L . -l calc -o main -lm

clean:
	rm -rf *.o main libcalc.a
