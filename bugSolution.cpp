std::vector<int> myVector; 

for (int i = 0; i < 10; ++i) {
  myVector.push_back(i); 
}

// Correct way to modify and iterate 
std::vector<int> modifiedVector;
for (int value : myVector) {
  modifiedVector.push_back(value * 2);
}

for (int value : modifiedVector) {
  // Process the modified values
}

//Alternative - Using std::transform
std::vector<int> transformedVector = myVector; 
std::transform(transformedVector.begin(), transformedVector.end(), transformedVector.begin(), [](int x){ return x * 2;});

for (int value : transformedVector) {
  //Process the transformed values
}