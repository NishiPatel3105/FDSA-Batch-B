#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int>g[20];
bool visited[20];

void DFS(int n){
    visited[n]=true;
    cout<<n<<" ";

    for(int x : g[n])
        if(!visited[x])
            DFS(x);
}
void BFS(int n){
    bool seen[20]={false};
    queue<int>q;
    q.push(n);
    seen[n]=true;

    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << " ";

        for (int y : g[x])
            if (!seen[y]) {
                q.push(y);
                seen[y] = true;
            }
    }
}

int main() {
    int n, e, a, b, s;
    cout<<"Enter buildings and roads: ";
    cin>>n>> e;

    cout<<"Enter roads:\n";
    for(int i = 0; i < e; i++) {
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    cout<<"Enter starting building: ";
    cin>>s;

    cout<<"DFS: ";
    DFS(s);

    cout<<"\nBFS: ";
    BFS(s);
}

