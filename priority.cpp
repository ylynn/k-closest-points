struct Node{
  int x;
  int y;
  Node(int a, int b){
  x=a;
  y=b;
  }
};
struct NodeCmp{
  bool operator() (const Node &na, const Node &nb){
    return (na.x*na.x+na.y*na.y)>=(nb.x*nb.x+nb.y*nb.y);
  }
};
        
priority_queue<Node, vector<Node>, NodeCmp> a;
a.push(Node(1,2));
a.push(Node(2,3));
a.push(Node(1,4));
cout<<a.top().y<<endl;
a.pop();
cout<<a.top().y<<endl;
