#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// Prototype 
int count_spaces(string space);
int count_letters(string text);
int count_punctuations(string punc);

//float calc_letters

int main(void)
{
  // Prompting for input
  string text = get_string("Text: ");

  // Counting the number of spaces, punctuations, letters, words, sentences in the text
  int spaces = count_spaces(text);
  int punct = count_punctuations(text);
  int letters = count_letters(text);

  int words = spaces + 1;
  int sentences = punct;

  printf("Words: %i\n", words);
}

// FUNCTIONS
int count_spaces(string space)
{
  int space_num = 0;
  for (int i = 0; space[i] != '\0'; i++)
    {
      if (isblank(space[i]))
      {
        space_num++;
      }
    }
  return space_num;
}

int count_letters(string text)
{
  int len = 0; //length
  for (int i = 0; text[i] != '\0'; i++)
    {
      if (isalpha(text[i]))
      {
        len++;
      }
    }
  return len;
}

int count_punctuations(string punc)
{
  int punc_num = 0;
  for (int i = 0; punc[i] != '\0'; i++)
    {
      if (punc[i] == '.' || punc[i] == '!' || punc[i] == '?')
      {
        punc_num++;
      }
    }
  return punc_num;
}
