CXX=clang++

# Flags
CXXFLAGS=-std=c++17 -Wall -Wextra -Wformat-security -Wundef -Wconversion \
				 -Wpedantic -Wformat=2 -fdiagnostics-color=always
DEBUG=-O0 -g3 -ftrapv -fstack-clash-protection -fstack-protector-all \
			-fasynchronous-unwind-tables
RELEASE=-O2 -fdelete-null-pointer-checks

# $(CXX) src/main.cpp $(CXXFLAGS) $(RELEASE) -o build/main
main: src/main.cpp
	$(CXX) src/main.cpp $(CXXFLAGS) $(DEBUG) -o build/main

clean:
	rm build/main
