import React, { Component } from "react";

class Greeting extends Component {
  // Method that returns a hello message
  sayHello() {
    return "Hello, welcome to React!";
  }

  // Method that returns a goodbye message
  sayGoodbye() {
    return "Goodbye, see you soon!";
  }

  // Render method to display both messages
  render() {
    return (
      <div>
        <h2>{this.sayHello()}</h2>
        <p>{this.sayGoodbye()}</p>
      </div>
    );
  }
}

export default Greeting;
