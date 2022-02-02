# BaseDMG:
Base Damage of weapon, before being modified
# Falloff:
The damage falloff of weapon, the first number is the distance where falloff begins, second is falloff amount per distance, calculated cumulatively

```
Calculated by:

Damage * FalloffAmount^floor(distance - FalloffDistance)
```
# Accuracy:
Rolling for attack is done by rolling a D20. Your weapon's Accuracy is added to