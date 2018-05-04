#define _CRT_SECURE_NO_WARNINGS
//  head file start--------------
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <bitset>
#include <string>
#include <numeric>
#include <functional>
#include <iterator>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <complex>
#include <string>
#include <ctime>
#include <stdlib.h>
using namespace std;
//  head file end--------------

//quls's宏 start-------------
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MEM(a,q) memset(a,q,sizeof(a))
#define FOR(i,s,n) for(int i=(s);i<=(n);i++)
#define FORD(i,n,s) for(int i=(n);i>=(s);i--)
//#define PI acos(-1.0)
#define INF 0x3fffffff

#define in(x) scanf("%d",&x)
#define out(x) printf("%d",x)
#define ins(x) scanf("%s",&x)
#define outs(x) printf("%s",x)
#define ind(x) scanf("%lf",&x)
#define outd(x) printf("%.3f",x)
#define outd0(x) printf("%.0f",x)
#define outd1(x) printf("%.1f",x)
#define outd2(x) printf("%.2f",x)
#define outd3(x) printf("%.3f",x)
#define outd4(x) printf("%.4f",x)
#define outd5(x) printf("%.5f",x)
#define outd6(x) printf("%.6f",x)
#define outd7(x) printf("%.7f",x)
#define outd8(x) printf("%.8f",x)
#define outs(x) printf("%s",x)
#define put puts("")
#define pc(x) putchar(x)
#define pc_ putchar(' ')
#define p2(x,y) ((x)*(x)+(y)*(y))
#define Map map<string,int>
#define map_it map<string,int>::iterator
#define two(x) (1<<(x))
#define finout freopen("d.in","r",stdin); freopen("d.out","w",stdout)

#ifdef _DEBUG
typedef __int64    int64;
#define inl(x) scanf("%I64d", &x)
#define outl(x) printf("%I64d", x)
#else
typedef long long    int64;
#define inl(x) scanf("%lld", &x)
#define outl(x) printf("%lld", x)
#endif
//quls's宏 end-------------

// 计算最大公约数
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

// 读取整数
static inline int Rint()
{
	struct X
	{
		int dig[256];
		X()
		{
			for (int i = '0'; i <= '9'; ++i)
				dig[i] = 1; dig['-'] = 1;
		}
	};
	static X fuck;
	int s = 1, v = 0, c;
	for (; !fuck.dig[c = getchar()];);
	if (c == '-')
		s = 0;
	else if (fuck.dig[c])
		v = c ^ 48;
	for (; fuck.dig[c = getchar()];
		v = v * 10 + (c ^ 48));

	return s ? v : -v;
}


int main()
{
	//finout;
	return 0;
}
