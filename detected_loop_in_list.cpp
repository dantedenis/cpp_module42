    bool detectLoop(Node* head)
    {
        std::map<long long, int> my_map;
        while (head->next){
            if (++my_map[(long long)(head)] == 2)
                return (true);
            head = head->next;
        }
        return (false);
    }
