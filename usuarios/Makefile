SOURCES = Usuario.cpp Monitor.cpp
BUILD   =  $(SOURCES:.cpp=.o)
CPP     = g++
CXXFLAGS = -c -Wall

all:
	@for fuente in $(SOURCES); do \
	  echo "Compilando" $$fuente ; \
          $(CPP) $(CXXFLAGS) $$fuente; \
        done

clean:
	@rm *.o