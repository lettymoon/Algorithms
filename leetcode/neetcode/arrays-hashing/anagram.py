def isAnagram(self, s: str, t: str) -> bool:

    s_ordered = sorted(s)
    t_ordered = sorted(t)

    print(s_ordered)
    print(t_ordered)

    if(s_ordered == t_ordered):
        return true
    else:
        return false

    s = input
    t = input

if isAnagram(s, t) == true:
    print("true")
else:
    print("false")