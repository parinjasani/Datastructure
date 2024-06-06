def final_pos(grid,rows,cols,ob):
  x,y=0,0
  for move in grid:
    if move == 'U' and y<rows-1 and (x,y+1) not in ob:
      y +=1
    elif move == 'D' and y>0 and (x,y-1) not in ob:
      y -= 1
    elif move == 'L' and x>0 and (x-1,y) not in ob:
      x-=1
    elif move == 'R' and x<cols-1 and (x+1,y) not in ob:
      x+=1
    elif move == 'X':
      continue
  return x,y
grid= input()
rows= int(input())
cols = int(input())
obsc = int(input())
ob = []
for _ in range(obsc):
  row,col=map=(int,input().split())
  ob.append((row,col))
final = final_pos(grid,rows,cols,ob)
print(f"Final position of the robot : {final}")

