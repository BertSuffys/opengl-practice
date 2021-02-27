#include <GLFW/glfw3.h>

//Header files
void drawTriangle();


int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        drawTriangle();


        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}


/*
   Method that draws a triangle
*/
void drawTriangle()
{
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5f, -0.5f);  // bottom left
    glVertex2f(0.0f, 0.5f);    //top
    glVertex2f(0.5f, -0.5f);   //bottom right
    glEnd();
}