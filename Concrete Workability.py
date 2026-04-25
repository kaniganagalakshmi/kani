def classify_workability(slump_mm):
    """
    Classifies concrete workability based on Slump Value (mm)
    Reference: IS 456 / Concrete Technology Standards
    """
    print(f"--- Concrete Workability Report ---")
    print(f"Measured Slump: {slump_mm} mm")
    if slump_mm < 25:
        workability = "Very Low"
        use_case = "Road construction, mass concrete, or vibrated power-compacted concrete."
    elif 25 <= slump_mm < 50:
        workability = "Low"
        use_case = "Mass concrete, light reinforced sections, and foundations."
    elif 50 <= slump_mm < 100:
        workability = "Medium"
        use_case = "Normal reinforced concrete (beams/slabs) with manual compaction."
    elif 100 <= slump_mm < 150:
        workability = "High"
        use_case = "Pumping concrete and heavily reinforced sections."
    else:
        workability = "Very High (Collapse/Shear)"
        use_case = "Tremie concrete (underwater) or Self-Compacting Concrete (SCC)."
    return workability, use_case
slump_value = 85 
status, recommendation = classify_workability(slump_value)
print(f"Workability Level: {status}")
print(f"Recommended Use: {recommendation}")
