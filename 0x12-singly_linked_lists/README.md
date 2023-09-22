<p align="center">
   <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRni9oO_Bxx1IsLZS_GAyJajntCkbs1fWLs7g&usqp=CAU" alt="">
</p>

<h1 align="center">0x12. C - Singly linked lists</h1>

## Resources

**Read or watch**:
- [Linked Lists](https://intranet.alxswe.com/rltoken/joxg32-tt4lUh8Afgst8tA)
- [Google](https://intranet.alxswe.com/rltoken/USaZbNdfcuIFII-K2YPsKQ)
- [Youtube](https://intranet.alxswe.com/rltoken/epKUCIcoA6XaN1T3Vtr_9w)

## Learning objectives

- [When and why using linked lists vs arrays](#when-and-why-using-linked-lists-vs-arrays)
- [How to build and use linked lists](#how-to-build-and-use-linked-lists)

### When and why using linked lists vs arrays
Linked lists are a data structure choice over arrays when you need dynamic memory allocation, efficient insertions and deletions in the middle of the data structure, and you are willing to trade off constant-time random access. Linked lists consist of nodes where each node stores a value and a reference to the next node, allowing for efficient insertions and deletions as you can simply update pointers. This makes them well-suited for situations where the size of the data structure is unknown in advance or frequently changes, such as dynamic data structures, certain types of queues, or when memory is a concern.
In contrast, arrays offer constant-time random access but require contiguous memory allocation, making them less flexible for dynamic resizing and insertions/deletions, which can be costly in terms of time and memory reallocation.
The choice between linked lists and arrays depends on the specific requirements and trade-offs of your application.

### How to build and use linked lists
To build and use linked lists in C, you can create a `struct` to represent each node in the list. The `struct` should contain a data element and a pointer to the next node in the list.

```c
struct node{
    int data;
    struct node* next;
}
```
To create a new node and add it to the list, you can use the `malloc` function to allocate memory for the new node, assign the data element, and set the `next` pointer to `NULL`.
