#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Graph{
	int V;
	list<int> *adj;

public:
	Graph(int vertices);
	void BFS(bool visited[], int root);
	void addEdge(int u, int v);
};

Graph::Graph(int vertices){
	V = vertices;
	adj = new list<int>[V];
}

void Graph::addEdge(int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void Graph::BFS(bool visited[], int root){

	list<int> queue;
	queue.push_back(root);
	visited[root] = true;

	while(!queue.empty()){
		int node = queue.front();
		queue.pop_front();
		//cout << node << " ";
		list<int> :: iterator it;
		for(it = adj[node].begin(); it != adj[node].end(); it++){
			if(!visited[*it]){
				queue.push_back(*it);
				visited[*it] = true;
			}
		}
	}
}

int main(){

	int t;
	cin >> t;
	while(t--){
		int v, e, clib, croad;
		cin >> v >> e >> clib >> croad;
		Graph g(v+1);		//edges start from 0

		for(int i = 0 ; i < e; i++){
			int a, b;
			cin >> a >> b;
			//cout << a << " " << b << "\n";
			g.addEdge(a,b);
		}

		bool visited[v+1];
	    int components = 0;
	 	for(int i = 1 ; i < v+1; i++){
	 		if(!visited[i]){
	 			g.BFS(visited, i);
	 			components++;
	 		}
 		}
    	cout << "Components = " << components;
	}
	/*Graph g(6);
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.addEdge(4,5);*/
    
	return 0;
}