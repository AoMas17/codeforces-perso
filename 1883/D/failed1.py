def do_a_pair_of_segment_not_intersect(multiset):
  if len(multiset) < 2:
    return False
  
  len_sorted_multiset = len(multiset)
  rightmost_endpoint = multiset[0][1]
  leftmost_endpoint = multiset[len_sorted_multiset-1][0]
  
  for i in range(1, len_sorted_multiset):
    left, right = multiset[i]
    if left > rightmost_endpoint or right < leftmost_endpoint:
      return True
  rightmost_endpoint = max(rightmost_endpoint, right)
  leftmost_endpoint = min(leftmost_endpoint, left)

  return False

mulltiset = []

prec = False
for _ in range(int(input())):
  s = input()
  if s[0] == '+':
    if mulltiset == []:
      mulltiset.append((s[2], s[4]))
    else:
      i = 0
      while i < len(mulltiset) and mulltiset[i][0] < s[2]:
        i += 1
      mulltiset.insert(i, (s[2], s[4]))
  else:
    mulltiset.remove((s[2], s[4]))

  if s[0] == '+' and prec:
    print("YES")
  elif s[0] == '-' and not prec:
    print("NO")
  else:
    if do_a_pair_of_segment_not_intersect(mulltiset):
      print("YES")
      prec = True
    else:
      print("NO")
      prec = False