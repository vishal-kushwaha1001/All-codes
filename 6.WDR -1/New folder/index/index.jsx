import React from "react";

const EmployeeTable = () => {
  const employees = [
    { id: 1, name: "Vishal Kushwaha", department: "Engineering" },
    { id: 2, name: "Ayush Sharma", department: "Marketing" },
    { id: 3, name: "Anant sagar", department: "Human Resources" },
    { id: 4, name: "Bulbul", department: "Finance" },
  ];

  return (
    <div className="Employee Data">
      <h2 >Employee Details</h2>
      <table >
        <thead >
          <tr>
            <th>ID</th>
            <th >Name</th>
            <th >Department</th>
          </tr>
        </thead>
        <tbody>
          {employees.map((emp) => (
            <tr key={emp.id} >
              <td >{emp.id}</td>
              <td >{emp.name}</td>
              <td >{emp.department}</td>
            </tr>
          ))}
        </tbody>
      </table>
    </div>
  );
};

export default EmployeeTable;
