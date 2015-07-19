CC=g++
CFLAGS := -std=c++11

SRCDIR := src
SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))

TESTDIR := test
TESTSOURCES := $(shell find $(TESTDIR) -type f -name *.$(SRCEXT))

BUILDDIR := build
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))

TARGET := bin/main
TESTTARGET := bin/testuj

MAINS := build/main.o
TESTOBJECTS := $(filter-out  $(MAINS), $(OBJECTS))

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS)  $(OBJECTS) -o $(TARGET)


$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	  @mkdir -p $(BUILDDIR)
	  $(CC) $(CFLAGS) -c -o $@ $<

test: $(TESTTARGET)

$(TESTTARGET): $(OBJECTS)
	# $(CC) $(CFLAGS) -L/usr/include/unittest++ -c -o $(BUILDDIR)/Box_test.o $(TESTDIR)/Box_test.cpp
	# $(CC) $(CFLAGS) -L/usr/include/unittest++ -c -o $(BUILDDIR)/Card_test.o $(TESTDIR)/Card_test.cpp
	# $(CC) $(CFLAGS) -L/usr/include/unittest++ -c -o $(BUILDDIR)/Dealer_test.o $(TESTDIR)/Dealer_test.cpp
	# $(CC) $(CFLAGS) -L/usr/include/unittest++ -c -o $(BUILDDIR)/Deck_test.o $(TESTDIR)/Deck_test.cpp
	# $(CC) $(CFLAGS) -L/usr/include/unittest++ -c -o $(BUILDDIR)/Game_test.o $(TESTDIR)/Game_test.cpp
	# $(CC) $(CFLAGS) -L/usr/include/unittest++ -c -o $(BUILDDIR)/main_test.o $(TESTDIR)/main.cpp
	# $(CC) $(CFLAGS) -L/usr/include/unittest++ -c -o $(BUILDDIR)/Person_old_test.o $(TESTDIR)/Person_old_test.cpp
	# $(CC) $(CFLAGS) -L/usr/include/unittest++ -c -o $(BUILDDIR)/Person_test.o $(TESTDIR)/Person_test.cpp
	# $(CC) $(CFLAGS) -L/usr/include/unittest++ -c -o $(BUILDDIR)/Player_test.o $(TESTDIR)/Player_test.cpp
	# $(CC) $(CFLAGS) -L/usr/include/unittest++ -c -o $(BUILDDIR)/Strategy_test.o $(TESTDIR)/Strategy_test.cpp
	# $(CC) $(CFLAGS) -L/usr/include/unittest++ -c -o $(BUILDDIR)/Take17_test.o $(TESTDIR)/Take17_test.cpp
	$(CC) $(CFLAGS)  -L/usr/include/unittest++ $(TESTOBJECTS) $(TESTSOURCES) -lunittest++  -o $(TESTTARGET)



clean:
	rm $(BUILDDIR)/*.o
	rm $(TARGET)
	rm $(TESTTARGET)
