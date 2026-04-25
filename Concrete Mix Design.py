def concrete_mix_design(ratio_parts, w_c_ratio, air_content_percent=2.0):
    rho_cement = 3150
    rho_sand = 2650
    rho_agg = 2800
    rho_water = 1000
    vol_solids = 1.0 - (air_content_percent / 100)
    cement_weight = vol_solids / (
        (1/rho_cement) + 
        (ratio_parts[1]/rho_sand) + 
        (ratio_parts[2]/rho_agg) + 
        (w_c_ratio/rho_water)
    )
    materials = {
        "Cement (kg)": round(cement_weight, 2),
        "Water (kg/L)": round(cement_weight * w_c_ratio, 2),
        "Sand (kg)": round(cement_weight * ratio_parts[1], 2),
        "Coarse Aggregate (kg)": round(cement_weight * ratio_parts[2], 2)
    }
    return materials
results = concrete_mix_design(ratio_parts=(1, 1, 2), w_c_ratio=0.45)
print("--- Material Quantities for 1 cubic meter ---")
for mat, qty in results.items():
    print(f"{mat}: {qty}")
