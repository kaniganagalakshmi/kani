def rainfall_intensity(time_of_concentration):
    a = 750
    b = 10
    intensity = a / (time_of_concentration + b)
    return round(intensity, 2)
tc = 20 # minutes
print(f"Design Rainfall Intensity: {rainfall_intensity(tc)} mm/hr")
