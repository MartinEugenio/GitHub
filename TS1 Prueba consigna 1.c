import numpy as np
import matplotlib.pyplot as plt


def sen(amp,dc,ff,ph,nn,fs):
    ##Amplitud, desplazamiento, frecuencia, diferencia de fase en radianes,
    ##numero de muestras, frecuencia de muestreo
    n=np.arange(nn)
    t=n/fs
    x= dc + amp*np.sin(2*np.pi*ff*t+ph)
 
    return t,x

tt,xx = sen(sen(1,0,1000,0,500,20000),0,2000,0,500,20000)
print(t)
print(x)

plt.plot(tt,xx)
plt.show()
