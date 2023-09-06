//Teaching the vowels to the system through a SWITCH, 
//then ask for a letter on the keyboard and check if it is a vowel	

#include <iostream>

using namespace std;
int main()
{
    char letter;
    bool isVowel = false;

    cout<<"Vowels detector"<<endl;
    cout<<"What letter do u want to inspect?"<<endl;
    cin>>letter;
    
    switch((char) tolower(letter))
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': 
        isVowel = true; 
        break;
    
    default:
        break;
    }

    if(isVowel)
    {
        cout<<"Character "<<letter<<" is vowel."<<endl;
    }
    else
    {
        cout<<"Character "<<letter<<" is not a vowel."<<endl;
    }
}