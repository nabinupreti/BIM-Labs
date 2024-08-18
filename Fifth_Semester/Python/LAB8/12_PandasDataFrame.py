import pandas as pd
import numpy as np

#Create a DataFrame from a dictionary
data = {
    'Integers': np.arange(1, 11),
    'Floats': np.linspace(1.1, 2.0, 10),
    'Strings': list('abcdefghij')
}

df = pd.DataFrame(data)
print(df)

# a. Convert one of the columns into a Pandas Series
int_series = df['Integers']

# b. Display the first 5 rows and last 3 rows
print("First 5 rows:\n", df.head(5))
print("Last 3 rows:\n", df.tail(3))

# c. Check the data types of each column
print("Data Types:\n", df.dtypes)

# d. Introduce missing values and fill them
df.loc[2, 'Integers'] = np.nan
df.loc[4, 'Floats'] = np.nan
df['Integers'].fillna(df['Integers'].mean(), inplace=True)
df['Floats'].fillna(df['Floats'].mean(), inplace=True)
print("DataFrame after filling missing values:\n", df)

# e. Index the DataFrame using loc and iloc
print("Using loc:\n", df.loc[2:4, ['Integers', 'Strings']])
print("Using iloc:\n", df.iloc[2:5, [0, 2]])

# f. Slice the DataFrame to select a subset of rows and columns
subset_df = df.iloc[1:6, 0:2]
print("Sliced DataFrame:\n", subset_df)

# g. Merge with another DataFrame and perform joins
data2 = [{'Integers': i, 'Category': f'Cat{i}'} for i in range(1, 11)]
df2 = pd.DataFrame(data2)

inner_join = pd.merge(df, df2, on='Integers', how='inner')
outer_join = pd.merge(df, df2, on='Integers', how='outer')

print("Inner Join:\n", inner_join)
print("Outer Join:\n", outer_join)

# h. Save the DataFrame to a CSV and load it back
df.to_csv('data.csv', index=False)
loaded_df = pd.read_csv('data.csv')
print("Loaded DataFrame:\n", loaded_df.head())
