#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int compute_score(string );
string uppercase(string);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");
    string uppercase_word1 = uppercase(word1);
     string uppercase_word2 = uppercase(word2);


    // Score both words
    int score1 = compute_score(uppercase_word1);
    int score2 = compute_score(uppercase_word2);

    if(score1>score2)
    {
      printf("Player 1 wins!\n");
    }
    else if(score1<score2)
    {
      printf("Player 2 wins!\n");
    }
    else{
      printf("Tie!\n");
    }
    
}
// Function to convert lowercase letters of a string to uppercase
string uppercase(string word)
    {
        int n = strlen(word);
        for(int k = 0 ; k < n ; k++)
        {
            if(islower(word[k]))
            {
                word[k] = toupper(word[k]);

            }
        }
        return (word);

    }

// Function to Calculate score
int compute_score(string word)
{
   int length = strlen(word);
   int score=0;
   for(int i = 0 ; i<length;i++)
   {
    char c;
    c=word[i];
    if(c=='A'|| c=='E' || c=='I' || c=='L' || c=='N' || c=='R' || c=='S' ||  c=='U' || c=='O')
     {
       score = score + 1;

     }
     if(c=='D' || c=='G')
     {
        score = score + 2;
     }
     if(c=='B' || c=='C' || c=='M' || c=='P')
     {
        score = score + 3;
     }
     if(c=='F' || c=='H' || c=='V' || c=='W' || c=='Y')
     {
        score = score + 4;
     }
     if(c=='K')
     {
        score = score + 5;
     }
     if (c=='J' || c=='X')
     {
      score = score + 8;
     }
     if(c=='Z' || c=='Q')
     {
      score = score + 10;
     }


   }
   return score;


}


