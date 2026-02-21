#include<iostream>
using namespace std;

class Array{
  int *A;
  int size;
  int length;
  public:
  Array(int size){
    this->size = size;
    length = 0;
    A = new int[this->size];
  }

  Array(int arr[],int size,int length){
    this->size = size;
    this->length = length;
    A = new int[this->size];
    for(int i = 0 ; i<length ; i++){
      A[i]=arr[i];
    }
  }

  ~Array(){
    delete []A;
  }

  void display(){
    for(int i=0 ;i<length ;i++){
      cout<<A[i]<<" ";
    }
    cout<<endl;
  }

  void append(int x){
    if(length<size){
      A[length]=x;
      length++;
    }
    
  }

  void insert(int index , int x){
    if(length<size && index>=0 && index<=length){
      for(int i=length; i>index ;i--){
        A[i]=A[i-1];
      }
      A[index] = x;
      length++;
    }
  }

  void del(int index){
  if(index<length && index>=0){
    for(int i=index ; i<length-1 ; i++){
      A[i]=A[i+1];
    }
    length--;
  }
  }
};

int main(){
  int ini[]={2,3,4,5,6};

  Array A(ini,10,5);

  A.display();
  return 0;
}