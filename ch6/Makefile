#CXX=/opt/local/bin/x86_64-apple-darwin13-g++-mp-4.9
#CFLAG=-std=c++11 -stdlib=libstdc++
CXX=clang++ 
CFLAG=-std=c++11 -stdlib=libc++
output="Calc"

default:
	@$(CXX) $(CFLAG) calculator.cpp -o $(output)
run: 
	@./$(output)
clean:
	rm ./$(output)
