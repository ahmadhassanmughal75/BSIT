package subjectivePart_Q3;

import javax.swing.*;
import java.awt.event.*;

public class TemperatureConverter extends JFrame {
    private final JTextField fahrenheitField;
    private final JTextField celsiusField;

    public TemperatureConverter() {
        setTitle("Temperature Converter");
        setSize(200, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        JPanel panel = new JPanel();

        JLabel fahrenheitLabel = new JLabel("Enter Fahrenheit:");
        fahrenheitField = new JTextField(10);

        JButton convertButton = new JButton("Convert");
        convertButton.addActionListener(new ConvertButtonListener());

        JLabel celsiusLabel = new JLabel("Converted Celsius:");
        celsiusField = new JTextField(10);
        celsiusField.setEditable(false);

        panel.add(fahrenheitLabel);
        panel.add(fahrenheitField);
        panel.add(convertButton);
        panel.add(celsiusLabel);
        panel.add(celsiusField);

        add(panel);
        setVisible(true);
    }

    private class ConvertButtonListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            try {
                double fahrenheit = Double.parseDouble(fahrenheitField.getText());
                double celsius = (5.0 / 9.0) * (fahrenheit - 32);
                celsiusField.setText(String.format("%.2f", celsius));
            } catch (NumberFormatException ex) {
                JOptionPane.showMessageDialog(null, "Please enter a valid number for Fahrenheit.");
            }
        }
    }
}
