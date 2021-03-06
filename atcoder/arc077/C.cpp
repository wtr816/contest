#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

#define DEBUG
#ifdef DEBUG
#define debug_printf printf
#else
#define debug_printf 1 ? 0 : printf
#endif

typedef long long int ll;
typedef vector<ll> Vl;
typedef vector<int> Vi;
typedef pair<int, int> Pi;
typedef pair<ll, ll> Pl;

#define FST first
#define SND second

const int MAX_N = 200000;                  // 10^5
// const int MAX_N = 100000;                  // 10^5
// const int MAX_N = 1000000000;              // 10^9
// const ll  MAX_N = 1000000000000000000;     // 10^18
// const int BASE  = 1000000000 + 7;          // 10^9 + 7
// const int INFI  = 1000000000 + 7;          // 10^9 + 7
// const ll INFL  = 1000000000000000000 + 7; // 10^18 + 7

int N, A[MAX_N], B[MAX_N];

void solve() {
  if (N % 2 == 0) {
    for (int i = 0; i < N / 2; i++) {
      B[i] = A[N - 2 * i - 1];
    }
    for (int i = 0; i < N / 2; i++) {
      B[i + N / 2] = A[2 * i];
    }
  } else {
    for (int i = 0; i < N / 2 + 1; i++) {
      B[i] = A[N - 2 * i - 1];
    }
    for (int i = 0; i < N / 2; i++) {
      B[i + N / 2 + 1] = A[2 * i + 1];
    }
  }

  for (int i = 0; i < N; i++) cout << B[i] << " ";
  cout << endl;
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];

  solve();

  return 0;
}
