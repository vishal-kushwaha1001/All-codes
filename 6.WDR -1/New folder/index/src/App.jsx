// import { useState } from 'react'
// import reactLogo from './assets/react.svg'
// import viteLogo from '/vite.svg'
// import './App.css'

// function App() {
//   const [count, setCount] = useState(0)

//   return (
//     <>
//       <div>
//         <a href="https://vite.dev" target="_blank">
//           <img src={viteLogo} className="logo" alt="Vite logo" />
//         </a>
//         <a href="https://react.dev" target="_blank">
//           <img src={reactLogo} className="logo react" alt="React logo" />
//         </a>
//       </div>
//       <h1>Vite + React</h1>
//       <div className="card">
//         <button onClick={() => setCount((count) => count + 1)}>
//           count is {count}
//         </button>
//         <p>
//           Edit <code>src/App.jsx</code> and save to test HMR
//         </p>
//       </div>
//       <p className="read-the-docs">
//         Click on the Vite and React logos to learn more
//       </p>
//     </>
//   )
// }

// export default App

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
