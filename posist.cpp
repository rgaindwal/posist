
}
#include <iostream>

using namespace std;

class Node
{
    //TODO: create getter setteres and make all the data private
    //Public data
  public:
    string time;
    string data;
    int nodeNumber;
    string nodeId;
    Node *referenceNodeId;
    Node *childReferenceNodeId;
    Node *genesisReferenceNodeId;
    string Hashvalue;

    Node()
    {
        time = ' ';
        data = ' ';
        nodeNumber = -1;
        nodeId = -1;
        referenceNodeId = NULL;
        childReferenceNodeId = NULL;
        genesisReferenceNodeId = NULL;
        Hashvalue = ' ';
    }
};

int main()
{
    Node *genesis_node = new Node();
    string genesis_data;
    int sum_data;
    char ans;

    do
    {

    } while (ans != 'n' || ans != 'N');

    return 0;
}
