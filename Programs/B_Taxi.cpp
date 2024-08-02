/*------------------------------------------------------
    author    : voidrishad11
    created   : Thursday | 25 January, 2024 | 23.45.49
------------------------------------------------------*/

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>()
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))


/*
//BFS
class Graph{
    int V,E;
    vector<list<int>>adj;
    public:
    Graph(int V);
    void addEdge(int v,int e);
    void bfs(int s);
};
Graph::Graph(int V){
    this->V = V;
    adj.resize(V);
}
void Graph::addEdge(int v,int e){
    adj[v].push_back(e);
}
void Graph::bfs(int s){
    vector<bool>visited;
    visited.resize(V,false);
    queue<int>q;
    visited[s] = true;
    q.push(s);
    while(!q.empty()){
        s = q.front();
        cout<<s<<" ";
        q.pop();
        for(auto it:adj[s]){
            if(!visited[it]){
                visited[it] = true;
                q.push(it);
            }
        }
    }
}
int main (){
    cout << "Enter the number of vertices and edges: ";
    int v,e;
    cin>>v>>e;
    Graph g(v+1);
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v);
    }
    cout<<"Enter starting vartex: ";
    int start;
    cin>>start;
    g.bfs(start);
    return 0;
}*/

/*
//DFS
void Graph::dfs(int s) {
    vector<bool> visited(V, false);
    stack<int> stk;

    visited[s] = true;
    stk.push(s);

    while (!stk.empty()) {
        s = stk.top();
        cout << s << " ";
        stk.pop();

        for (auto it:adj[s]) {
            if (!visited[it]) {
                visited[it] = true;
                stk.push(it);
            }
        }
    }
}
*/

/*
//BINARY SEARCh
while(left<=right){
    Mid = left + (right-left)/2;
    if(a[mid]==target){
        found;
    }
    else if(a[mid]>target){
        right = mid -1;
    }
    else{
        Left = mid+1;
    }
}
*/

/*
//PRIMS IMPLEMENTATION

class solution{
public:
    int mst(int V,vector<vector<int>> adj[]){
        //priority queue
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> vis(V,0);
        pq.push({0,0});
        int sum = 0;

        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int wt = it.first;
            int node = it.second;
            
            if(vis[node]==1) continue;
            
            vis[node]=1;
            sum+=wt;

            for(auto neighbor : adj[node]){
                int adjNode = neighbor[0];
                int edW = neighbor[1];

                if(!vis[adjNode]){
                    pq.push({edW, adjNode});
                }
            }
        }
        return sum;
    }
};

int main() 
{
    // Example graph representation using an adjacency list
    int V = 4;
    vector<vector<int>> adj[V];

    // Adding edges to the graph
    adj[0].push_back({1, 2});  // Edge from node 0 to node 1 with weight 2
    adj[1].push_back({0, 2});  // Edge from node 1 to node 0 with weight 2
    adj[1].push_back({2, 1});  // Edge from node 1 to node 2 with weight 1
    adj[2].push_back({1, 1});  // Edge from node 2 to node 1 with weight 1
    adj[2].push_back({3, 3});  // Edge from node 2 to node 3 with weight 3
    adj[3].push_back({2, 3});  // Edge from node 3 to node 2 with weight 3

    solution sol;
    int minSpanningTreeWeight = sol.mst(V, adj);

    cout << "Weight of Minimum Spanning Tree: " << minSpanningTreeWeight << endl;

    return 0;
}

*/

/*
//FIBONACCI
vector<long long> fibo;
    fibo.push_back(0);
    fibo.push_back(1);

    long long next = fibo[0] + fibo[1];
    while (next <= b) {
        fibo.push_back(next);
       
    next = fibo[fibo.size() - 1] + fibo[fibo.size() - 2];
    }
    set<long long> uniqueFibo;

    for (long long num : fibo) {
        if (num >= a && num <= b) {
            uniqueFibo.insert(num);
        }
    }
    // Print the unique Fibonacci numbers
    for (long long num : uniqueFibo) {
        cout << num << endl;
    }
*/

/*
//SIEVE 
const int N =1000000;
bool sieve[1000001];
bool createSieve(int n){
    for(int i=2;i<=N;i++){
        sieve[i]=true;
    }
    for(int i=2;i*i<=N;i++){
        if(sieve[i]==true){
            for(int j=i*i;j<=N;j+=i){
                sieve[j]=false;
            }
        }
    }
    return sieve[n];
}
*/

/*
//CHECK PRIME
bool checkPrime(int n){
    int cnt = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if((n/i)!=i){
                cnt++;
            }
        }
    }
    if(cnt==2){
        return true;
    }
    return false;
}
*/

int main()
{
    ll n;
    cin >> n;
    vll a(n);
    ll four=0, three=0,two = 0,one = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 4)
        {
            four++;
        }
        else if (a[i] == 3)
        {
            three++;
        }
        else if (a[i] == 2)
        {
            two++;
        }
        else if (a[i] == 1)
        {
            one++;
        }
    }
    ll c = 0;
    c = c + four;
    four = 0;
    // cout<<c<<"\n";
    if (three == one)
    {
        c+=three;
        three = 0;
        one = 0;
        // cout<<c<<"\n";
    }
    else if ( three >= one )//1 1 2 2 3 3 4 4
    {
        c+=three;
        one = 0;
        // cout<<c<<"\n";
    }
    else
    {
        c+=three;
        one-=three;
        // cout<<c<<"\n";
    }
    // if(two >= one &&  two!=0 && one!=0)
    // {
        
    //     // cout<<c<<"\n";
    // }
    // else
    // {

    // }
    // else if ( two == 0 )
    // {
    //     c+=ceil(one/4.0);
    //     // cout<<c<<"\n";
    // }
    // else if ( two == one )
    // {
    //     c+=two;
    //     // cout<<c<<"\n";
    // }
    // else if (one - two < 2)
    // {
    //     c+=ceil(two/2.0);
    //     // cout<<c<<"\n";
    // }
    c+=two;
    one = one - two*2;
    c+=ceil(one/4.0);
    cout<<c<<"\n";
    return 0;
}