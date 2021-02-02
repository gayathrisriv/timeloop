n = input()
c =  len(n)
cnt = 0 
t =0
for i in range(1,c):
   if n[i] == 's':
      cnt += 1
   if cnt == 2:
       t = 1
       print("hiss")

if t == 0:
  print("no hiss")