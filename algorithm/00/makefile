SOURCES=prac00.cpp
OBJECTS=$(SOURCES:%.cpp=%.o)
PROG=sample1
INCLUDEDIR=-I.
TESTLIB= -lgtest -lgtest_main
TESTRUN=prac00_test
TESTSOURCE=prac00_unittest.cpp
CXX=g++

sample.o:
	$(CXX) -c $< $(SOURCES) $(INCLUDEDIR)

test: $(OBJECTS)
	$(CXX) $(TESTSOURCE) $(OBJECTS) -o $(TESTRUN) $(INCLUDEDIR) $(TESTLIB)

tr: test
	./$(TESTRUN)

clean:
	rm -f $(TESTRUN) $(OBJECTS)
