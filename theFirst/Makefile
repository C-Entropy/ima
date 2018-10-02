CC = g++
objects = main.o ./tools/cpps/director.o ./tools/cpps/readOthers.o \
	./tools/cpps/putContext.cpp ./tools/cpps/player.cpp

startGame : $(objects)
	g++ -o startGame $(objects)

director.o : ./tools/heads/director.h ./tools/heads/readOthers.h \
	./tools/heads/putContext.h ./tools/heads/player.h

readOthers.o : ./tools/headleis/readOthers.h

putContext.o : ./tools/heads/putContext.h

player.o : ./tools/heads/player.h

.PHONY : clean
clean :
	-rm startGame $(objects)
