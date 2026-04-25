def calculate_dead_load(length, width, height, material="RCC"):
    densities = {
        "RCC": 25.0,
        "Plain_Concrete": 24.0,
        "Brick_Masonry": 19.0,
        "Steel": 78.5,
        "Timber": 8.0
    }
    volume = length * width * height
    unit_weight = densities.get(material, 25.0)
    total_load = volume * unit_weight
    return {
        "Volume (m3)": round(volume, 3),
        "Total Load (kN)": round(total_load, 2)
    }
report = calculate_dead_load(0.3, 0.3, 3.0, "RCC")
print(f"Dead Load Report: {report}")
