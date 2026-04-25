def manning_flow(n, R, S, A):
    velocity = (1/n) * (R**(2/3)) * (S**0.5)
    discharge = A * velocity
    return velocity, discharge
v, q = manning_flow(n=0.013, R=0.8, S=0.001, A=2.5)
print(f"Flow Velocity: {v:.2f} m/s")
print(f"Total Discharge (Q): {q:.2f} m3/s")
