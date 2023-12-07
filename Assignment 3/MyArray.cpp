//

#include "MyArray.h"
#include <assert.h> 
#include <iostream>
using namespace std; 

MyArray::MyArray(){
	// Create empty array.
	// PROMISES: size() == 0.
	
	resize(0);
	storageM = new EType[0];

}


MyArray::MyArray(const EType *builtin, int sizeA){
	// Create object by copying a built-in array.
	// REQUIRES
	//   sizeA >= 0. Elements builtin[0] ... builtin[sizeA - 1] exist.
	// PROMISES
	//   size() == sizeA.
	//   For i from 0 to sizeA-1, element i of object == builtin[i]. 
	
	if(sizeA >= 0){
		sizeM = sizeA;
		storageM = new EType[sizeM];
		
		for(int i = 0; i < sizeM; i++){
			storageM[i] = builtin[i];
		}
	}

}	

MyArray::MyArray(const MyArray& source){
	sizeM = source.size();
	storageM = new double[sizeM];
	assert(storageM!=0);
	
	for(int i = 0; i < sizeM; i++){
		storageM[i] = source.storageM[i];
	}
	
	
}
// copy .....
MyArray& MyArray::operator = (const MyArray& rhs){
	//return rhs;
	
	if(this != &rhs){
		delete[] storageM;
		sizeM = rhs.sizeM;
		storageM = new EType[sizeM];
		
		
		for(int i = 0;i<sizeM;i++){
			storageM[i] = rhs.storageM[i];
		}
		
	}
	return *this;
}


MyArray::~MyArray(){
	delete this;
	
	

}

int MyArray::size() const{
	
	return sizeM;
	
}

EType MyArray::at(int i) const{
	
	
	return storageM[i];
	// REQUIRES: 0 <= i && i < size().
	// PROMISES: Return value is a reference to element i of array.

	
}

void MyArray::set(int i, EType new_value){
	

	storageM[i] = new_value;
	// REQUIRES: 0 <= i && i < size().
	// PROMISES: assigns new_value to the ith element of storageM 
}

void MyArray::resize(int new_size){
	
	EType* new_Stor = nullptr; 
	
	int temp_size; 
	
	if(sizeM < new_size){
		temp_size = sizeM;
	}
	else{
		temp_size = new_size;
	}
		
	
	if (new_size >= 0){ 
		new_Stor = new EType[new_size];
		
		for(int i = 0; i < temp_size; i++){
			new_Stor[i] = storageM[i];
		}
		
		delete[] storageM;
		storageM = new_Stor;
		sizeM = new_size;
		
		
	}else{
		
	}
}	
