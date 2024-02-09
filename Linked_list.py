class node:
    def __init__(self,item = None,nxt = None):
        self.item = item
        self.nxt =  nxt
        
class SLL:
    def __init__(self,start = None):
        self.start = start
        
    def is_empty(self):
        return self.start == None
    
    def insert_at_beginning(self,data):
        n = node(data,self.start)
        self.start=n
        
    def insert_at_last(self,data):
        n=node(data)
        if not self.is_empty():
            temp = self.start
            while temp.nxt is not None:
                temp = temp.nxt
            temp.nxt = n
        else:
            self.start = n
            
    def search_(self,data):
        temp = self.start
        while temp is not None:
            if temp.item == data:
                return temp
            else:
                temp = temp.nxt
        return None    #If data is not found in the list
            
    def print_list(self):
        temp = self.start
        while temp is not None:
            print(temp.item, end = " ")
            temp = temp.nxt
    
    def insert_after(self,ele,data):
        temp = self.search_(ele)
        if temp is not None:
            n = node(data,temp.nxt)
            temp.nxt=n
            
            
    def delete_at_first(self):
        if self.start is not None:
            self.start=self.start.nxt
        #self.print_list() 
        
    def delete_last(self):
        if self.start is None:  #list is empty
            pass
        elif self.start.nxt is None: #list has one element only
            self.start = None
        else:
            temp = self.start
            while temp.nxt.nxt is not None:
                temp= temp.nxt
            temp.nxt = None
            
    def delete_betw(self,data):
        if self.start is None: #list is empty
            pass
        if self.start.nxt is None: # list has only one element
            if self.start.item == data:#if the only present element is to be deleted
                self.start = None
        else:
            temp = self.start
            while temp.nxt is not None:
                if temp.nxt.item == data:
                    temp.nxt = temp.nxt.nxt
                    break
                temp = temp.nxt
        
a = SLL()
a.insert_at_beginning(5)
a.insert_at_beginning(6)

