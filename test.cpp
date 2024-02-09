#include <iostream>

using namespace std;
int main()
{
  int n;
   cin>>n;

  while(n>=0){
   if(n%8==0 ||n%3==0 && n%4==0){
         cout<<n<<"\n";
    }
  n-=1;
  }

   cout << "\n"
        << "******************\n";
  int n;
  cin >> n;
  int start = 3;
   while (n >= 0)
  {
      if (start % 3 == 0 && start % 4 > 0)
     {
        cout << start << "\n";
  }
  n -= 1;
  start += 3;

  }

  cout << "\n"
       << "**********************\n";

  int cnt = 0;
  for (int x = 50; x <= 300; ++x)
  {
   for (int y = 70; y <= 400; ++y)
   {
    if (x < y && (x + y) % 7 == 0)
  {
    ++cnt;
  }
  }
   }
  cout << cnt << "\n";

  cout << "\n"
       << "*****************************\n";
  int cnt = 0;
  for (int a = 1; a <= 200; ++a)
  {
    for (int b = 1; b <= 200; ++b)
    {
      for (int c = 1; c <= 200; ++c)
      {

        int d = a + b - c;
        if (1 <= d && d <= 200)

          ++cnt;
      }
    }
  }

  cout << cnt << "\n";
   int a,b;
  cin>>a>>b;

  if(a%2>0 && b%2>0)
  cout<<a*b;

  else if (a%2==0 && b%2==0)
   cout<<a/b;

  else if (a%2>0 && b%2==0)
   cout<<a+b;

  else if (a%2==0 && b%2>0)
  cout<<a-b;

  cout << "\n"
   << "\n***********************\n";

  int a, b, c;
  cin >> a >> b >> c;

  if (a > b && a > c)
   {
   if (b > c)
   {
     cout << c << " " << b << " " << a;
  }
   if (c > b)
  {
  cout << b << " " << c << " " << a;
  }
  }

  if (b > c && b > a)
  {
    if (a > c)
    {
     cout << c << " " << a << " " << b;
  }
  if (c > a)
  {
  cout << a << " " << c << " " << b;
  }
  }

  if (c > b && c > a)
  {
  if (b > a)
  {
    cout << a << " " << b << " " << c;
  }
  if (a > b)
  {
  cout << b << " " << a << " " << c;
  }
  }
  cout<<"\n"<<"*********************************\n";
  int  start ,end;
  cin>>start>>end;
  while(start<=end){

   cout<<start<<"\n";

   start++;
  }

  cout << "\n"
    << "****************\n";
  int num;
  char ch;
  cin >> num >> ch;
  while (num > 0)
  {
   cout << ch;
   num -= 1;
  }

  cout << "\n"
   << "************************\n";
  int a,b,c;
  cin>>a>>b>>c;
  int res=0;

  if( a>res &&a<100){
    res=a;
  }
  else if( b>res && b<100){
  res=b;}

  else if( c>res && c<100){
  res=c ;}
  cout<<res<<"\n";

  if (a>=100 && b>=100 && c>=100){
  cout<<"-1"<<"\n";}

  cout<<"\n"<<"********************\n";
  int x,a,b,c,d,e;

  cin>>x>>a>>b>>c>>d>>e;

  int cnt=0;
  cnt+=(a<=x);
  cnt+=(b<=x);
  cnt+=(c<=x);
  cnt+=(d<=x);
  cnt+=(e<=x);

  cout<<cnt<<" "<<5-cnt<<"\n";

  cout << "\n"
       << "********************\n";
        

      return 0;
}