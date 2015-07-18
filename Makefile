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
	echo 1
	$(CC) $(CFLAGS)  $(OBJECTS) -o $(TARGET)


$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
		echo 2
	  @mkdir -p $(BUILDDIR)
	  $(CC) $(CFLAGS) -c -o $@ $<


test: $(TESTTARGET)

$(TESTTARGET): $(OBJECTS)
	$(CC) $(CFLAGS)  -L/usr/include/unittest++ $(TESTOBJECTS) $(TESTSOURCES) -lunittest++  -o $(TESTTARGET)



clean:
	rm $(BUILDDIR)/*.o
	rm $(TARGET)
	rm $(TESTTARGET)
