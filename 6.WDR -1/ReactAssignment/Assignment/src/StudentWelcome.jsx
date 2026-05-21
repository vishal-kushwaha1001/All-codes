import React, { Component } from "react";

class StudentWelcome extends Component {
  render() {
    const message = "Welcome to the Student Portal!";
    const subMessage = "We’re glad to have you here. Keep learning and growing!";

    return (
      <div>
        <h1>{message}</h1>
        <p>{subMessage}</p>
      </div>
    );
  }
}

export default StudentWelcome;
