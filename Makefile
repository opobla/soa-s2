




all: soa.o FranciscoGonzalez.o add.o alejandroRaboso.o archivo_jaime.o cesarmartin.o cristianoronaldo.o edug2923.o heraszorita.o mario_fernandez.o nacholo.o sergilm.o simone.o soa.o
	gcc  $^ -o $@

%.o: %.c
	gcc  -c $< -o $@

clean:
	rm -Rf *.o
	rm -Rf all
