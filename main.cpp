#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<int> merge(vector<int> a, vector<int> b){

  vector<int> retVal;
  auto ait = a.begin();
  auto bit = b.begin();
  while(ait != a.end() && bit != b.end()) {
    if((*ait) < (*bit)) {
      retVal.push_back((*ait));
      ++ait;
    } else {
      retVal.push_back((*bit));
      ++bit;
    }
  }

  while(ait != a.end()){
    retVal.push_back((*ait));
    ++ait;
  }

  while(bit != b.end()){
    retVal.push_back((*bit));
    ++bit;
  }

  return retVal;
}


int main(int argc, char *argv[]) {
    cout<<"hello world"<<endl;

    vector<int> a = {1,3,5,7,9};
    vector<int> b = {2,4,6,8,10};

    cout<<"attempting merge"<<endl;
    vector<int> c = merge(a,b);

    cout<<"Finished merge"<<endl;

    for(auto &x : c){
      cout<<x<<endl;
    }

    cout<<endl;
    float medium = 0.0;
    if((c.size() % 2) == 0) {
      float left = c[c.size()/2];
      cout<<"left:"<<left<<endl;
      float right = c[(c.size()/2)-1];
      cout<<"right:"<<right<<endl;
      cout<<(left + right) /2<<endl;;
		     
		     
      medium = (left + right) / 2.0;
    } else {
      medium = (float)c[c.size()/2.0];
    }
    cout<<"Middle:"<<c.size()/2<<endl;
    cout<<medium<<endl;

    return 0;
}
