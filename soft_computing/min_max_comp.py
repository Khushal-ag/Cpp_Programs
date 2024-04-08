def min_max_composition(rule_outputs):
   
    result = rule_outputs[0]

    for i in range(1, len(rule_outputs)):
        result = [min(result[j], rule_outputs[i][j]) for j in range(len(result))]

    return result

rule_output_1 = [0.8, 0.5, 0.2]
rule_output_2 = [0.4, 0.7, 0.6]
rule_output_3 = [0.6, 0.3, 0.9]

result_fuzzy_set = min_max_composition([rule_output_1, rule_output_2, rule_output_3])

print("Result of Min-Max Composition:", result_fuzzy_set)
