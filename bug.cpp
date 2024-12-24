std::vector<int> myVector; 

for (int i = 0; i < 10; ++i) {
  myVector.push_back(i); 
}

for (int i = 0; i < myVector.size(); ++i) {
  // Accessing vector elements
  int value = myVector[i]; 
  // ... process value ...
}

for (int& value : myVector) {
  // Modifying vector elements
  value *= 2; 
}

for (const int& value : myVector) {
  // Accessing vector elements
  // ... process value ...
}