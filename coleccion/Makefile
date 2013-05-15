SOURCES = Coleccion.cpp Libro.cpp Revista.ccp
BUILD = $(SOURCES:.cpp=.o)
CPP = g++
CXXFLAGS = -c -Wall

all:
	@for fuente in $(SOURCES); do \
	echo "Compilando ando" $$fuente ; \
	$(CPP) $(CXXFLAGS) $$fuente; \
	done
	
clean:
	@rm *.o
	
