#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf (int)10e9
/*
The edit distance or Levenshtein distance1 is the minimum number of editing operations needed to transform a string into another string. The allowed editing operations are as follows: insert, remove, modify
*/


// Utility function to find minimum of three numbers
int min(int x, int y, int z) { return min(min(x, y), z); }

int editDist(string str1, string str2, int n, int m)
{
	// If first string is empty, the only option is to
	// insert all characters of second string into first
	if (m == 0)
		return n;

	// If second string is empty, the only option is to
	// remove all characters of first string
	if (n == 0)
		return m;

	// If last characters of two strings are same, nothing
	// much to do. Ignore last characters and get count for
	// remaining strings.
	if (str1[m - 1] == str2[n - 1])
		return editDist(str1, str2, m - 1, n - 1);

	// If last characters are not same, consider all three
	// operations on last character of first string,
	// recursively compute minimum cost for all three
	// operations and take minimum of three values.
	return ( 1+                                      // the operation :
                 min(editDist(str1, str2, m, n - 1), // Insert
                    editDist(str1, str2, m - 1, n), // Remove
                    editDist(str1, str2, m - 1, n - 1) // Replace
            ));
}



int main()
{
    string x="abcdefgh";
    string y="ab85cd8h45";
    int n=x.size();
    int m=y.size();
    cout<<"minimal number of edits is : "<<editDist(x,y,n,m);
    return 0;
}