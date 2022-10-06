

SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)

all: $(OBJECTS)
	gcc  $^ -o $@

%.o: %.c
	gcc  -c $< -o $@

clean:
	rm -Rf *.o
	rm -Rf all
