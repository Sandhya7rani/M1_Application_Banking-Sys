# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Able to enter details  | Accountnumber:12345678 Password:22222222|0|0|Requirement based |
|  H_02       |Check the login functionality|  Accountnumber:20202020 Password:55555555|0|0|Scenario based    |
|  H_03       |Invalid range of input|  Accountnumber:3030303003 Password:383888388|-9|-9|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Skip of inputs|  Accountnumber:67645678|-------------|----------------|Requirement based |
|  L_02       |--------------------------------------------------------------|  ------------|-------------|----------------|Scenario based    |
|  L_03       |--------------------------------------------------------------|  ------------|-------------|----------------|Boundary based    |
