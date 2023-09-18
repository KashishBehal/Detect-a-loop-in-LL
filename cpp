lass Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
       Node* fast=head->next;
       Node* slow=head;
       while(fast && fast->next){
            if(slow==fast){
              return true;
          }
          slow=slow->next;
          fast=fast->next->next;
         
       }
       return false;
    }
};
