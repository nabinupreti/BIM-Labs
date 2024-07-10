class TicketBooth:
  def __init__(self, ticket_price):
    self.ticket_price = ticket_price
    self.people_visited = 0
    self.total_money = 0

  def increment_people(self):
    self.people_visited += 1
  
  def increment_both(self):
    self.people_visited += 1
    self.total_money += self.ticket_price
  
  def displayAll(self):
    print("People visited:",self.people_visited)
    print("Total ticket sold:",self.total_money/self.ticket_price)
    print("Total money collected:",self.total_money)


ticket_price = 2.50
booth = TicketBooth(ticket_price)
booth.increment_both()
booth.increment_both()
booth.increment_people()
booth.displayAll()