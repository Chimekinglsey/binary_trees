binary_trees
Binary tree is a type of tree structure that begins with a node.
A node can have a maximum of two child (left and right) and a minimum of zero child.
	The size of a binary tree is the total number of nodes in it.
	The depth is the number of edges (or links) from the root to that particular node
	The height of binary_trees is the total number of edges from the root to
	the downmost node (leaf node).
Binary tree can be accessed in tree ways:
	A) Inorder trasversal: the left nodes are first trasversed then the root and then the right node
	B) pre-order: here, the root node is first trasversed and then the left children followed by the right nodes
	c) post-order: The left is trasversed and then the right followed by the root.
Trasversing usually uses a recursive function to  begin operation at the leaf node. If a function is used to trasverse, then that fucntion will be called within itself and given a value which will be used as input in the stack;
let's code
