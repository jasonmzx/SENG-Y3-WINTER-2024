# Software Quality Final Study *(so I don't fail lol)*
Date started: March 19th 2024


V Model that links with quality assurance

Software Engineer methodology

Average Cost For Fixing Bug Graph @ different phases

Red, Green, Refactor, TDD Test Driven Devleopment

Automation:

JUnit & CI/CD

Test Case Modeldriven test design, formalized manner, like paritions, etc... however not in Adhoc manner.


Test Case Design, 

Test First
Code corressponding to them

CI/CD Loop (Infinity loop)

Release Management for CI/CD

-Docker
-Git
-Maven
-Jenkins & Plugins
- Kubernetes?
- Mockito?


Design some Tests, Write some Code, Run the Tests, Do some CI/CD for exam

Figure 2.4 Model-driven test design MUST KNOW
-Artifact, Model the Artifact, Define Requirements for Tests, and 

Whitebox Testing Approach
* Access tocode

BlackBox Testing Appoach
* No access to code

Test-Case Table

Pre-conditions, Input, Expected outputs, Post-Conditions

Equivalent Classes Test Cases
- USed more in Blackbox
- Set of Input Values, that output an equivalent output? Needs elaboraiton
- These Sets are actually Paritions, how do we define those again?

- Can be Single Value Sets, Multi-Value, or infinite / continous amount of values (approch inf)

* ISP Coverage Criteria Subsumption slide ACoc, MBCC, PWC, BCC, ECC

Pairwise 20% Effort, 80% Quality, so it's good enough for it's effort

Go Over these Algos

Boundary Analysis (BUA) Test Cases

CFG Test Cases (Control Flow)

Data Flow GrapH Test Cases (DFG)
 

---

Chapter 7 stuff: Whitebox Testing

Start with Code -> Model it as a Graph, Draw Control flow graph for it, Calculate Cyclomatic Complexity *(Nodes, Edges, Predicates are If Statements and Control Flow Execution)*

Then Selection C Number of paths, Basis Path Testing Algorithms

Make Set of Paths and Create Test Cases out of those
- Path Sensitization (Algebreic expr for each path)
- Reduces it in simpliest form, like KMaps for example, simple Test

Simplified Path, which goes thru number of test predicates, and takes whatever direction

Say A*B bar, took the A, then B bar direction in the CFG

Translates into an Input value causing this behavior in the whitebox algorithm being tested

Use Those Paths to Calculate Correctness of the paths



## Useful Links

Paul Amman Slides & Book Content

[All Software-Quality Slides](https://cs.gmu.edu/~offutt/softwaretest/powerpoint/)

[Paul Amman SQ Book](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&ved=2ahUKEwi08Z_ErdiDAxWKLzQIHdyqAyMQFnoECAYQAQ&url=https%3A%2F%2Feopcw.com%2Ffind%2FdownloadFiles%2F11&usg=AOvVaw3-NeoiBhuEGUsWwnF1nqRk&opi=89978449)


