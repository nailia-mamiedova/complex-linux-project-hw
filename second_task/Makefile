library:
	gcc -Wall -Werror -Wextra -fpic -c src/*.c
	gcc -shared -o libformat.so *.o
	sudo cp `pwd`/libformat.so /usr/lib
	sudo chmod 0755 /usr/lib/libformat.so
	sudo ldconfig

main: libformat.so
	gcc main.c -l format -Wall -o main

clean:
	rm -rf *.o main libformat.so
	sudo rm /usr/lib/libformat.so
