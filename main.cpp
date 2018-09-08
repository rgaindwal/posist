#include <iostream>
#include <ctime>
#include <vector>
using namespace std;


class DataClass{
public:
int ownerId;
float value;
string ownerName;
string hashValue;
};


class Node
{
    //TODO: create getter, setteres and make all the data private
    //Public data
  public:
    std::time_t time;
    DataClass data;
    int nodeNumber;
    string nodeId;
    Node *referenceNodeId;
    Node *childReferenceNodeId;
    Node *genesisReferenceNodeId;
    string Hashvalue;

};


vector<Node*> nodeAddress;


int main()
{
    Node *genesis_node = new Node();
    Node *parent_node = new Node();
    string genesis_data;
    int sum_data=0;              // Keep track of when we have to move to the next layer
    int parent_siblings_sum = 0; // Keep track of parent + parent's sibling values
    char ans;

    genesis_node->time = std::time(nullptr);
//    int tempData;
    float tempValue;
    DataClass* tempData = new DataClass();
    cout<<"Genesis Node "<<endl;
    /*
    class DataClass{
    int ownerId;
    float value;
    string ownerName;
    string hashValue;
    };
    */
    int tempId;
    cout<<"Owner Id: ";
    cin>>tempId;
    tempData->ownerId = tempId;

    do{
    cout<<"Value: ";
    cin>>tempValue;
    if(tempValue<=3){
    sum_data += tempValue;
    parent_siblings_sum += tempValue;
    tempData->value =  tempValue;
    }else{
        cout<< endl<<"The value can't be more than 3";
        }
    }while(tempValue>3);

    string tempName;
    cout<<endl<<"Owner's Name: ";
    cin>>tempName;
    tempData->ownerName = tempName;

    //TODO: Implement Hash value

    genesis_node->nodeNumber = 0;
    nodeAddress.push_back(genesis_node);
    genesis_node->nodeId = '00000000000000000000000000000000';
    genesis_node->referenceNodeId = NULL;
    genesis_node->childReferenceNodeId = NULL;
    genesis_node->genesisReferenceNodeId = genesis_node;

    parent_node = genesis_node;

    do{
        cout<<endl<<"Do you want to add a new node?(Y or N) ";
        cin>>ans;
        if(ans == 'Y' || ans == 'y'){

            if(sum_data == 0){
                //New Layer is being added
                cout<<"enter

            } else{
                //Sibling is being added
            }
        }
        else
            break;
    } while (ans != 'n' || ans != 'N');

    return 0;
}
