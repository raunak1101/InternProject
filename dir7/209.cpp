#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

void search(char pat[], char txt[], int q)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int i, j;
    int p = 0; // hash value for pattern
    int t = 0; // hash value for txt
    int h = 1;
 
    // The value of h would be "pow(d, M-1)%q"
    for (i = 0; i < M - 1; i++)
        h = (h * d) % q;
 
    // Calculate the hash value of pattern and first
    // window of text
    for (i = 0; i < M; i++) {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }
 
    // Slide the pattern over text one by one
    for (i = 0; i <= N - M; i++) {
 
        // Check the hash values of current window of text
        // and pattern. If the hash values match then only
        // check for characters one by one
        if (p == t) {
            /* Check for characters one by one */
            for (j = 0; j < M; j++) {
                if (txt[i + j] != pat[j]) {
                    break;
                }
            }
 
            // if p == t and pat[0...M-1] = txt[i, i+1,
            // ...i+M-1]
 
            if (j == M)
                cout << "Pattern found at index " << i
                     << endl;
        }
 
        // Calculate hash value for next window of text:
        // Remove leading digit, add trailing digit
        if (i < N - M) {
            t = (d * (t - txt[i] * h) + txt[i + M]) % q;
 
            // We might get negative value of t, converting
            // it to positive
            if (t < 0)
                t = (t + q);
        }
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  char txt[] = "GEEKS FOR GEEKS";
  char pat[] = "GEEK";
 
    // we mod to avoid overflowing of value but we should
    // take as big q as possible to avoid the collison
  int q = INT_MAX;
 
    // Function Call
  search(pat, txt, q);
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  int m;
  cin>>m;
  sort(arr, arr+n);
  while(m--){
    int t;
    cin>>t;
    int a;
    a = upper_bound(arr, arr+n, t) - arr;
    cout<<a<<endl;


  }

}
