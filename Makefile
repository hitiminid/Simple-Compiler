program:
	flex scanner.l
	bison gram.ypp -d
	g++ lex.yy.c gram.tab.cpp -o parse -std=c++11


run:
	./parse < data.txt
