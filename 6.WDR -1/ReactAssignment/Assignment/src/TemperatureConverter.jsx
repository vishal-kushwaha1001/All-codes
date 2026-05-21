import React, { Component } from "react";

class TemperatureConverter extends Component {
  // Method to convert Celsius to Fahrenheit
  convertToFahrenheit(celsius) {
    return (celsius * 9) / 5 + 32;
  }

  // Method to convert Fahrenheit to Celsius
  convertToCelsius(fahrenheit) {
    return ((fahrenheit - 32) * 5) / 9;
  }

  // Render method to display conversion results
  render() {
    const celsiusValue = 0;
    const fahrenheitValue = 32;

    const fahrenheitResult = this.convertToFahrenheit(celsiusValue);
    const celsiusResult = this.convertToCelsius(fahrenheitValue);

    return (
      <div>
        <h2>Temperature Converter</h2>
        <p>
          {celsiusValue}°C = {fahrenheitResult}°F
        </p>
        <p>
          {fahrenheitValue}°F = {celsiusResult.toFixed(2)}°C
        </p>
      </div>
    );
  }
}

export default TemperatureConverter;
