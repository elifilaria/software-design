OPTS = -Wall -g -std=c++11
LIBS = -lGL -lglut -lm
ARCH := $(shell uname)
ifeq ($(ARCH), Linux)
else
 MACOSX_DEFINE = -DMACOSX -I/sw/include
 LIBS = -I/usr/common/include -I/usr/include/GL -L/System/Library/Frameworks/OpenGL.framework/Libraries -framework GLUT -framework OpenGL -lGL -lm -lobjc -lstdc++

endif

proto-game: proto-game.o
	g++ $(OPTS) -o proto-game proto-game.o $(LIBS)

proto-game.o: proto-game.cpp
	g++ $(OPTS) $(MACOSX_DEFINE) -c proto-game.cpp

clean:
	rm -f *.o proto-game

DVDArrayDriver:  DVDArrayDriver.o DVDArray.o DVD.o
	g++ -g -Wall -std=c++11 -o DVDArrayDriver DVD.o DVDArray.o DVDArrayDriver.o

DVDArrayDriver.o:  DVDArrayDriver.cpp DVDArray.h DVD.h
	g++ -g -Wall -std=c++11 -c DVDArrayDriver.cpp

DVDArray.o:  DVDArray.cpp DVDArray.h DVD.h
	g++ -g -Wall -std=c++11 -c DVDArray.cpp

DVDdriver:  DVD.o DVDdriver.o
	g++ -g -Wall -std=c++11 -o DVDdriver DVD.o DVDdriver.o

DVDdriver.o:  DVDdriver.cpp DVD.o
	g++ -g -Wall -std=c++11 -c DVDdriver.cpp

DVD.o:  DVD.cpp DVD.h
	g++ -g -Wall -std=c++11 -c DVD.cpp

ShapeDriver:  Shape.o ShapeDriver.o
	g++ -g -Wall -std=c++11 -o ShapeDriver Shape.o ShapeDriver.o

ShapeDriver.o:  ShapeDriver.cpp Shape.o
	g++ -g -Wall -std=c++11 -c ShapeDriver.cpp

Shape.o:  Shape.cpp Shape.h ColorPoint2.h
	g++ -g -Wall -std=c++11 -c Shape.cpp

RectangleDriver:  Rectangle.o RectangleDriver.o
	g++ -g -Wall -std=c++11 -o RectangleDriver Rectangle.o RectangleDriver.o Shape.o

RectangleDriver.o:  RectangleDriver.cpp Rectangle.o
	g++ -g -Wall -std=c++11 -c RectangleDriver.cpp

Rectangle.o:  Rectangle.cpp Rectangle.h ColorPoint2.h Shape.h Shape.cpp
	g++ -g -Wall -std=c++11 -c Rectangle.cpp Shape.cpp

CircleDriver:  Circle.o CircleDriver.o
	g++ -g -Wall -std=c++11 -o CircleDriver Circle.o CircleDriver.o Shape.o

CircleDriver.o:  CircleDriver.cpp Circle.o
	g++ -g -Wall -std=c++11 -c CircleDriver.cpp

Circle.o:  Circle.cpp Circle.h ColorPoint2.h Shape.h Shape.cpp
	g++ -g -Wall -std=c++11 -c Circle.cpp Shape.cpp

ShapeDriver1:  Shape.o ShapeDriver1.o
	g++ -g -Wall -std=c++11 -o ShapeDriver1 Rectangle.o Circle.o ShapeDriver1.o Shape.o

ShapeDriver1.o:  ShapeDriver1.cpp Shape.o 
	g++ -g -Wall -std=c++11 -c ShapeDriver1.cpp

Shape.o:  Circle.cpp Circle.h Rectangle.cpp Rectangle.h ColorPoint2.h Shape.h Shape.cpp
	g++ -g -Wall -std=c++11 -c Circle.cpp Rectangle.cpp Shape.cpp

ShapeDriver2:  Shape.o ShapeDriver2.o
	g++ -g -Wall -std=c++11 -o ShapeDriver2 Rectangle.o Circle.o ShapeDriver2.o Shape.o

ShapeDriver2.o:  ShapeDriver2.cpp Shape.o 
	g++ -g -Wall -std=c++11 -c ShapeDriver2.cpp

Shape.o:  Circle.cpp Circle.h Rectangle.cpp Rectangle.h ColorPoint2.h Shape.h Shape.cpp
	g++ -g -Wall -std=c++11 -c Circle.cpp Rectangle.cpp Shape.cpp

OPTS = -Wall -g -std=c++11
LIBS = -lGL -lglut -lm
ARCH := $(shell uname)
ifeq ($(ARCH), Linux)
else
 MACOSX_DEFINE = -DMACOSX -I/sw/include
 LIBS = -I/usr/common/include -I/usr/include/GL -L/System/Library/Frameworks/OpenGL.framework/Libraries -framework GLUT -framework OpenGL -lGL -lm -lobjc -lstdc++

endif

proto-draw: proto-draw.o Shape.o Rectangle.o Circle.o
	g++ $(OPTS) -o proto-draw proto-draw.o Shape.o Rectangle.o Circle.o $(LIBS)

proto-draw.o: proto-draw.cpp
	g++ $(OPTS) $(MACOSX_DEFINE) -c proto-draw.cpp

clean:
	rm -f *.o proto-draw
