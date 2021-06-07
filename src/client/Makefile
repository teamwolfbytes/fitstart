CXX=g++

SRCS=fitstart.cpp ../housekeeping.cpp exercise.cpp config/config.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: fitstart

fitstart: $(OBJS)
	$(CXX) -o fitstart $(OBJS)

fitstart.o: fitstart.cpp
	g++ -o fitstart.o -c fitstart.cpp

housekeeping.o: housekeeping.cpp housekeeping.h 
	g++ -o housekeeping.o -c housekeeping.cpp

exercise.o: exercise.cpp exercise.h housekeeping.h
	g++ -o exercise.o -c exercise.cpp

config/config.o: config/config.cpp config/config.h housekeeping.h
	g++ -o config/config.o -c config/config.cpp

clean:
	rm $(OBJS)

.PHONY: clean
