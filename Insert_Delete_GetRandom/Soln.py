class RandomizedSet:

    def __init__(self):
        self.val_to_ind={}
        self.values=[]
        

    def insert(self, val: int) -> bool:
        if val not in self.val_to_ind:
            self.values.append(val)
            self.val_to_ind[val]=len(self.values)-1
            return True
        else:
            return False
        
        

    def remove(self, val: int) -> bool:
        if val not in self.val_to_ind:
            return False
        else:
            ind=self.val_to_ind[val]
            last=self.values[-1]
            self.values[ind]=last
            self.values.pop()
            self.val_to_ind[last]=ind
            del self.val_to_ind[val]
            return True
        

    def getRandom(self) -> int:
        return random.choice(self.values)


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()
