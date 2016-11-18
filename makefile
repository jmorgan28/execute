doit: exec.c
	gcc exec.c -o doit

run: doit
	./doit

clean:
	rm doit
	rm *~
	rm *dump 
	rm *txt
