#include<bits/stdc++.h>
using namespace std;
#define sint(a) int a; scanf("%d",&a);
#define sint2(a,b) int a,b; scanf("%d %d",&a,&b);
#define sint3(a,b,c) int a,b,c; scanf("%d %d %d",&a,&b,&c);
#define int1(a) scanf("%d",&a);
#define int2(a,b) scanf("%d %d",&a,&b);
#define int3(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define mkp make_pair
#define pb push_back
#define inf 1e9
#define all(x) (x).begin(),(x).end()
#define F first
#define S second
#define sdouble(a) double a; scanf("%lf",&a);
#define slong(a) long long a; scanf("%lld",&a);
#define cstring(a,x) char a[x]; scanf("%s",a);
#define sstring(a) string a;cin>>a;
#define sss(a,b,c) stringstream a; a<<b; a>>c
#define rev(s) reverse(all(s));
#define FOR(a,b,c) for(int a=b;a<c;a++)
#define ROF(a,b,c) for(int a=b;a>c;a--)
#define pause system("pause")
#define endl printf("\n")
#define p(a) printf("%lld\n",a);
#define clear system("cls")
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
void power()
{
	printf("Power\n\n");
	printf("a^n");
	printf("\nPlease enter a : ");
	double base,powe;
	scanf("%lf",&base);
	printf("Please enter n : ");
	scanf("%lf",&powe);
	printf("%.12f^%.12f is %.12f\n",base,powe,pow(base,powe));
}
void root()
{
	printf("n-th root of a\n");
	printf("\nPlease enter a : ");
	double num,ro,no;
	scanf("%lf",&num);
	printf("Please enter n : ");
	scanf("%lf",&ro);
	no = ro;
	ro /= pow(ro,2);
	printf("%.0f-th root of %.12f is %.12f\n",no,num,pow(num,ro));
}
void log()
{
	printf("Log m base n\n");
	printf("\nPlease enter m : ");
	double m,n;
	scanf("%lf",&m);
	printf("Please enter n : ");
	scanf("%lf",&n);
	printf("Log %.12f base %.12f is %.12f and equals to %.12f^%.12f\n",m,n,log(m)/log(n),n,log(m)/log(n));
}
void seq()
{
	printf("Sequence\n\n");
	int f;
	printf("1.Sum of a+(a+n)+(a+2n)+...+(a+dn)\n");
	printf("2.Sum of a^2+(a+n)^2+(a+2n)^2+...+(a+dn)^2\n");
	printf("3.Sum of a^3+(a+n)^3+(a+2n)^3+...+(a+dn)^3\n");
	printf("4.Sum of r/n+ra/n+ra^2/n+ra^3/n+...(Limit)\n");
	printf("Sequence : ");
	scanf("%d",&f);
	switch(f)
	{
		case 1:
		case 2:
		case 3:
		{
			printf("Please enter a : ");
			double mh,mh2,mh3,sum=0;
			scanf("%lf",&mh);
			printf("Please enter n : ");
			scanf("%lf",&mh2);
			printf("Please enter d : ");
			scanf("%lf",&mh3);
			if(mh3/floor(mh3)==1&&mh3>=0)
			{
				for(double d = 0;d<=mh3;d+=1)
				{
					sum+=pow(mh+d*mh2,f);
				}
				printf("Sum of %.12f^%d+%.12f^%d+%.12f^%d+...+%.12f^%d is %.12f\n",mh,f,mh+mh2,f,mh+2*mh2,f,mh+mh3*mh2,f,sum);
			}
			else
			{
				printf("Interval between sequence is different.\n");
			}
			break;
		}
		case 4:
			//1+a+a2+a3+...=o,ao = a+a2+a3+...,(1-a)o = 1,o=r/(n(1-a)) 
			printf("Please enter r : ");
			double r,n,a;
			scanf("%lf",&r);
			printf("Please enter n : ");
			scanf("%lf",&n);
			printf("Please enter a : ");
			scanf("%lf",&a);
			if(a < 1 &&a > -1)
			{
				printf("Sum is %.12f\n",r/(n*(1-a)));
			}
			else
			{
				printf("There is no limit in this sequence.\n");
			}
	}
}
void deri()
{
	printf("Derivative\n\n");
	printf("1.d(ax^n)/dx\n");
	printf("2.d(ax^n+bx^m)/dx\n");
	printf("3.d(ab^(c*x))/dx\n");
	printf("4.d(a*sin(bx))/dx\n");
	printf("5.d(a*cos(bx))/dx\n");
	printf("6.d(a*tan(bx))/dx\n");
	printf("7.d(a*csc(bx))/dx\n");
	printf("8.d(a*sec(bx))/dx\n");
	printf("9.d(a*cot(bx))/dx\n");
	int f;
	double a,b,n,m,c;
	bool ch1=true,ch2=true;
	scanf("%d",&f);
	switch(f)
	{
		case 1:
		printf("Please enter a : ");
		scanf("%lf",&a);
		printf("Please enter n : ");
		scanf("%lf",&n);
		for(;;)
		{
			if(n==0)
			{
				printf("Derivative of %.12f is 0\n",a);
				break;
			}
			a *= n;
			n -= 1;
			if(n!=0&&a!=0)
			{
				printf("Derivative of %.12f*x^%.3f is %.12f*x^%.3f\n",a/(n+1),n+1,a,n);
				printf("Do you want to continue?(Y/N)");
				char s[100];
				scanf("%s",s);
				switch(s[0])
				{
					case 'Y':
					case 'y':
					{
						continue;
					}
					
					default:
					break;
				}
			}
			else
			{
				printf("Derivative of %.12f*x is %.12f\n",a/(n+1),a);
				break;
			}
		}
		break;
		case 2:
		printf("Please enter a : ");
		scanf("%lf",&a);
		printf("Please enter n : ");
		scanf("%lf",&n);
		printf("Please enter b : ");
		scanf("%lf",&b);
		printf("Please enter m : ");
		scanf("%lf",&m);
		for(;;)
		{
			if(n==0 && m==0)
			{
				printf("Derivative of %.12f is 0\n",a+b);
				break;
			}
			if(a==0 && b==0)
			{
				printf("Derivative of 0 is 0\n");
				break;
			}
			if(n==0)
			{
				for(;;)
				{
					if(b==0)
					{
						printf("Derivative of %.12f is 0\n",a);
						break;
					}
					b *= m;
					m -= 1;
					if(m!=0)
					{
						if(ch1)
						{
							printf("Derivative of %.12f+%.12f*x^%.3f is %.12f*x^%.3f\n",a,b/(m+1),m+1,b,m);
							ch1=false;
						}
						else
						printf("Derivative of %.12f*x^%.3f is %.12f*x^%.3f\n",b/(m+1),m+1,b,m);
						printf("Do you want to continue?(Y/N)");
						char s[100];
						scanf("%s",s);
						switch(s[0])
						{
							case 'Y':
							case 'y':
							{
								continue;
							}
							default:
							break;
						}
					}
					else
					{
						printf("Derivative of %.12f*x is %.12f\n",b,b);
						break;
					}
				}
				break;
			}
			if(m==0)
			{
				for(;;)
				{
					if(a==0)
					{
						printf("Derivative of %.12f is 0\n",b);
						break;
					}
					a *= n;
					n -= 1;
					if(n!=0)
					{
						if(ch2)
						{
							printf("Derivative of %.12f*x^%.3f+%.12f is %.12f*x^%.3f\n",a/(n+1),n+1,b,a,n);
							ch2=false;
						}
						else
						printf("Derivative of %.12f*x^%.3f is %.12f*x^%.3f\n",a/(n+1),n+1,a,n);
						printf("Do you want to continue?(Y/N)");
						char s[100];
						scanf("%s",s);
						switch(s[0])
						{
							case 'Y':
							case 'y':
							{
								continue;
							}
							default:
							break;
						}
					}
					else
					{
						printf("Derivative of %.12f*x is %.12f\n",a,a);
						break;
					}
				}
				break;
			}
			a *= n;
			n -= 1;
			b *= m;
			m -= 1;
			if(n!=0&&a!=0&&m!=0&&b!=0&&m!=n)
			{
				printf("Derivative of %.12f*x^%.3f+%.12f*x^%.3f is %.12f*x^%.3f+%.12f*x^%.3f\n",a/(n+1),n+1,b/(m+1),m+1,a,n,b,m);
				printf("Do you want to continue?(Y/N)");
				char s[100];
				scanf("%s",s);
				switch(s[0])
				{
					case 'Y':
					case 'y':
					{
						continue;
					}
					
					default:
					break;
				}
			}
			else if(m==n)
			{
				if(n!=0)
				{
					printf("Derivative of %.12f*x^%.3f is %.12f*x^%.3f\n",(a+b)/(n+1),n+1,a+b,n);
				}
				else
				{
					printf("Derivative of %.12f*x is %.12f\n",(a+b)/(n+1),a+b);
				}
				printf("Do you want to continue?(Y/N)");
				char s[100];
				scanf("%s",s);
				switch(s[0])
				{
					case 'Y':
					case 'y':
					{
						continue;
					}
					
					default:
					break;
				}
			}
			else if(m==0)
			{
				printf("Derivative of %.12f*x^%.3f+%.12f*x is %.12f*x^%.3f+%.12f\n",a/(n+1),n+1,b/(m+1),a,n,b);
				printf("Do you want to continue?(Y/N)");
				char s[100];
				scanf("%s",s);
				switch(s[0])
				{
					case 'Y':
					case 'y':
					{
						continue;
					}
					
					default:
					break;
				}
			}
			else if(n==0)
			{
				printf("Derivative of %.12f*x+%.12f*x^%.3f is %.12f+%.12f*x^%.3f\n",a/(n+1),b/(m+1),m+1,a,b,m);
				printf("Do you want to continue?(Y/N)");
				char s[100];
				scanf("%s",s);
				switch(s[0])
				{
					case 'Y':
					case 'y':
					{
						continue;
					}
					
					default:
					break;
				}
			}
		}
		break;
		case 3:
		printf("Please enter a : ");
		scanf("%lf",&a);
		printf("Please enter b : ");
		scanf("%lf",&b);
		printf("Please enter c : ");
		scanf("%lf",&c);
		for(;;)
		{
			if(b<=0 && c!= 0)
			{
				printf("It's can't find derivative\n");
				break;
			}
			if(a==0)
			{
				printf("Derivative of 0 is 0\n");
				break;
			}
			if(c==0)
			{
				printf("Derivative of %lf is 0\n",a*b);
				break;
			}
			if(c*log(b)!=0)
			a*=c*log(b);
			if(c*log(b)!=0)
			printf("Derivative of %.12f*%.12f^(%.3fx) is %.12f*%.12f^(%.3fx)\n",a/(c*log(b)),b,c,a,b,c);
			else
			{
				printf("Derivative of %.12f*%.12f^(%.3fx) is %.12f*%.12f^(%.3fx)\n",a,b,c,0,b,c);
				a=0;
			}
			printf("Do you want to continue?(Y/N)");
			char s[100];
			scanf("%s",s);
			switch(s[0])
			{
				case 'Y':
				case 'y':
				{
					continue;
				}
				
				default:
				break;
			}
		}
	}
}
struct Mat
{
	int mat[10][10];
	int n,m;	
	bool exist=0;
};
struct Vec
{
	int mat[5];
	int dim;
	bool exist=0;
};
class command
{
	private:
		map<char,int> mp;
		Mat A,B,C,D;
		Vec VA,VB,VC,VD;
		string b;
	public:
		bool in_post()
		{
			b="";
			mp['+']=1;
			mp['-']=1;
			mp['*']=2;
			mp['/']=2;
			mp['^']=3;
			string a;
			stack<char> st;
			printf("Insert Expression(Calulate as Int) : ");
			cin>>a;
			if(a=="0")return true;
			string tmp;
			for(int i=0;i<a.size();i++)
			{
				if(a[i]>='0' && a[i]<='9')
				{
					tmp+=a[i];
				}
				else
				{
					b+=' ';
					b+=tmp;
					tmp="";
					if(a[i]=='(')
					{
						st.push(a[i]);
					}
					else if(a[i]==')')
					{
						while(!st.empty())
						{
							if(st.top()=='(')
							{
								st.pop();
								break;
							}
							b+=st.top();
							st.pop();
						}
					}
					else
					{
						while(!st.empty())
						{
							if(st.top()=='(')
							{
								break;
							}
							if(mp[st.top()]>=mp[a[i]])
							{
								b+=st.top();
								st.pop();
							}
							else
							{
								break;
							}
						}
						st.push(a[i]);
					}
				}
			}
			b+=' ';
			b+=tmp;
			while(!st.empty())
			{
				b+=st.top();
				st.pop();
			}
			return false;
		}
		ll to_ans_cal()
		{
			stack<ll> st;
			bool chk=0;
//			printf("%s\n",b.c_str());
			for(int i=0;i<b.size();i++)
			{
				if(b[i]==' ')
				{
					chk=0;
					continue;
				}
				if(b[i]>='0' && b[i]<='9')
				{
					if(chk)
					{
						ll tmp=st.top();
						st.pop();
//						p(tmp);
						tmp*=10;
						tmp+=(b[i]-'0');
						st.push(tmp);
					}
					else
					{
						st.push(b[i]-'0');
						chk=1;
					}
				}
				else
				{
					chk=0;
					ll x,y,k=1;
					x=st.top();
					st.pop();
					y=st.top();
					st.pop();
//					printf("%lld %lld\n",x,y);
					switch(b[i])
					{
						case '+':
							x+=y;
//							p(x);
							st.push(x);
							break;
						case '-':
							y-=x;
//							p(y);
							st.push(y);
							break;
						case '*':
							x*=y;
//							p(x);
							st.push(x);
							break;
						case '/':
							y/=x;
//							p(y);
							st.push(y);
							break;
						case '^':
							for(int j=0;j<x;j++)
								k*=y;
//							p(k);
							st.push(k);
							break;
						default :
							printf("Syntax Error\n");
							break;
					}
				}
			}
			if(st.empty())
			{
				printf("Syntax Error\n");
				return 0;
			}
			printf("Answer : ");
			printf("%lld\n",st.top());
			return st.top();
		}
		ll pmfac(ll n)
		{
			ll ret=1,tmp=n;
			bool chk=0;
			printf("%lld = ",tmp);
			for(int i=2;i<=n && n!=1;i+=2)
			{
				int cnt=0;
				bool ok=0;
				if(n%i==0)
				{
					ok=1;
					while(n%i==0)
					{
						n/=i;
						cnt++;
					}
				}
				if(ok)
					if(!chk)
						printf("%d^%d ",i,cnt);
					else
						printf("x %d^%d ",i,cnt);
				if(ok)chk=1;
				ret*=(cnt+1);
				if(i==2)
					i=1;
			}
			endl;
			return ret;
		}
		void alfac(ll n)
		{
			vi r;
			for(int i=1;i<=sqrt(n);i++)
			{
				if(n%i==0)
				{
					r.pb(i);
					r.pb(n/i);
				}
			}
			sort(all(r));
			for(int i=0;i<r.size();i++)
			{
				if(r[i]==r[i-1]) continue;
				printf("%d ",r[i]);
			}
			endl;
		}
		void cal()
		{
			printf("Calculator\n\n");
			in_post();
			ll tmp=to_ans_cal();
		}
		void fac()
		{
			printf("Factor\n\n");
			printf("Insert Number : ");
			slong(tmp);
			printf("Have %lld Factor\n",pmfac(tmp));
			tmp=abs(tmp);
			alfac(tmp);
		}
		///*
		ll n_10(string num,ll base)
		{
			
			string s;
			s=num;
			ll ret=0;
			for(int i=0;i<s.size();i++)
			{
				ret*=base;
				ret+=conbs(s[i]);
			}
			return ret;
		}
		char bs(int a)
		{
			if(a<=9 && a>=0)
				return a+'0';
			else
				return 'A'+a-10;
		}
		int conbs(char a)
		{
			if(a>='A' && a<='Z')
				return a-'A'+10;
			else
				return a-'0';
		}
		ll to_n(ll num,ll base)
		{
			stack<char> st;
			while(num!=0)
			{
				ll tmp=num%base;
				num/=base;
				st.push(bs(tmp));
			}
			string s;
			while(!st.empty())
			{
				s+=st.top();
				st.pop();
			}
			printf("%s\n",s.c_str());
		}
		void base_n()
		{
			printf("Base-N\n\n");
			printf("What Base do you what to converse : ");
			sint(x);
			printf("To Base : ");
			sint(y);
			printf("What number do you want to converse : ");
			string k;
			cin>>k;
			ll tmp=n_10(k,x);
			to_n(tmp,y);
		}
		///*
		void mdef()
		{
			while(1)
			{
				clear;
				printf("Edit : A/B/C/D?\n");
				printf("Press Other Key to continue\n");
				sstring(s);
				if(s[0]<'A' || s[0]>'D')break;
				if(s[0]=='A')
				{
					printf("Size = ");
					sint2(x,y);
					A.n=x;
					A.m=y;
					printf("Insert Matrix :\n");
					for(int i=0;i<x;i++)
					{
						for(int j=0;j<y;j++)
						{
							scanf("%d",&A.mat[i][j]);
						}
					}
					A.exist=true;
				}
				if(s[0]=='B')
				{
					printf("Size = ");
					sint2(x,y);
					B.n=x;
					B.m=y;
					printf("Insert Matrix :\n");
					for(int i=0;i<x;i++)
					{
						for(int j=0;j<y;j++)
						{
							scanf("%d",&B.mat[i][j]);
						}
					}
					B.exist=true;
				}
				if(s[0]=='C')
				{
					printf("Size = ");
					sint2(x,y);
					C.n=x;
					C.m=y;
					printf("Insert Matrix :\n");
					for(int i=0;i<x;i++)
					{
						for(int j=0;j<y;j++)
						{
							scanf("%d",&C.mat[i][j]);
						}
					}
					C.exist=true;
				}
				if(s[0]=='D')
				{
					printf("Size = ");
					sint2(x,y);
					D.n=x;
					D.m=y;
					printf("Insert Matrix :\n");
					for(int i=0;i<x;i++)
					{
						for(int j=0;j<y;j++)
						{
							scanf("%d",&D.mat[i][j]);
						}
					}
					D.exist=true;
				}
			}
		}
		void mcal()
		{
			sstring(s);
			Mat *x,*y;
			x=NULL;
			y=NULL;
			if(s[0]=='A')x=&A;
			if(s[0]=='B')x=&B;
			if(s[0]=='C')x=&C;
			if(s[0]=='D')x=&D;
			if(s[2]=='A')y=&A;
			if(s[2]=='B')y=&B;
			if(s[2]=='C')y=&C;
			if(s[2]=='D')y=&D;
			int cmd;
			if(s[1]=='+')cmd=1;
			if(s[1]=='-')cmd=2;
			if(s[1]=='*')cmd=3;
			if(x==NULL || y==NULL){
				printf("Invalid Input\n");
			}
			if(cmd==1)
			{
				if(x->n==y->n && x->m==y->m)
				{
					for(int i=0;i<x->n;i++)
					{
						for(int j=0;j<x->m;j++)
						{
							printf("%d ",x->mat[i][j]+y->mat[i][j]);
						}
						endl;
					}
				}
				else 
				{
					printf("Cannot Sum\n");
				}
			}
			if(cmd==2)
			{
				if(x->n==y->n && x->m==y->m)
				{
					for(int i=0;i<x->n;i++)
					{
						for(int j=0;j<x->m;j++)
						{
							printf("%d ",x->mat[i][j]-y->mat[i][j]);
						}
						endl;
					}
				}
				else 
				{
					printf("Cannot Minus\n");
				}
			}
			if(cmd==3)
			{
				if(x->m==y->n)
				{
					for(int i=0;i<x->n;i++)
					{
						for(int j=0;j<y->m;j++)
						{
							int dd=0;
							for(int k=0;k<x->m;k++)
							{
								dd+=(x->mat[i][k]*y->mat[k][j]);
							}
							printf("%d ",dd);
						}
						endl;
					}
				}
				else 
				{
					printf("Cannot Multiply\n");
				}
			}
		}
		void mdet()
		{
			clear;
			printf("Det : A/B/C/D?\n");
			sstring(s);
			if(s[0]<'A' || s[0]>'D')return;
			if(s[0]=='A')
				{
					if(A.n==A.m && A.exist)
					{
						if(A.n>3)
						{
							printf("Wait for V3.0\n");
						}
						else if(A.n==1)printf("Det : %d\n",A.mat[0][0]);
						else if(A.n==2)printf("Det : %d\n",(A.mat[0][0]*A.mat[1][1])-(A.mat[1][0]*A.mat[0][1]));
						else 
						{
							int q=0,q2=0;
							q+=(A.mat[0][0]*A.mat[1][1]*A.mat[2][2]);
							q+=(A.mat[0][1]*A.mat[1][2]*A.mat[2][0]);
							q+=(A.mat[0][2]*A.mat[1][0]*A.mat[2][1]);
							q2+=(A.mat[2][0]*A.mat[1][1]*A.mat[0][2]);
							q2+=(A.mat[2][1]*A.mat[1][2]*A.mat[0][0]);
							q2+=(A.mat[2][2]*A.mat[1][0]*A.mat[0][1]);
							printf("Det : %d\n",q-q2);
						}
					}
					else printf("Cannot Find Determinant\n");
				}
				if(s[0]=='B')
				{
					if(B.n==B.m && B.exist)
					{
						if(B.n>3)
						{
							printf("Wait for V3.0\n");
						}
						else if(B.n==1)printf("Det : %d\n",B.mat[0][0]);
						else if(B.n==2)printf("Det : %d\n",(B.mat[0][0]*B.mat[1][1])-(B.mat[1][0]*B.mat[0][1]));
						else 
						{
							int q=0,q2=0;
							q+=(B.mat[0][0]*B.mat[1][1]*B.mat[2][2]);
							q+=(B.mat[0][1]*B.mat[1][2]*B.mat[2][0]);
							q+=(B.mat[0][2]*B.mat[1][0]*B.mat[2][1]);
							q2+=(B.mat[2][0]*B.mat[1][1]*B.mat[0][2]);
							q2+=(B.mat[2][1]*B.mat[1][2]*B.mat[0][0]);
							q2+=(B.mat[2][2]*B.mat[1][0]*B.mat[0][1]);
							printf("Det : %d\n",q-q2);
						}
					}
					else printf("Cannot Find Determinant\n");
				}
				if(s[0]=='C')
				{
					if(C.n==C.m && C.exist)
					{
						if(C.n>3)
						{
							printf("Wait for V3.0\n");
						}
						else if(C.n==1)printf("Det : %d\n",C.mat[0][0]);
						else if(C.n==2)printf("Det : %d\n",(C.mat[0][0]*C.mat[1][1])-(C.mat[1][0]*C.mat[0][1]));
						else 
						{
							int q=0,q2=0;
							q+=(C.mat[0][0]*C.mat[1][1]*C.mat[2][2]);
							q+=(C.mat[0][1]*C.mat[1][2]*C.mat[2][0]);
							q+=(C.mat[0][2]*C.mat[1][0]*C.mat[2][1]);
							q2+=(C.mat[2][0]*C.mat[1][1]*C.mat[0][2]);
							q2+=(C.mat[2][1]*C.mat[1][2]*C.mat[0][0]);
							q2+=(C.mat[2][2]*C.mat[1][0]*C.mat[0][1]);
							printf("Det : %d\n",q-q2);
						}
					}
					else printf("Cannot Find Determinant\n");
				}
				if(s[0]=='D')
				{
					if(D.n==D.m && D.exist)
					{
						if(D.n>3)
						{
							printf("Wait for V3.0\n");
						}
						else if(D.n==1)printf("Det : %d\n",D.mat[0][0]);
						else if(D.n==2)printf("Det : %d\n",(D.mat[0][0]*D.mat[1][1])-(D.mat[1][0]*D.mat[0][1]));
						else 
						{
							int q=0,q2=0;
							q+=(D.mat[0][0]*D.mat[1][1]*D.mat[2][2]);
							q+=(D.mat[0][1]*D.mat[1][2]*D.mat[2][0]);
							q+=(D.mat[0][2]*D.mat[1][0]*D.mat[2][1]);
							q2+=(D.mat[2][0]*D.mat[1][1]*D.mat[0][2]);
							q2+=(D.mat[2][1]*D.mat[1][2]*D.mat[0][0]);
							q2+=(D.mat[2][2]*D.mat[1][0]*D.mat[0][1]);
							printf("Det : %d\n",q-q2);
						}
					}
					else printf("Cannot Find Determinant\n");
				}
			
		}
		void mtran()
		{
			clear;
			printf("Tran : A/B/C/D?\n");
			sstring(s);
			if(s[0]<'A' || s[0]>'D')return;
			if(s[0]=='A')
			{
				if(A.exist==0)printf("Not exist\n");
				for(int i=0;i<A.m;i++)
				{
					for(int j=0;j<A.n;j++)
					{
						printf("%d ",A.mat[j][i]);
					}
					endl;
				}
			}
			if(s[0]=='B')
			{
				if(B.exist==0)printf("Not exist\n");
				for(int i=0;i<B.m;i++)
				{
					for(int j=0;j<B.n;j++)
					{
						printf("%d ",B.mat[j][i]);
					}
					endl;
				}
			}
			if(s[0]=='C')
			{
				if(C.exist==0)printf("Not exist\n");
				for(int i=0;i<C.m;i++)
				{
					for(int j=0;j<C.n;j++)
					{
						printf("%d ",C.mat[j][i]);
					}
					endl;
				}
			}
			if(s[0]=='D')
			{
				if(D.exist==0)printf("Not exist\n");
				for(int i=0;i<D.m;i++)
				{
					for(int j=0;j<D.n;j++)
					{
						printf("%d ",D.mat[j][i]);
					}
					endl;
				}
			}
		}
		void matrix()
		{
			//
			
			A.exist=0;
			B.exist=0;
			C.exist=0;
			D.exist=0;
			while(1)
			{
				clear;
				printf("Matrix\n\n");
				if(A.exist)
				{
					printf("A : \n");
					printf("Size : %d x %d\n",A.n,A.m);
					for(int i=0;i<A.n;i++)
					{
						for(int j=0;j<A.m;j++)
						{
							printf("%d ",A.mat[i][j]);
						}
						endl;
					}
					endl;
				}
				if(B.exist)
				{
					printf("B : \n");
					printf("Size : %d x %d\n",B.n,B.m);
					for(int i=0;i<B.n;i++)
					{
						for(int j=0;j<B.m;j++)
						{
							printf("%d ",B.mat[i][j]);
						}
						endl;
					}
					endl;
				}
				if(C.exist)
				{
					printf("C : \n");
					printf("Size : %d x %d\n",C.n,C.m);
					for(int i=0;i<C.n;i++)
					{
						for(int j=0;j<C.m;j++)
						{
							printf("%d ",C.mat[i][j]);
						}
						endl;
					}
					endl;
				}
				if(D.exist)
				{
					printf("D : \n");
					printf("Size : %d x %d\n",D.n,D.m);
					for(int i=0;i<D.n;i++)
					{
						for(int j=0;j<D.m;j++)
						{
							printf("%d ",D.mat[i][j]);
						}
						endl;
					}
					endl;
				}
				printf("1.Define Matrix\n");
				printf("2.Matrix calculate\n");
				printf("3.Determinant\n");
				printf("4.Transposition\n");
				printf("5.exit\n");
				printf("Insert Command : ");
				sint(w);
				if(w==1)mdef();
				else if(w==2)mcal();
				else if(w==3)mdet();
				else if(w==4)mtran();
				else if(w==5)return;
				else printf("Invalid Input\n");
//				pause;
			}
		}
		void vdef()
		{
			while(1)
			{
				clear;
				printf("Edit : A/B/C/D?\n");
				printf("Press Other Key to continue\n");
				sstring(s);
				Vec *x;
				if(s[0]<'A' || s[0]>'D')break;
				if(s[0]=='A')x=&VA;
				if(s[0]=='B')x=&VB;
				if(s[0]=='C')x=&VC;
				if(s[0]=='D')x=&VD;
				printf("Dimension : ");
				sint(d);
				if(d<=1 || d>3)
				{
					printf("Invalid Input\n");
					continue;
				}
				x->dim=d;
				for(int i=0;i<3;i++)
				{
					x->mat[i]=0;
				}
				for(int i=0;i<d;i++)
				{
					if(i==0)printf("i : ");
					else printf("%c : ",(i==1)? 'j':'k');
					scanf("%d",&x->mat[i]);
				}
				x->exist=1;
			}
		}
		void vcal()
		{
			printf("Dot product (.)\n");
			printf("Cross product (x)\n");
			Vec *x,*y;
			x=NULL;
			y=NULL;
			sstring(s);
			if(s[0]=='A')x=&VA;
			if(s[0]=='B')x=&VB;
			if(s[0]=='C')x=&VC;
			if(s[0]=='D')x=&VD;
			if(s[2]=='A')y=&VA;
			if(s[2]=='B')y=&VB;
			if(s[2]=='C')y=&VC;
			if(s[2]=='D')y=&VD;
			int cm=0;
			if(s[1]=='.')cm=1;
			if(s[1]=='x')cm=2;
			printf("= %d =\n",cm);
			if(x==NULL || y==NULL)
			{
				printf("A\n");
				printf("Invalid Input\n");
				return;
			}
			else if(cm==1)
			{
				if(x->dim!=y->dim)
				{
					printf("Dimension Error\n");
					return;
				}
				int q=0;
				for(int i=0;i<3;i++)
				{
					q+=(x->mat[i]*y->mat[i]);
				}
				printf("Dot Product : %d\n",q);
			}
			else if(cm==2)
			{
				if(x->dim!=y->dim)
				{
					printf("Dimension Error\n");
					return;
				}
				printf("i : %d\n",(x->mat[1]*y->mat[2])-(x->mat[2]*y->mat[1]));
				printf("j : %d\n",(x->mat[2]*y->mat[0])-(x->mat[0]*y->mat[2]));
				printf("k : %d\n",(x->mat[0]*y->mat[1])-(x->mat[1]*y->mat[0]));
			}
			else printf("Invalid Input\n");
		}
		void vec()
		{
			//
			
			VA.exist=0;
			VB.exist=0;
			VC.exist=0;
			VD.exist=0;
			for(int i=0;i<3;i++)
			{
				VA.mat[i]=0;
				VB.mat[i]=0;
				VC.mat[i]=0;
				VD.mat[i]=0;
			}
			while(1)
			{
				clear;
				printf("Vector\n\n");
				if(VA.exist)
				{
					printf("A : \n");
					printf("Dimension : %d\n",VA.dim);
					for(int i=0;i<VA.dim;i++)
					{
						printf("%d ",VA.mat[i]);
					}
					endl;
				}
				if(VB.exist)
				{
					printf("B : \n");
					printf("Dimension : %d\n",VB.dim);
					for(int i=0;i<VB.dim;i++)
					{
						printf("%d ",VB.mat[i]);
					}
					endl;
				}
				if(VC.exist)
				{
					printf("C : \n");
					printf("Dimension : %d\n",VC.dim);
					for(int i=0;i<VC.dim;i++)
					{
						printf("%d ",VC.mat[i]);
					}
					endl;
				}
				if(VD.exist)
				{
					printf("D : \n");
					printf("Dimension : %d\n",VD.dim);
					for(int i=0;i<VD.dim;i++)
					{
						printf("%d ",VD.mat[i]);
					}
					endl;
				}
				printf("1.Define Vector\n");
				printf("2.Vector calculate\n");
				printf("3.Exit\n");
				printf("Insert Command : ");
				sint(w);
				if(w==1)vdef();
				else if(w==2)vcal();
				else if(w==3)return;
				else printf("Invalid Input\n");
//				pause;
			}
		}
		//*/
};
vector<string> v;
int main()
{
	v.pb("Calculate");
	v.pb("Base-N");
	v.pb("Matrix");
	v.pb("Vector");
	v.pb("Factor");
	v.pb("Power");
	v.pb("N-th root");
	v.pb("Log m base n");
	v.pb("Sequence Series");
	v.pb("Derivative");
	v.pb("Exit");
	start:
	system("cls");
	printf("Command : \n");
	for(int i=0;i<v.size();i++)
	{
		if(v[i]=="Exit")
		{
			printf("99 Exit\n");
		}
		else printf("%d %s\n",i+1,v[i].c_str());
	}
	printf("Choose Command : ");
	sint(com);
	command cm;
	system("cls");
	int mode;
	switch(com)
	{
		case 1:
			cm.cal();
			mode=1;
			break;
		case 2:
			cm.base_n();
			mode=2;
			break;
		case 3:
			cm.matrix(); 
			mode=3;
			break;
		case 4:
			cm.vec(); 
			mode=4;
			break;
		case 5:
			cm.fac();
			mode=5;
			break;
		case 6:
			power();
			mode=6;
			break;
		case 7:
			root();
			mode=7;
			break;
		case 8:
			log();
			mode=8;
			break;
		case 9:
			seq();
			mode=9;
			break;
		case 10:
			deri();
			mode=10;
		case 99:
			printf("Thank You\n");
			return 0;
		default:
			goto start;
	}
//	pause;
	flag:
	while(1){
		pause;
		printf("Use this Mode Again?(1/0)\n");
		sint(answer);
		clear;
		if(answer==1)
		{
			switch(mode)
			{
				case 1:
					cm.cal();
					mode=1;
					break;
				case 2:
					cm.base_n();
					mode=2;
					break;
				case 3:
					cm.matrix(); 
					mode=3;
					break;
				case 4:
					cm.vec(); 
					mode=4;
					break;
				case 5:
					cm.fac();
					mode=5;
					break;
				case 6:
					power();
					mode=6;
					break;
				case 7:
					root();
					mode=7;
					break;
				case 8:
					log();
					mode=8;
					break;
				case 9:
					seq();
					mode=9;
					break;
				case 10:
					deri();
					mode=10;
				case 99:
					printf("Thank You\n");
					return 0;
				default:
					goto start;
			}
			goto flag;
		}
		else goto start;
	}
}

