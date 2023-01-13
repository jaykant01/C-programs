//wcp to check whether string is anagram or not.

#include <stdio.h>
#include <string.h>
 
  int is_anagram(char a[], char b[]) { 
  // if the lengths of strings are not equal directly return 0.
  if (strlen(a) != strlen(b)) {
    return 0;
  }
 
  int i = 0;
  int freq[26] = {0};
  // incrementing freq for one string a and decrementing freq for other string b
  for (i = 0; a[i] && b[i]; i++) {
    freq[a[i] - 97]++;
    freq[b[i] - 97]--;
  }
  // if freq of all 26 characters is now 0 so the strings are anagrams else return 0.
  for (i = 0; i < 26; i++) {
    if (freq[i]) {
      return 0;
    }
  }

  return 1;
}

int main() {
  char a[50], b[50];

  printf("Enter first string : ");
  scanf("%s", a);

  printf("Enter second string : ");
  scanf("%s", b);

  if (is_anagram(a, b) == 1) \
  {
    printf("Two strings are an anagram to each other");
  } 
  else 
  {
    printf("Two strings are not an anagram to each other");
  }

  return 0;
}
