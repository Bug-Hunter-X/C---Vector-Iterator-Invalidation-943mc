# C++ Vector Iterator Invalidation

This repository demonstrates a common error in C++:  modifying a `std::vector` while iterating through it using iterators. Modifying the vector's size (inserting or deleting elements) invalidates iterators and may lead to unexpected behavior or crashes. This example showcases correct usage and how to avoid this pitfall. 

**bug.cpp:** Contains the erroneous code. 

**bugSolution.cpp:** Shows the corrected approach, avoiding iterator invalidation.