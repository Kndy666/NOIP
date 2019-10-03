struct Edge{
	int to,next;
}e[N<<1];

void ins(int u,int v){
	ne++;
	e[ne].to=v;
	e[ne].next=head[u];
	head[u]=ne;
}

void insert(int u,int v){
	ins(u,v);ins(v,u);
}

void dfs(int x,int fa){
	dep[x]=dep[fa]+1;
	p[x][0]=fa;
	for(int i=1;i<=20;i++) p[x][i]=p[p[x][i-1]][i-1];
	for(int i=head[x];i;i=e[i].next){
		int v=e[i].to;
		if(v==fa) continue;
		dfs(v,x);
	}
}

int getlca(int x,int y){
	if(dep[x]<dep[y]) swap(x,y);
	for(int i=20;i>=0;i--) if(dep[x]-(1<<i)>=dep[y]) x=p[x][i];
	if(x==y) return x;
	for(int i=20;i>=0;i--) if(p[x][i]!=p[y][i]) x=p[x][i],y=p[y][i];
	return p[x][0];
}
