#include <iostream>
#include <vector>
using namespace std;

void QuickSort(vector<int>& v,int left,int right){
    if(right<=left) return;
    int i = left;
    int j = right;
    int temp = v[left];
    while(i!=j){
        while(v[j] >= temp && i < j) j--;
        while(v[i] <= temp && i < j) i++;
        if(i < j){
            swap(v[i],v[j]);
        }
    }
    v[left] = v[i];
    v[i] = temp;
    QuickSort(v,left,i-1);
    QuickSort(v,i+1,right);
}
int main(){
  return 0;
}
