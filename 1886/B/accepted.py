import math

for _ in range(int(input())):
  Px, Py = map(int, input().split())
  Ax, Ay = map(int, input().split())
  Bx, By = map(int, input().split())

  o_near_a = False
  p_near_a = False
  distance_o_a = math.dist([0, 0], [Ax, Ay])
  distance_o_b = math.dist([0, 0], [Bx, By])
  distance_p_a = math.dist([Px, Py], [Ax, Ay])
  distance_p_b = math.dist([Px, Py], [Bx, By])
  distance_a_b = math.dist([Ax, Ay], [Bx, By])

  if (distance_o_a < distance_o_b):
    o_near_a = True
  
  if (distance_p_a < distance_p_b):
    p_near_a = True

  if (o_near_a and p_near_a):
    print(max(distance_p_a, distance_o_a))
  elif (not o_near_a and not p_near_a):
    print(max(distance_p_b, distance_o_b))
  elif (o_near_a and not p_near_a):
    print(max(distance_a_b / 2, distance_o_a, distance_p_b))
  else: 
    print(max(distance_a_b / 2, distance_o_b, distance_p_a))