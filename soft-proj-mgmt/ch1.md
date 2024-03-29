### What is software project management?

- Just like normal projects, it's project that *SATISFY* real needs & goals
- Must Identify project's stakeholders, objectives, etc...


Projects often fail – Standish Group claim only a third of ICT projects are successful. 
**82%** were late and **43%** exceeded their budget.

*Poor project management is a major factor in these failures*

## What is a Project?
- Planned Activity / Undertaking
- A Specific Plan or Design
- A Large undertaking *EX.* Builing a Social Media Platform

**KEY Words**: *Planning* & *Size*

### Distinguishing Project Characteristics:

- non-routine tasks are involved
- planning is required
- specific objectives are to be met or a specified product is to be created
- the project has a predetermined time span
- work is carried out for someone other than yourself
- work involves several specialisms
- people are formed into a temporary work group to carry out the task
- work is carried out in several phases
- the resources that are available for use on the project are constrained
- the project is large or complex.

---

![Jobs V Projs](./static/SPM_0.png)

### Exercise 1.1

- *"producing an edition of a newspaper"* 
    - **JOB** well defined & understood task, with lot's of certainty, it's a routine!

- *"Writing an operating system for a new computer"*
    - **PROJECT** Writing an operating system is a complex, planned task with specific objectives and various phases of development. Fairly certain outcome, but not as certain as a Job/Routine.

- *"A research project into what makes a good human-computer interface"* 
    - **EXPLORATION** Although the research might be planned, it still has LOTS of uncertainty for the outcome, and it can go in any direction.


---

## Particular Aspects of Software Projects over Regular Projects

1. **Invisibility**: Software project progress is not immediately visible, unlike physical construction projects where a house is built. Managing software projects involves making the invisible progress visible.

2. **Complexity**: Software products contain higher complexity per unit of currency spent compared to other engineered artifacts.

3. **Conformity**: Unlike traditional engineers who work with consistent physical systems, software developers must conform to the ever-changing requirements of human clients. Organizational challenges can also lead to inconsistencies, and "Organizational Stupidity"

4. **Flexibility**: Software's ease of change is a strength, but it often needs to adapt to other components in physical or organizational systems, making the software system highly subject to change.

---

*ICT (Information and Communication Technology) Development refers to the process of designing, creating, implementing, and maintaining information technology systems and solutions.*

## Contract Management and Technical Project Management

1. **In-House Projects**:
   - Users and developers are part of the same organization.
   - Close collaboration between users and developers.
   - Project manager may be more involved in technical decisions.
   - Detailed estimation of effort for individual software components is often required.
   - *Emphasis* on internal communication and understanding organizational needs.

2. **Outsourced Projects**:
   - External developers or contractors are hired for ICT development.
   - **Client** organization **appoints a project manager** to oversee the contract.
   - Project manager delegates many technical decisions to contractors.
   - Focus on ensuring the overall project stays within budget and on schedule.
   - Technical project managers on the supplier side handle technical issues and deliverables.
   - Emphasis on effective contract management, communication with contractors, and meeting project goals.

**NOTE**: This course leans towards the concerns of these ‘technical’ project managers

---
## Activities Covered by Software Project Management
*Software development activities recommended in the international standard ISO 12207*
<br>![cycle11](./static/SPM_1.png)

**Feasibility Study**
- Evaluates if a project is worth pursuing.
- Gathers information on application requirements.
- Stakeholders may have clear goals but not know how to achieve them.
- Estimates developmental and operational costs.
- Assesses the value of the new system's benefits. *(Is it Worth it?)*
- In large systems, feasibility study can be a project on its own.
- Can be part of a broader strategic planning exercise.
- Organizations may assess a program consisting of multiple projects.

**Project Planning**
- Starts if feasibility study indicates project viability.
- Detailed planning evolves over the project's life.
- Initial outline plan for the entire project.
- Detailed plan for the initial stage.
- Detailed planning for later stages happens closer to their start.
  
**Project Execution**
- Includes **design** and **implementation** sub-phases.
- *Design* involves making decisions about product form.
- *Design* decisions relate to external appearance (user interface) and internal software architecture.
- The plan outlines activities to create these products.
- Detailed planning influenced by design decisions.
- Multiple sets of activities may be needed for a software product with several major components.

![cycle11](./static/SPM_2.png)

---

<details>
<summary style="font-size: 30px; font-weight: 500; cursor: pointer;"> GPT Elaborations on Soft. Dev Life Cycle (long) </summary>

### Requirements Analysis Phase
1. **Requirements Elicitation/Gathering**: 
   - Identifying what users and their managers need from the new system.
   - Example: An ambulance dispatch system needs rapid transaction times for emergency calls.

