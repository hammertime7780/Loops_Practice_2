//Dr_T Color in Non-Windows Platforms ANSI technique 9-1-2019
//source: https://stackoverflow.com/questions/20608058/c-colour-console-text
//using https://en.wikipedia.org/wiki/ANSI_escape_code

#include <iostream>
#include<string>
using namespace std; 

void changeColor(); 

int main()
{
    

char letterGrade = '\0';

do
{
  cout << "Please enter a letter grade (e/E to exit): ";
  cin >> letterGrade ;

  if(letterGrade == 'A' || letterGrade == 'a')
  {
    cout << "/nGrade is 90 or above!" << endl;
  }
  else if(letterGrade == 'B' || letterGrade == 'b' )
{
  cout << "/nGrade is 80 or above!" << endl;
}
else if(letterGrade == 'C' || letterGrade == 'c' )
{
  cout << "/nGrade is 80 or above!" << endl
  ;
}else if(letterGrade == 'D' || letterGrade == 'd')
{
  cout << "/nGrade is 80 or above!" << endl;
}
 
}
while (letterGrade != 'E' && letterGrade != 'e');
    return 0; 

}
