default: mk_static_lib

mk_static_lib: $(find ./ -name "*.c") libmy.a
	cc $^ -o $@

libmy.a: 0-isupper.o 1-memcpy.o 2-strlen.o 3-strcmp.o 5-strstr.o 0-memset.o 1-strncat.o 2-strncpy.o 3-strspn.o 6-abs.o _putchar.o 0-strcat.o 100-atoi.o 3-islower.o 4-isalpha.o 9-strcpy.o 1-isdigit.o 2-strchr.o 3-puts.o 4-strpbrk.o
	ar -rcv $@ $^
