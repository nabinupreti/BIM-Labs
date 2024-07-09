class Counter:
  count = 0

  def __init__(self):
    Counter.count += 1

  @staticmethod
  def get_total_count():
    return Counter.count

# Create objects of the Counter class
c1 = Counter()
c2 = Counter()
c3 = Counter()
print(f"Total objects created: {Counter.get_total_count()}")