class binomial:

    def __init__(self):
        self.Sf = [0,0]
        self.ts = 1
        self.s0 = 10
        self.u = self.Sf[0]/self.s0
        self.d = self.Sf[1]/self.s0
        self.r = 1/10
        self.Sf_disc = []
        self.k = 1
        self.

    def set_k(self, k):
        self.k = k

    def set_Sf(self,s):
        self.Sf[0] = s[0]
        self.Sf[1] = s[1]

    def set_s0(self,s):
        if s == 0: raise ValueError('Preço inicial 0 não será modelado')
        self.s0 = s

    def set_Ts(self,t):
        self.ts = t

    def discretize(self):
        u_disc = (self.Sf[0]/self.s0)**(1/(self.ts-1))
        d_disc = (self.Sf[1] / self.s0) ** (1 / (self.ts - 1))
        for i in range(0,self.ts):
            self.Sf_disc.append(u_disc**(self.ts-1-i)*d_disc**(i)*self.s0)

    def print_Sf(self):
        print(self.Sf_disc)

    def call(self, s):
        if self.k >= s: return 0
        return s - self.k

    def put(self, s):
        if s >= self.k: return 0
        return self.k - s

