class queue{
    int *arr;
    int cs,ms,front,rear;

    public:
        queue(int default_size = 5){
            ms = default_size;
            arr = new int[ms];
            cs=0;
            front = 0;
            rear = ms - 1;
        }
        bool full(){
            return cs == ms;    
        }
        bool empty(){
            return cs == 0;
        }
    void enqeue(int data)
    {
        if(!full())
        {
            rear = (rear+1)%ms;
            arr[rear] = data;
            cs++;
        }
    }
    void dequeue(){
        if(!empty()){
            front = (front+1)%ms;
            cs--;
        }
    }
    public:
    int getfront(){
        return arr[rear];
    }

};