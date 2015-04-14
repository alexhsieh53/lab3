#include <vector>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <algorithm>
 using namespace std;
 
 

 int main()
{
  float size,number;
  int i=0;
   
 
 int insert, moveItem;
 ifstream inFile("infile.txt", ios::in);
 
 

inFile>>size;
if(size<=5||size>=10000)
{
	cout<<"its fault";
	return 0;
}
vector<int> v(size);
while(inFile>>number)
{
	
		
		v.at(i)=number;
		i++;
	
}

sort(v.begin(), v.end());
int k=0;
for(int i=(size-5); i<size; ++i)
 {
 
   
  
    k=k+v.at(i);
     
 }

cout<<k<< endl;


return 0;

}
