a[100001];i;min;s;
gcd(a,b){return b?gcd(b,a%b):a;}
main(n)
{
  for(scanf("%d",&n);i<n;i++)scanf("%d",a+i);
  min=987654321;
  for(i=1;i<n;i++)min=min>a[i]-a[i-1]?a[i]-a[i-1]:min;
  for(i=1;i<n;i++)min=gcd(min,a[i]-a[i-1]);
  for(i=1;i<n;i++)s+=(a[i]-a[i-1]-min)/min;
  printf("%d",s);
}
