# Single inheritance
class father():
    f_name="c"
    f_level="mid"
class son(father):
    s_name="java"
    s_level="high"
obj=son()
123
print("<---- Single Inheritance---->")
print("father name is",obj.f_name)
print("son name is",obj.s_name)

# Multilevel
class G_father():
    G_name="A"
    G_level="low"
class father(G_father):
    f_name="c"
    f_level="mid"
class son(father):
    s_name="java"
    s_level="high"
o=son()
print("<---- Multilevel Inheritance---->")
print("Grand name is",o.G_name)
print("father name is",o.f_name)
print("son name is",o.s_name)

# Multiple
class Supersenior():
    ss="Phd"
    def ss_sem(self):
        print("total sem=",3*2)

class Senior():
    s="PG"
    def s_sem(self):
        print("total sem=",2*2)

class Junior(Supersenior,Senior):
    j="UG"
    def j_sem(self):
        print("total sem=",4*2)
clg=Junior()
print("<---- Multiple Inheritance---->")
print("SuperSeniors are ",clg.ss)
print("Seniors are",clg.s)
print("juniors are",clg.j)
clg.ss_sem()
clg.s_sem()
clg.j_sem()




