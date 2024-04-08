
def fuzzyUnion(s1, s2):
    for e1,e2 in zip(s1,s2):
        v1 = s1[e1]
        v2 = s2[e2]
        if e1==e2:
            if v1>v2:
                ans[e1] = v1
            else:
                ans[e2] = v2
        else:
            ans[e1] = v1
            ans[e2] = v2
    print("Union : ",ans)

def fuzzyIntersection(s1, s2):
    for e1,e2 in zip(s1,s2):
        v1 = s1[e1]
        v2 = s2[e2]
        if e1==e2:
            if v1<v2:
                ans[e1] = v1
            else:
                ans[e2] = v2
    print("Intersection : ",ans)

def fuzzyDifference(s1, s2):
    for e1,e2 in zip(s1,s2):
        v1 = s1[e1]
        v2 = s2[e2]
        v2 = 1-v2
        if v1<v2:
            ans[e1] = v1
        else:
            ans[e2] = v2
    print("Difference : ",ans)

S1 = dict()
S2 = dict()

ans = dict()

S1 = {'a':0.2, 'b':0.4, 'c':0.6, 'd':0.8, 'f':1.0}
S2 = {'a':0.1, 'b':0.3, 'c':0.5, 'd':0.7, 'e':0.9}
fuzzyUnion(S1,S2)
ans.clear()
fuzzyIntersection(S1,S2)
ans.clear()
fuzzyDifference(S1,S2)
