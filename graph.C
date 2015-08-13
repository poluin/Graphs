//Clone copy
#include <list>
#include <queue>
#include <map>
#include <stack>
#include <iostream>

using namespace std;

class Graph 
{

	// Number of verticies
	int nv;
	//Adjacent lists for each node
	list<int> *adj_nodes;

	public:
	Graph(int v);
	bool addEdge ( int v, int w);
	bool bfs(int s);
	bool dfs(int s);


};

Graph::Graph (int v)
{
	this->nv=v;
	this->adj_nodes = new list<int> [v];
	
	cout <<"\nGraph Object Created";

}

bool Graph::addEdge (int v, int w)
{

	//Adds and edge for the vertices v.
	if ((v > 0 && v < nv) && (w > 0 && w < nv))
	{
		this->adj_nodes [v].push_back (w) ;	
		return true;

	}
	else
	{
		cout << "\n Invalid Edge"<<"v="<<v<<"w="<<w;
		return false;

	}

}


bool Graph::bfs(int s)
{

	if ( s <0 && s> nv) 
	{
		cout<<"S is invalid";
		return false;

	}

	queue <int> q;

	q.push(s);

	bool *visited;
	visited = new bool[nv];

	for (int i=0;i< nv; i++) 
		visited[i] = false;

	while (!q.empty())
	{
		//Get the front node in the tree	
		//If the vertex is not traversed already mark it as not-traversed
		//Run through the adjacent list
		
		int curr_vertex=q.front();
		q.pop();		

                if (visited[curr_index] == false)
                {
                        //Node is not visited
                        visited[curr_index]=true;

                }

		cout <<"\n BSF: Current Node :"<<curr_vertex;
	
		list<int>::iterator li;
		
		for (li = adj_nodes[curr_vertex].begin(); li != adj_nodes[curr_vertex].end(); ++li )
		{
			if (visited[*li] == false)
			{
				q.push(*li);

			}
			else
			{
				cout << "Node already visited";

			}

		}
	}
	return true;
}

bool Graph::dfs (int s)
{
	
	bool *visited;
	visited = new bool[nv];

	for (int i=0; i< nv; i ++ ) 
	{
		visited[i] = false;

	}


	//Push the current node to stack.
	// Take the top of the stack
	//Take the adjacent list - for each node in the list, if not visited already push to the stack.
	//Repeat these until stack is empty


	stack<int> *s_ptr;

	//Push the first element in the stack
	s_ptr.push(s);

	while (!s_ptr->empty())	
	{
		int curr_index = st->top();
		st->pop();
		if (visited[curr_index] == false)
		{
			//Node is not visited
			visited[curr_index]=true;

		}
		

		list <int>::iterator li;

		for ()
		{
		}
		

		


	}
	

	

	
	return true;
}

int main()
{
	Graph g1 (100);

	for (int i=0;i<97;i++)
	{	
		
		g1.addEdge(i,i+1);
		g1.addEdge(i,i+2);
		g1.addEdge(i,i+3);

	}

	g1.bfs(10);
	g1.dfs(20);
	

	return 1;

}
