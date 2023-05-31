var = 1-main.c 1-binary_tree_insert_left.c binary_tree_print.c

all: $(var).o
	gcc $(var) -o result

$(var).o: binary_trees.h

clean:
	rm *.o result
