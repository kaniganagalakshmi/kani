def fineness_modulus(weights_retained):
    total_weight = sum(weights_retained)
    cumulative_retained = []
    current_sum = 0
    for w in weights_retained:
        current_sum += w
        cumulative_retained.append((current_sum / total_weight) * 100)
    fm = sum(cumulative_retained) / 100
    return round(fm, 2)
sample_data = [0, 150, 250, 300, 100, 50, 50, 40, 30, 30]
print(f"Fineness Modulus: {fineness_modulus(sample_data)}")
