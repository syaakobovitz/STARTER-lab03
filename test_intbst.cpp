#include "intbst.h"
#include <iostream>
using namespace std;

int main() {
    IntBST t;

    cout << "=== Insert Tests ===" << endl;
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int v : values) {
        cout << "Insert " << v << ": " << t.insert(v) << endl;
    }

    cout << "Insert duplicate 30: " << t.insert(30) << endl; // should be false

    cout << "\n=== Traversal Tests ===" << endl;
    cout << "Preorder: ";
    t.printPreOrder();
    cout << endl;

    cout << "Inorder: ";
    t.printInOrder();
    cout << endl;

    cout << "Postorder: ";
    t.printPostOrder();
    cout << endl;

    cout << "\n=== Count / Sum Tests ===" << endl;
    cout << "Count: " << t.count() << endl;
    cout << "Sum: " << t.sum() << endl;

    cout << "\n=== Contains Tests ===" << endl;
    cout << "Contains 40: " << t.contains(40) << endl;
    cout << "Contains 99: " << t.contains(99) << endl;

    cout << "\n=== Predecessor Tests ===" << endl;
    cout << "Pred of 50: " << t.getPredecessor(50) << endl;
    cout << "Pred of 20: " << t.getPredecessor(20) << endl; // none → 0

    cout << "\n=== Successor Tests ===" << endl;
    cout << "Succ of 50: " << t.getSuccessor(50) << endl;
    cout << "Succ of 80: " << t.getSuccessor(80) << endl; // none → 0

    cout << "\n=== Remove Tests ===" << endl;

    cout << "Remove leaf (20): " << t.remove(20) << endl;
    t.printInOrder(); cout << endl;

    cout << "Remove node with one child (30): " << t.remove(30) << endl;
    t.printInOrder(); cout << endl;

    cout << "Remove node with two children (50): " << t.remove(50) << endl;
    t.printInOrder(); cout << endl;

    cout << "Remove missing value (999): " << t.remove(999) << endl;

    cout << "\nFinal count: " << t.count() << endl;
    cout << "Final sum: " << t.sum() << endl;

    cout << "\n=== Done ===" << endl;

    return 0;
}