from Efectivity_of_player import final


def convert_int_to_dollar(n):
    """
    Function to convert integer values to dollar strings.

    Args:
        n (int): Integer value to be converted.

    Returns:
        str: Dollar string representation of the integer amount.
    """
    if isinstance(n, int):
        # Format the integer with commas and add a dollar sign
        return "${:,}".format(n)
    else:
        return "$0"  # Return $0 if input is not an integer


to_replace = final[['pos', 'Total Salary']]
final['Total Salary'] = final['Total Salary'].apply(convert_int_to_dollar)

final = final[['player', 'pos']]
Output2 = final.to_string(index=False)
