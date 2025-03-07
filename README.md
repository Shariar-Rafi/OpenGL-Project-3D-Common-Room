# OpenGL-Project-3D-Common-Room

## **Overview**

This project is a 3D rendering of a common room designed using OpenGL. It showcases advanced computer graphics techniques such as lighting, texturing, camera movement, and object modeling. The room features multiple table-chair sets arranged , surrounded by walls and flooring that create a realistic, immersive environment.

This project is a practical demonstration of 3D graphics programming, highlighting:
- Interactive navigation through the room using a camera.
- Realistic lighting effects (ambient, diffuse, and specular).
- Properly scaled and positioned 3D objects like tables, chairs, and walls etc.


## **Created By**
- <a href="https://github.com/Shariar-Rafi">Md Monem Shariar Rafi<a/>
- <a href="https://github.com/Sheikh-Nafis">Sheikh Nafis Ul Alam<a/>
- <a href="https://github.com/RKNayeem">Md Raduan Kabir<a/>


## **Screenshots**
<img src="https://github.com/Shariar-Rafi/OpenGL-Project-3D-Common-Room/blob/main/Screenshots/Screenshot_1.png" alt="Screenshots/Screenshot_1.png" >
<img src="https://github.com/Shariar-Rafi/OpenGL-Project-3D-Common-Room/blob/main/Screenshots/Screenshot_2.png" alt="Screenshots/Screenshot_2.png" >
<img src="https://github.com/Shariar-Rafi/OpenGL-Project-3D-Common-Room/blob/main/Screenshots/Screenshot_3.png" alt="Screenshots/Screenshot_3.png" >




## **Features**
- **3D Room Structure**:
  - Enclosed walls, flooring, and a clean layout.
- **Dynamic Camera**:
  - Navigate the room with keyboard and mouse controls.
- **Lighting**:
  - Point and directional lights with configurable toggles for ambient, diffuse, and specular effects.
- **Realistic Object Rendering**:
  - Multiple table-chair sets arranged in a structured grid.
  - Detailed modeling with proper scaling, translation, and rotations.
- **User Interaction**:
  - Camera movement and toggling of lighting effects via keyboard inputs.


## **Technologies Used**
- **Programming Language**: C++  
- **Graphics Libraries**:
  - OpenGL (Core Profile)
  - GLAD (OpenGL Loader)
  - GLFW (Window and Input Handling)
  - GLM (OpenGL Mathematics Library)
- **Shaders**:
  - Vertex and Fragment shaders for Phong lighting.
- **Tools**:
  - Visual Studio for development.
  - Git for version control.


## **Installation and Usage**

### Prerequisites
Ensure the following are installed on your system:
- OpenGL-compatible GPU and drivers.
- C++ compiler supporting C++11 or later.
- [GLFW](https://www.glfw.org/), [GLAD](https://glad.dav1d.de/), and [GLM](https://github.com/g-truc/glm).

### Build Instructions
1. Clone this repository:
   ```bash
   git clone https://github.com/Shariar-Rafi/OpenGL-Project-Common-Room
2. Open **Main Project** folder
3. Double click on **Lab9_Lighting.sln** file & open with Visual Studio
4. Right click on **Lab9_Lighting** & go to _Properties_
5. Go to _VC++ Directories_
6. Now click on _Include Directories_ click on _<Edit...>_ and add the include which is also located in this repositorie's **opengl** > **All Config Files** folder.
7. Also click on _Library Directories_ click on _<Edit...>_ and add the lib which is also located in this repositorie's **opengl** > **All Config Files** folder.
9. Now close the _Lab9_Lighting Properties Pages_ window & right click on **Source Files** folder and click on _Add_ then _Existing Item..._
10. Then add the **glad.c** file which is also located in this repositorie's **All Config Files** folder.
11. Now _build_ and run the solution on your _Visual Studio_ & enjoy!
