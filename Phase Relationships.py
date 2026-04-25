def soil_properties(Vv, Vs, Ws, Gs):
    e = Vv / Vs        
    n = (Vv / (Vv + Vs)) * 100 
    gamma_d = Ws / (Vv + Vs)
    return {"Void Ratio": e, "Porosity %": n, "Dry Unit Weight": gamma_d}
results = soil_properties(Vv=0.4, Vs=0.6, Ws=16.5, Gs=2.65)
for key, value in results.items():
    print(f"{key}: {value:.2f}")