2. **Function and Quality Requirements**: 
   - Defining the functions the system should perform and the quality standards.
   - Example: The system must quickly dispatch ambulances in emergencies, ensuring reliability and speed.

3. **System Requirements**:
   - Including hardware, software, and human operation aspects.
   - Example: Efficient operator training for using the computer system for dispatch.

4. **Resource Requirements**:
   - Relating to development costs, both in terms of software and additional resources.
   - Example: Budgeting for the development of the ambulance dispatch software and necessary hardware.

### Architecture Design Phase
1. **Component Identification**:
   - Identifying new or existing components to fulfill each requirement.
   - Example: Determining if existing software can handle emergency call processing or if new development is needed.

2. **Software and Hardware Components**:
   - Inclusion of both software and potential hardware or work process changes.
   - Example: Evaluating if new hardware is needed to enhance dispatch system performance.

3. **Consideration of Legacy Systems**:
   - Ensuring compatibility and interoperability with existing systems.
   - Example: Integrating the new dispatch system with existing emergency response databases.

4. **System Architecture Design**:
   - Mapping software requirements to software components.
   - Example: Designing how the software will handle emergency call inputs and dispatch outputs.

### Detailed Design Phase
1. **Component Design**:
   - Detailed design of individual software units.
   - Each unit can be seperately coded and tested *(Good for teams)*
   - Example: Designing the user interface for operators in the dispatch system.

2. **Coding and Testing**:
   - Separate coding and testing of each software unit.
   - Example: Coding the algorithm for the fastest ambulance routing and testing it under different scenarios.

3. **Integration**:
   - Combining all software units into a complete system. *(Combining with Hardware modules, software systems, API systems, etc...)*
   - Example: Integrating the routing algorithm with real-time traffic data and operator interfaces.

4. **System / Quality Testing**:
   - Testing the system as a whole to ensure it meets all requirements. *(NOT JUST THE SOFTWARE)*
   - Example: Conducting simulated emergency calls to test system responsiveness and reliability.
</details>

---

## Plans, Methods and Methodologies

![metod](./static/SPM_3.png)

**Method** : Relates to a type of activity in general, Example methods for testing software: 
- analyse the requirements for the software
- devise and write test cases that will check that each requirement has been satisfied
- create test scripts and expected results for each test case
- compare the actual results and the expected results and identify discrepancies

**Plan** : Takes those method(s) and convert it to a real activity, and identifying the follow:
- its start and end dates;
- who will carry it out;
- what tools and materials – including information – will be needed.

---

## Some Ways of Categorizing Software Projects

**Compulsory Users**
- Engineers using Solidworks or Excel for their job, and profession
- Sales people recording sales, and using Google Meet for project meetings

**Voluntary Users**
- Gamers playing GTA V *Computer Game*, or scrolling on TikTok *Entertainment App*

<br>

**Information Systems** <br>
Information Systems (IS) are computer-based systems that gather, store, process, and distribute information to support decision-making and various organizational activities. They include software, hardware, data, procedures, and personnel, all working together to manage data and facilitate effective information flow within an organization.
<br><br>

**Embedded Systems** <br>
Embedded Systems are specialized computer systems designed to perform specific dedicated functions within a larger system or product. They are typically embedded into devices or machines and are responsible for controlling and managing specific tasks, often in real-time. Embedded systems have limited resources and are optimized for efficiency and reliability. *(Controlling Machines for EX)*

### **Objective-Driven Development**; Projects can aim to produce a product or meet specific objectives.

- **Product Creation**: Some projects involve creating a specified product, with the client justifying its need.
- **Objective-Based Projects**: Other projects focus on meeting objectives that could have multiple solutions.
- **Two-Stage Approach**: Many software projects begin with an objective-driven phase, resulting in recommendations *(e.g., need for a new software system)*, followed by product development.

- **EX: Implementing a new pay-roll system**: This is typically **objective-driven** as the goal is to address a specific need or objective within the organization, such as improving payroll processing efficiency or accuracy.

---

### Product Driven Examples *(NOT OBJECTIVE ! )*

- **Switching a database from DB2 to Oracle**: If the focus is on the technical process of migrating from one database system to another, it's **product-driven**.

- **Implementing a new iPhone app**: This is **product-driven** as the focus is on creating a specific product (the iPhone app) based on defined features and requirements, as there isn't an objective, rather a product needing to be built.

---

## Stakeholders

- People who have a stake / interest in thiss project
- Early identification of stakeholders is important; Need Adequate communications with them!

**Types of Stakeholders:**
- Internal Project Team 
   - *Under the direct control of managemenet & project leader*
- External to Project Team, but in the Organization 
   - *example, the project leader might need the assistance of the users to carry out systems testing. Here the commitment of the people involved has to be negotiated*
