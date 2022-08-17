#include<iostream> 
using namespace std;
int main()
{
    
    char str[100];
    cin>>str;
    int i;
    int count=0;
    int freq[256] = {0};
    
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
      
    }
  
  for(i = 0; i < 256; i++)
  {
    if(freq[i] == 1)
     {
        count++;
     }
  }
  cout<<count;
  
  return 0;
 }
