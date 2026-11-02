library:main.o file.o add_book.o edit_book.o take_book.o find_book.o save_book.o list_book.o count_book.o
	cc main.o file.o add_book.o edit_book.o take_book.o find_book.o  save_book.o list_book.o count_book.o -o library
file.o:file.c
	cc -c file.c
add_book.o:add_book.c
	cc -c add_book.c
edit_book.o:edit_book.c
	cc -c edit_book.c
take_book.o:take_book.c
	cc -c take_book.c
find_book.o:find_book.c
	cc -c find_book.c
save_book.o:save_book.c
	cc -c save_book.c
list_book.o:list_book.c
	cc -c list_book.c
count_book.o:count_book.c
	cc -c count_book.c

clean:
	rm -f *.o library

