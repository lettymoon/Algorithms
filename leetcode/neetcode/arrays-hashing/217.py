class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:

        # func que ordena a array
        nums.sort()

        # usar um loop para verificar se existe numeros = no vetor
        # usar um contador para retornar a true ou false
        tam = len(nums)
        cont = 0
        i = 0
        while i < tam-1:
            j = i + 1
            if i != j and nums[i] == nums[j]:
                cont +=1
            i+=1

        if cont > 0:
            return True
        else:
            return False