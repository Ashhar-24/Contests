from collection import defaultdict

def cal(n,m,friend, k):
  frineds = defaultdict(list)
  for u,v in friend:
    friends[u].append(v)
    friends[v].append(u)
   
  attendance = [1] *n
  roaster_val = sum(attendance)
  days =1
  
  total = roaster_val
  while total <k:
    next_attend = [0]*n
    for emp in range(n):
      wfo = sum(attendace[f] for f in friends[employee])
      if attendance[emp] == 1:
        next_attend[emp] =1 if wfo ==3 else 0
      else:
        next_attend[emp] = 1 if wfo <3 else 0
        
      attendance = next_attend
      roaster_val = sum(attendance)
      total += roaster_val
      days +=1
      
    return days
  
  with open("/mnt/data/file-PMXAhuijuaM4DwccZ4uRu", "r") as file:
    data = file.read().splitlines()
    
  n,m = map(int, data[0].split())
  friend = [tuple(map(int,line.split()))
            for line in data[1:-1]
            k=int(data[-1])
            
  result = cal(n,m,friend,k)
            print(result)