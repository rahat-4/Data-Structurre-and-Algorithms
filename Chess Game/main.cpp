#include <iostream>
#include"quetype.cpp"
using namespace std;

int graph[20][20];
bool visited[20][20];
int level[20][20];

int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

bool valid(int x, int y)
{
    return (x>=0 && y>=0 && x<8 && y<8 && visited[x][y] == false && graph[x][y] == 0);
}

struct node
{
    int x;
    int y;
    int steps;
};

void Bfs(int s1, int s2)
{
    visited[s1][s2] = true;
    level[s1][s2] = 0;
    QueType<node>q;
    q.Enqueue({s1,s2});
    while(!q.isEmpty())
    {
        int xx = q.Front().x;
        int yy = q.Front().y;
        q.Dequeue();
        for(int i=0; i<8;i++)
        {
            int next_x = xx+dx[i];
            int next_y = yy+dy[i];
            if(valid(next_x,next_y))
            {
                visited[next_x][next_y] = true;
                level[next_x][next_y] = level[xx][yy]+1;
                q.Enqueue({next_x,next_y});
            }
        }
    }
}

string Name(int x1,int x2)
{
    if(graph[x1][x2]==1)
        return "King";
    else if(graph[x1][x2]==2)
        return "Queen";
    else if(graph[x1][x2]==31 || graph[x1][x2]==32)
        return "Rook";
    else if(graph[x1][x2]==41 || graph[x1][x2]==42)
        return "Knight";
    else if(graph[x1][x2]==51 || graph[x1][x2]==52)
        return "Bishop";
    else if(graph[x1][x2]>=61 && graph[x1][x2]<=68)
        return "Pawn";
    else
        return 0;

}


int main(){

    int opponentPiece;
    cout << "How many extant are there of the opponent?" << endl;
    cin >> opponentPiece;

    for(int i=0; i<opponentPiece;i++)
    {
        int pos_x, pos_y;
        cout<<"Positions:" << endl;
        cin >> pos_x >> pos_y;

        int v;
        cout << "Assign opponent piece value:" << endl;
        cin >> v;
        graph[pos_x][pos_y] = v;
    }


    for(int i=0; i<8; i++)
    {
        int x,y;
        cout<<"Position of my piece:" << endl;
        cin>>x>>y;
        graph[x][y] == true;
    }

    int k1,k2;
    cout<<"Knight position:" << endl;
    cin>>k1>>k2;
    Bfs(k1,k2);
    cout<<endl;



    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(graph[i][j]<0)
            {
                cout << Name(i,j) << " = " << level[i][j] << endl;
            }
        }
    }

    return 0;
}
