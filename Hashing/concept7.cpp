//COLLISION METHODS

/*

Hashing - 

1) Division Method
2)Folding method
3)Mid Square Method


1. Division Method
The division method is a straightforward way to create a hash function. It involves dividing the key by a table size (usually a prime number) and using the remainder as the hash value.

How it works:

Take the key (a number).
Divide the key by the table size (a chosen prime number).
The remainder of this division is the hash value.
Example:

Key: 12345
Table size: 100 (for simplicity, though a prime number is better)
Hash value: 12345 % 100 = 45
2. Folding Method
The folding method involves breaking the key into equal-sized parts, adding those parts together, and then using the result (or part of it) as the hash value.

How it works:

Divide the key into equal-sized parts (e.g., split a number into groups of two digits).
Add these parts together.
If necessary, apply another step (like the division method) to get a suitable hash value.
Example:

Key: 123456789
Split into parts: 12, 34, 56, 78, 9
Sum of parts: 12 + 34 + 56 + 78 + 9 = 189
If the hash table size is 100, you can further use 189 % 100 = 89
3. Mid-Square Method
The mid-square method involves squaring the key and then using the middle part of the resulting number as the hash value.

How it works:

Square the key.
Extract the middle digits of the squared number.
Use these middle digits as the hash value.
Example:

Key: 123
Square of key: 123^2 = 15129
Middle digits of 15129: 151 (taking the middle three digits)
If the hash table size is smaller, you might adjust this further.

Each of these methods offers a different approach to distributing keys uniformly across a hash table, helping to minimize collisions and improve performance in hash-based data structures.
*/


//What is collision ?

/*

In order to find out how many times 28 occured what you will do?



A collision in hashing occurs when two different keys produce the same hash value. This means they both get assigned to the same index in a hash table, which can lead to data retrieval issues since the hash table relies on unique indices to store and quickly access values.

Example of a Collision - 
Hash function: Let's say our hash function is ℎ(𝑥)=𝑥%10
Keys: 23 and 33.
Hash values:
For key 23: h(23)=23%10=3
For key 33: h(33)=33%10=3
Both keys 23 and 33 hash to the same value (3), causing a collision.

Handling Collisions
There are several common strategies to handle collisions:

Chaining:

Each index in the hash table points to a linked list (or another data structure) of entries that hash to the same value.
When a collision occurs, the new entry is added to the linked list at the index.
Open Addressing:

When a collision occurs, the algorithm searches for the next available slot in the table (based on a defined probing sequence) and places the new entry there.
Common probing techniques include:
Linear Probing: Sequentially check the next slots until an empty one is found.
Quadratic Probing: Use a quadratic function to find the next slot.
Double Hashing: Use a second hash function to determine the step size for probing.
Rehashing:

Increase the size of the hash table and rehash all existing entries into the new table.
This reduces the load factor and the likelihood of collisions.
Impact of Collisions
Collisions can affect the efficiency of a hash table, leading to increased time complexity for insertions, deletions, and lookups. Therefore, a good hash function and effective collision resolution strategy are crucial for maintaining the performance of a hash table.
*/