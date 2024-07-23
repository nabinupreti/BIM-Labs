from abc import ABC, abstractmethod
class Task(ABC):
    @abstractmethod
    def execute(self):
        pass

    @abstractmethod
    def rollback(self):
        pass

class FileTask(Task):
    def execute(self):
        print("File task executed")
    
    def rollback(self):
        pass

class DatabaseTask(Task):
    def execute(self):
        print("Database task executed")
    
    def rollback(self):
        print("Database Task rolled back")

db = DatabaseTask()
db.execute()
db.rollback()
file = FileTask()
file.execute()
file.rollback()
