CC := g++
CFLAGS := -std=c++11

BUILDDIR := build
SRCEXT := cpp

SRCDIR := src
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
TARGET := bin/main

MAINS := build/main.o

TESTDIR := test
TESTSOURCES := $(shell find $(TESTDIR) -type f -name *.$(SRCEXT))
# TESTOBJECTS := $(patsubst $(TESTDIR)/%,$(BUILDDIR)/%,$(TESTSOURCES:.$(SRCEXT)=.o))
TESTOBJECTS := $(filter-out  $(MAINS), $(OBJECTS))
TESTTARGET := bin/test

.PHONY: target test clean
all: $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

test: $(TESTTARGET)

$(TESTTARGET): $(OBJECTS)
	$(CC) $(CFLAGS)  -L/usr/include/unittest++  -o $(TESTOBJECTS)  -c $(TESTSOURCES)
 	# $(CC) $(CFLAGS)  -L/usr/include/unittest++  $(TESTSOURCES) $(TESTOBJECTS) -lunittest++  -o $(TESTTARGET)



clean:
	rm $(BUILDDIR)/*.o
	rm $(TARGET)
	rm $(TESTTARGET)
