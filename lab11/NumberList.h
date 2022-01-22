//
// Created by txr185 on 2019-03-18.
//

#ifndef LINKEDLISTDEMO_NUMBERLIST_H
#define LINKEDLISTDEMO_NUMBERLIST_H

class NumberList
{
private:
    struct ListNode
    {
        double data;
        struct ListNode *next;
    };

    ListNode* head;

public:
    NumberList()
    {
        head = nullptr;
    }

    ~NumberList();

    void appendNode(double);
    void insertNode(double);
    void deleteNode(double);
    void displayList() const;
    ListNode* getPointerAtPosition(int);
    void deleteRange(ListNode*, ListNode*);
};


#endif //LINKEDLISTDEMO_NUMBERLIST_H
