# Black Box
Black box testing is a software testing technique where the internal structure/design/implementation of the item being tested is not known to the tester. The key focus is on the execution of the entire system or component to determine the external behavior of the software. This method of testing is applicable across all levels of software testing: unit, integration, system, and acceptance. It is particularly useful in validation and for testing the functional requirements of software. Two of the most widely used techniques in black box testing are Boundary Value Analysis (BVA) and Equivalence Partitioning (EP). Both aim to reduce the number of test cases required to cover the functional behavior effectively.

### Boundary Value Analysis (BVA)

Boundary Value Analysis is based on the principle that input values at the extreme ends of input ranges, and just inside/outside these ranges, tend to be where errors occur. By testing these boundaries, rather than the center of the input domain, testers can more efficiently identify where the application might fail.

**Example of BVA:**

Consider a function that accepts an integer between 1 and 1000:
- Valid Boundary values are 1 and 1000.
- Invalid Boundary values are 0 and 1001.
- Test cases would include values like 0, 1, 2, 999, 1000, and 1001 to effectively cover the boundary conditions.

### Equivalence Partitioning (EP)

Equivalence Partitioning, also known as Equivalence Class Partitioning (ECP), divides input data of a software unit into partitions of equivalent data from which test cases can be derived. An equivalence partition (or class) groups together inputs that are expected to be treated similarly by the system. If a test case is valid for a single representative of an equivalence class, it is considered valid for all possible cases within that class.

**Example of EP:**

Imagine a function that categorizes input ages into groups:
- Children: 0 to 12 years
- Teenagers: 13 to 19 years
- Adults: 20 to 65 years
- Seniors: 66 years and above

In this case, each age group represents an equivalence class. Test cases could be designed to cover each class:
- A child at 12 (valid boundary for child)
- A teenager at 13 and 19 (boundaries for teenagers)
- An adult at 20 and 65 (boundaries for adults)
- A senior at 66 (boundary for seniors)

By testing with any age within these classes, you can assume the system will behave similarly for any age in the same class, reducing the number of test cases needed.

### Defining Equivalence Partitions:

Equivalence partitions are defined by examining the input data and output requirements of the system to identify sets of values that should be treated the same. Considerations include:
- Input data characteristics and requirements specified in the system documentation.
- Output actions or results expected from the system in response to the input data.
- Handling of exceptional or error conditions.

### Combining BVA and EP:

Combining BVA and EP can be very effective. After defining equivalence partitions, you can apply BVA to identify boundary values for each partition. This approach helps ensure a thorough examination of input data ranges and individual data points that are critical to the application's operation.

### Practical Example Combining BVA and EP:

Let's consider a simple web application that accepts a numerical input representing an amount to be credited to a user's account, where the valid range is $10 to $1000.

- **Equivalence Partitions:**
  - Valid Partition: $10 to $1000
  - Invalid Partitions: Less than $10 and more than $1000

- **Boundary Values:**
  - Valid Boundaries: $10 and $1000
  - Invalid Boundaries: $9 and $1001

**Test Cases:**
1. Test with $10 (valid lower boundary).
2. Test with $1000 (valid upper boundary).
3. Test with $9 (invalid lower boundary).
4. Test with $1001 (invalid upper boundary).
5. Test with a value within the range, say $500, to represent the valid partition.

By meticulously selecting input values and understanding the system's response to them, you can efficiently cover a wide range of scenarios, enhancing the test suite's effectiveness and ensuring a higher quality software product.