- External to Project Team & Organization 
   - *Customers, Users / End-Users, Contracted people who carry out work for the project, usually Contract based*

- **Diverse Stakeholder Objectives**: Different stakeholders have varying objectives in a project.
- **Project Leader's Role**: Project leaders must recognize and reconcile these diverse interests.
- **Example**: End-users may prioritize ease of use, while managers focus on cost savings.
- **Communication and Negotiation**: Project leaders need strong communication and negotiation skills.
- **'Theory W'**: Boehm and Ross proposed 'Theory W,' emphasizing creating win-win situations for all parties involved in a project. *(W = WIN)*
- **Overlooked Stakeholders**: Sometimes, important stakeholder groups may be overlooked, especially in unfamiliar business contexts.
- **Communication Plan**: Recommended practice is to create a communication plan at the project's outset to coordinate stakeholder efforts and ensure their interests align for project success.

---

## Setting Objectives

- Some Stakeholders actually own the project, and they be controlling the finances of the project n stuff !
-  They also set the objectives of the project. The objectives should define what the project team must achieve for project success. 

Informally the objectives could be written as a set of statements following the opening words *"The project will be a success if. . . ."*
   - *"Customers can order our products online"* , which is quite loose, and less technical than *"Build E-Commerce Web-Application"*
   - The more possible success scenarios, the higher probabilty of project success

#### **Steering Committee** | AKA: Project Board or Project Management Board

- A project authority needs to be explicitly identified with overall authority over the project.
- Have overall responsibility for setting, monitoring and modifying objectives.
- Project manager runs the project on a day-to-day basis, and regularly reports to Steering Committee

### Sub-Objectives

![SPM_4](./static/SPM_4.png) <br>
Textbook Definition <br>
![SPM_4](./static/SPM_5.png)

### Measure of Effectiveness

- Mean Time Between Failures (MTBF) - *Measure of Reliability*
- Project Managers want an Idea of *Performance Measurements* (Reliability, Extendibility, etc...)
- We seek *Predictive Measures* for these ^.
- **example**, a large number of errors found during code inspections might indicate potential problems with reliability later.

---

## The Business Case

- Effort & Expenses of Project **VS** Benefit, needs to be Worthwhile !!!
- Cost-Benefit analysis will often be part of the project's feasibility study.
- Itemize and quantify the project’s costs and benefits *(Formulating Business Model)*

**Example Business Model**: A new web-based application might allow customers from all over the world to order a firm’s products via the internet, increasing sales and thus increasing revenue and profits.
<br>

![SPM_4](./static/SPM_5.png)

---

## Project Success & Failure

*PROJECT OBJECTIVES* != *BUSINESS OBJECTIVES* <br>

**Project Objectives** <br>
![SPM_4](./static/SPM_7.png)

- Althought the Business Fails, we've still build awesome **Software Libraries** that can be re-used, an Asset
- Improved skill and knowledge regardless of bussiness success (for devs)

**Business Objective**
- IN business terms it can generally be said that a project is a success if The assessment of the value of benefits exceeds the costs.
- A project could meet these targets but the application, once delivered could fail to meet the business case.
- Value of project deliverables is based on selling, gaining customer, gaining $$$, not the actual software.
- A project can be a success on delivery but then be a business failure.
- On the other hand, a project could be late and over budget, but its deliverables could still, over time, generate benefits that outweigh the initial expenditure

**Technical Learning** increases cost at the beginning, but later it's better.
- Example: Jason learns Full-Stack dev in early stages, now 2 years later, he's a pro at it, and can re-use code and write stuff quick
- Astute managers may assess which areas of technical expertise it would be beneficial to develop

---

## What is Management?

![SPM_4](./static/SPM_8.png)

### **Most time spend by Manager on these 3**
- Planning, Monitoring & Controlling
- Prog. mgmt is carried out over three Well-Defined stages
   - **1**: Plan is made *(Initial Plan)*
   - **2**: Project is monitored & controlled, to proceed as Planned
      - Revisions to Init. Plan are done if need be. *(Revised Periodically)*
   - **3**: Project is Closed 

- Initial Project Planning is done AFTER Feasibility Study

<br>

![SPM_4](./static/SPM_9.png)

## Management Control

![SPM_4](./static/SPM_10.png)

* **Data - Raw Details**: 25K Documents processed at Location X
***Information**: Processed Data, to produce as useful metric; Productivity is 1K Documents a Day!
* **Comparison with Objectives & Goals**: We won't meet our Goal of having all documents processed by January 12th, as We're still 3K Documents away and that date is tomorrow.
* **Modelling**: If we employ 3X the STAFF at the location, we can do it in a day!
* **Implementation**: In the management sense, to carry out the decision, do the above ^^^

---

![SPM_4](./static/SPM_11.png)
