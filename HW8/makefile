all: clean main run

main: Tetris.java TheShapes.java TheGameBoard.java
	javac -d . Tetris.java TheShapes.java TheGameBoard.java

run: main
	java HW8_try.Tetris

clean:
	rm -f *.class
