#include <stdio.h>

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left_child = 2 * i + 1;  
    int right_child = 2 * i + 2;  

    if (left_child < n && arr[left_child] > arr[largest])
        largest = left_child;

    if (right_child < n && arr[right_child] > arr[largest])
        largest = right_child;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     printArray(arr, n);

//     heapSort(arr, n);

//     printf("Sorted array: ");
//     printArray(arr, n);
    
//     return 0;
// }

//In computer science, a binary tree is a k-ary k=2 tree data structure in which each node has at most two children, which are referred to as the left child and the right child. A recursive definition using just set theory notions is that a (non-empty) binary tree is a tuple (L, S, R), where L and R are binary trees or the empty set and S is a singleton set containing the root.[1] Some authors allow the binary tree to be the empty set as well.[2]

//En informatique, un arbre binaire est une structure de données qui peut se représenter sous la forme d'une hiérarchie dont chaque élément est appelé nœud, le nœud initial étant appelé racine. Dans un arbre binaire, chaque élément possède au plus deux éléments fils au niveau inférieur, habituellement appelés gauche et droit. Du point de vue de ces éléments fils, l'élément dont ils sont issus au niveau supérieur est appelé père. Au niveau le plus élevé, niveau 0, il y a un nœud racine. Au niveau directement inférieur, il y a au plus deux nœuds fils. En continuant à descendre aux niveaux inférieurs, on peut en avoir quatre, puis huit, seize, etc. c'est-à-dire la suite des puissances de deux. Un nœud n'ayant aucun fils est appelé feuille. Le niveau d'un nœud, autrement dit la distance entre ce nœud et la racine, est appelé profondeur. La hauteur de l'arbre est la profondeur maximale d'un nœud. Un arbre réduit à un seul nœud est de hauteur 0. Les arbres binaires peuvent notamment être utilisés en tant qu'arbre binaire de recherche ou en tant que tas binaire.

// in computer science, a heap is a specialized tree-based data structure that satisfies the heap property: In a max heap, for any given node C, if P is a parent node of C, then the key (the value) of P is greater than or equal to the key of C. In a min heap, the key of P is less than or equal to the key of C.[1] The node at the "top" of the heap (with no parents) is called the root node.

//En informatique, un tas1 (ou monceau au Canada2, heap en anglais) est une structure de données de type arbre qui permet de retrouver directement l'élément que l'on veut traiter en priorité. C'est un arbre binaire presque complet ordonné. Un arbre binaire est dit presque complet si tous ses niveaux sont remplis, sauf éventuellement le dernier, qui doit être rempli sur la gauche (cf. Contre-exemples). Ses feuilles sont donc à la même distance minimale de la racine, plus ou moins 1.

