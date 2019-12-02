#ifndef INC_0X1D_BINARY_TREES_BINARY_TREES_H
#define INC_0X1D_BINARY_TREES_BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

/* print function */
void binary_tree_print(const binary_tree_t *);

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* 0. New node  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* 1. Insert left */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* 2. Insert right */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* 3. Delete */
void binary_tree_delete(binary_tree_t *tree);

/* 4. Is leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* 5. Is root */
int binary_tree_is_root(const binary_tree_t *node);

/* 6. Pre-order traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* 7. In-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* 8. Post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* 9. Height */
size_t binary_tree_height(const binary_tree_t *tree);

/* 10. Depth */
size_t binary_tree_depth(const binary_tree_t *tree);

/* 11. Size */
size_t binary_tree_size(const binary_tree_t *tree);

/* 12. Leaves */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* 13. Nodes */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* 14. Balance factor */
int binary_tree_balance(const binary_tree_t *tree);

/* 15. Is full */
int binary_tree_is_full(const binary_tree_t *tree);

/* 16. Is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* 17. Sibling */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* 18. Uncle */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* 19. Lowest common ancestor */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);

/* 20. Level-order traversal */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/* 21. Is complete */
int binary_tree_is_complete(const binary_tree_t *tree);

/* 22. Rotate left */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/* 23. Rotate right */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/* 24. Is BST */
int binary_tree_is_bst(const binary_tree_t *tree);

/* 25. BST - Insert */
bst_t *bst_insert(bst_t **tree, int value);

/* 26. BST - Array to BST */
bst_t *array_to_bst(int *array, size_t size);

/* 27. BST - Search */
bst_t *bst_search(const bst_t *tree, int value);

/* 28. BST - Remove */
bst_t *bst_remove(bst_t *root, int value);

/* 30. Is AVL */
int binary_tree_is_avl(const binary_tree_t *tree);

/* 31. AVL - Insert */
avl_t *avl_insert(avl_t **tree, int value);

/* 32. AVL - Array to AVL */
avl_t *array_to_avl(int *array, size_t size);

/* 33. AVL - Remove */
avl_t *avl_remove(avl_t *root, int value);

/* 34. AVL - From sorted array */
avl_t *sorted_array_to_avl(int *array, size_t size);

/* 36. Is Binary heap */
int binary_tree_is_heap(const binary_tree_t *tree);

/* 37. Heap - Insert */
heap_t *heap_insert(heap_t **root, int value)

/* 38. Heap - Array to Binary Heap */
heap_t *array_to_heap(int *array, size_t size);

/* 39. Heap - Extract */
int heap_extract(heap_t **root);

/* 40. Heap - Sort */
int *heap_to_sorted_array(heap_t *heap, size_t *size);



#endif
