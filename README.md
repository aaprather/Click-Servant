#  - Click-Servant -

**Click-Servant** is a [C++/CLI](https://docs.microsoft.com/en-us/cpp/dotnet) application that is used to automate mouse clicks & key presses.
This application supports profile saving/loading so that preferred settings may be shared or used again with ease.
Most up to date build - [Click-Servant.exe](https://github.com/aaprather/Click-Servant/raw/Development/Click-Servant.exe)
<p align="center">
<img src="https://raw.githubusercontent.com/aaprather/Click-Servant/Development/Screenshots/s1.png">
</p>

## Interval Clicker
The **Interval Clicker** has two main features, the *Main Interval* and an optional *Sub-Interval*.

<p align="center">
<img src="https://raw.githubusercontent.com/aaprather/Click-Servant/Development/Screenshots/s4.png">
</p>

### Main Interval
 - The *Main Interval* takes a time range in milliseconds.
 - A random interval time will be chosen from the given range and a timer will be set.
 - After the timer hits zero, a click will be simulated where the mouse cursor is positioned.
 - The *'R-CTRL Hot-Key'* check box will allow the user the stop/start the **Interval Clicker** by pressing the Right Ctrl key.
 
 ### Sub-Interval
 - Toggling *'Enable Multiple Clicks'* means that upon every *Main Interval* more than one click will be simulated.
 - The range of clicks is user supplied, randomly picked and for each of these clicks, you may specify another random interval in milliseconds before each random click event will fire.

## Interval Keyer
The **Interval Keyer** currently supports only a *Main Interval*.

<p align="center">
<img src="https://raw.githubusercontent.com/aaprather/Click-Servant/Development/Screenshots/s5.png">
</p>

### Main Interval
 - The *Main Interval* takes a time range in milliseconds.
 - A random interval time will be chosen from the given range and a timer will be set.
 - After the timer hits zero, a key press with the selected key will be simulated.
 - The *'R-SHIFT Hot-Key'* check box will allow the user the stop/start the **Interval Keyer** by pressing the Right Shift key.

## Profile Loading/Saving
### Loading
<p align="center">
<img src="https://raw.githubusercontent.com/aaprather/Click-Servant/Development/Screenshots/s2.png">
</p>

 - From the main form, select the *Profile* drop-down button
 - Click the *Load Profile* option, and select a Clicker-Servant Profile file *(.CSP)*.
 <p align="center">
<img src="https://raw.githubusercontent.com/aaprather/Click-Servant/Development/Screenshots/s3.png">
</p>

 - The selected profile's settings will be loaded into the program.

### Saving

 <p align="center">
<img src="https://raw.githubusercontent.com/aaprather/Click-Servant/Development/Screenshots/s7.png">
</p>

 - From the main form, select the *Profile* drop-down button
 - Click the *Save Profile As...* option, name your profile and save.

## Example Profiles
Below are a list of example profiles that a user could play around with. Simply load these into the application and adjust the settings if needed.

 - [Example1.csp](https://github.com/aaprather/Click-Servant/blob/Development/Profiles/Example1.csp)
  - [Example2.csp](https://github.com/aaprather/Click-Servant/blob/Development/Profiles/Example2.csp)
  - [Example3.csp](https://github.com/aaprather/Click-Servant/blob/Development/Profiles/Example3.csp)
  - [Example4.csp](https://github.com/aaprather/Click-Servant/blob/Development/Profiles/Example4.csp)
 -  [Example5.csp](https://github.com/aaprather/Click-Servant/blob/Development/Profiles/Example5.csp)
  - [Example6.csp](https://github.com/aaprather/Click-Servant/blob/Development/Profiles/Example6.csp)

## Contributing

Feel free to create an [Issue](https://github.com/aaprather/Click-Servant/issues) if you have any ideas for improvement or notice any bugs that need to addressed.

If creating a branch and working on the application, keep these guidelines in mind:

 - BackGroundImage for a Form must use [bg6.png](https://github.com/aaprather/Click-Servant/blob/Development/Click-Servant/Rex/bg6.png). BackGroundImageLayout must be set to *Stretch*.
 
 - Buttons must use the background image: [bg5.png](https://github.com/aaprather/Click-Servant/blob/Development/Click-Servant/Rex/bg5.png). For ForeColor you must use *ControlText*. BackGroundImageLayout must be set to *Stretch*.
 - Most labels will use *DeepSkyBlue*, **bold**. The exception to this is any label displaying a value that reflects data from the user, in that case the label will use *LightBlue*, NOT **bold**.

 - Check boxes ForeColor must use Light Gray.
 - To display an error to the user, call the *Error.h* static method **throwErrorMessage(String^,int,int)**
    For example: 
     > Error::throwErrorMessage("Test error", this->Location.X, this->Location.Y);
