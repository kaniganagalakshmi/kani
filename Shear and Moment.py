import matplotlib.pyplot as plt
import numpy as np
def beam_analysis(L, W):
    x = np.linspace(0, L, 100)
    M = (W * L / 2) * x - (W * x**2) / 2
    print(f"Max Bending Moment: {max(M):.2f} kNm at x = {L/2}m")
    plt.plot(x, M, color='blue', label='Bending Moment')
    plt.fill_between(x, M, color='skyblue', alpha=0.4)
    plt.title("Bending Moment Diagram (BMD)")
    plt.xlabel("Position (m)")
    plt.ylabel("Moment (kNm)")
    plt.gca().invert_yaxis()
    plt.grid(True)
    plt.show()
beam_analysis(L=10, W=5)
