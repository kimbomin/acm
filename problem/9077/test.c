#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a>b?b:a)
typedef struct MINE{short x,y;} MINE;
char map[10001][10001];
main()
{
  int t;
  MINE mine[100001];
  for(scanf("%d",&t);t;t--)
  {
    int n;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d%d",&mine[i].x,&mine[i].y);
      map[mine[i].x][mine[i].y]=t;
    }
    int j,max=0,s,x,y,ex,ey;
    for(i=0;i<n;i++)
    {
      s=0;
      ex=MIN(mine[i].x+10,10000);
      ey=MIN(mine[i].y+10,10000);
      for(x=mine[i].x;x<=ex;x++)
      {
        for(y=mine[i].y;y<=ey;y++)
        {
          if(map[x][y]==t)s++;
        }
      }
      max=max<s?s:max;
      s=0;
      ex=MAX(mine[i].x-10,0);
      ey=MIN(mine[i].y+10,10000);
      for(x=mine[i].x;x>=ex;x--)
      {
        for(y=mine[i].y;y<=ey;y++)
        {
          if(map[x][y]==t)s++;
        }
      }
      max=max<s?s:max;
      s=0;
      ex=MIN(mine[i].x+10,10000);
      ey=MAX(mine[i].y-10,0);
      for(x=mine[i].x;x<=ex;x++)
      {
        for(y=mine[i].y;y>=ey;y--)
        {
          if(map[x][y]==t)s++;
        }
      }
      max=max<s?s:max;
      s=0;
      ex=MAX(mine[i].x-10,0);
      ey=MAX(mine[i].y-10,0);
      for(x=mine[i].x;x>=ex;x--)
      {
        for(y=mine[i].y;y>=ey;y--)
        {
          if(map[x][y]==t)s++;
        }
      }
      max=max<s?s:max;
    }
    printf("%d\n",max);
  }
}