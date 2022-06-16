CC = gcc
PGNAME = exe
OBJS = File1.o File2.o File3.o
$(PGNAME): $(OBJS)
		$(CC) -o $@ $^ -lm
.c.o:
		$(CC) -c -o $@ $<
File1.o: inc.h
clean:
		rm -f $(PGNAME) $(OBJS)