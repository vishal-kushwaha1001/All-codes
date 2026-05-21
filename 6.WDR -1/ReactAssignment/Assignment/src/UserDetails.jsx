import React, { Component } from "react";

class UserDetails extends Component {
  // Custom method that returns a message
  getWelcomeMessage() {
    return "Welcome to the session!";
  }

  // Render method that displays both messages
  render() {
    return (
      <div>
        <h2>Hello, User!</h2>
        <p>{this.getWelcomeMessage()}</p>
      </div>
    );
  }
}

export default UserDetails;
