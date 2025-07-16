#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Node{
    Node *arr[26];
    bool isWord=false;
};
class Trie {
    private:
    Node *root;
public:
    Trie() {
        root=new Node();
    }
    
    void insert(string word) {
        Node *curr =root;
        for(auto c:word){
            if(curr->arr[c-'a']==nullptr){
                curr->arr[c-'a']=new Node();
            }
            curr=curr->arr[c-'a'];
        }
        curr->isWord=true;
    }
    
    bool search(string word) {
        Node *cur =root;
        for(auto c:word){
            if(!cur->arr[c-'a']){
                return false;
            }
            cur=cur->arr[c-'a'];
        }
        return cur->isWord; 
    }
    
    bool startsWith(string prefix) {
        Node *cur =root;
        for(auto c:prefix){
            if(!cur->arr[c-'a']){
                return false;
            }
            cur = cur->arr[c-'a'];
        }
       return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
int main() {
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    
    Trie* obj = new Trie();

    // Insert words into the Trie
    obj->insert("apple");
    obj->insert("app");
    obj->insert("banana");
    
    // Search for words in the Trie
    cout << "Search 'apple': " << obj->search("apple") << endl; // Should return true
    cout << "Search 'app': " << obj->search("app") << endl;     // Should return true
    cout << "Search 'apples': " << obj->search("apples") << endl; // Should return false
    cout << "Search 'banana': " << obj->search("banana") << endl; // Should return true

    // Check for prefixes
    cout << "Starts with 'app': " << obj->startsWith("app") << endl;     // Should return true
    cout << "Starts with 'ban': " << obj->startsWith("ban") << endl;     // Should return true
    cout << "Starts with 'appl': " << obj->startsWith("appl") << endl;  // Should return false
    cout << "Starts with 'xyz': " << obj->startsWith("xyz") << endl;    // Should return false

    delete obj; // Don't forget to free the memory
    return 0;
}