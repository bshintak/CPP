---EX00---

This exercise involves creating a class called Bureaucrat, which represents a bureaucrat in a fictional bureaucratic machine.
Here's a step-by-step explanation of what is required:

1. Bureaucrat Class Definition: The Bureaucrat class should be defined with the following requirements:
- A constant name.
- A grade that ranges from 1 (highest possible grade) to 150 (lowest possible grade).

2. Exception Handling: Any attempt to instantiate a Bureaucrat using an invalid grade must throw an exception,
either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.

3. Getters and Setters: Provide getter methods for both attributes: getName() and getGrade().
Also implement two member methods to increment or decrement the bureaucrat's grade. If the grade is out of range,
both of them should throw the same exceptions as the constructor.

4. Insertion (<<) Operator Overloading: Implement an overload of the insertion (<<) operator to print something like <name>,
bureaucrat grade <grade>.

5. Tests: Provide tests to ensure everything works as expected. This typically involves creating instances of Bureaucrat,
manipulating them, and verifying that the results are consistent with expectations.

For example, a test might involve creating a Bureaucrat with a valid grade and an invalid grade and checking if exceptions
are thrown correctly. Another test might involve incrementing and decrementing the grade and verifying that the methods work as expected.
Additionally, tests should include the insertion (<<) operator overload to ensure that the output is formatted correctly.

---EX01---

This exercise entails creating a Form class to accompany the Bureaucrat class from the previous exercise.
Here's a breakdown of the requirements:

1. Form Class Definition:
- The Form class must have the following private attributes:
- A constant name.
- A boolean indicating whether it is signed (initialized to false upon construction).
- A constant grade required to sign it.
- A constant grade required to execute it.

2. Exception Handling:
The grades of the Form must follow the same rules as those for the Bureaucrat. Thus, if a form grade is out of bounds,
exceptions of type Form::GradeTooHighException and Form::GradeTooLowException must be thrown.

3. Getters and Insertion Operator Overload:
Implement getters for all attributes and overload the insertion (<<) operator to print all the form's information.

4. Member Function to Sign the Form:
Add a beSigned() member function to the Form class that takes a Bureaucrat as a parameter. This function changes the
form's status to signed if the bureaucrat’s grade is high enough (equal to or higher than the required grade). If the
grade is too low, a Form::GradeTooLowException should be thrown.

5. Member Function to Sign the Form by the Bureaucrat:
Add a signForm() member function to the Bureaucrat class. If the form is successfully signed, it should print something
like "<bureaucrat> signed <form>". Otherwise, it should print something like "<bureaucrat> couldn’t sign <form> because <reason>".

6. Tests:
Implement and provide tests to ensure everything works as expected. This involves scenarios such as attempting to sign
forms with different bureaucrat grades and verifying if exceptions are thrown correctly, as well as checking if forms are
signed properly and if the output from signing forms is correct.

---EX02---

In this exercise, you need to create a few more forms that actually perform specific actions. All forms will be based
on an abstract class called AForm, which should be the base class for all forms. Here's a detailed explanation of the requirements:

1. Definition of the Base Class AForm:
- The base class AForm must be an abstract class.
- The attributes of the form must remain private and should be in the base class.

2. Concrete Form Classes:
- You need to add the following concrete form classes:
- ShrubberyCreationForm: Required grades: sign 145, exec 137. This form creates a file called <target>_shrubbery in the 
working directory and writes ASCII trees inside it.
- RobotomyRequestForm: Required grades: sign 72, exec 45. This form makes some drilling noises and reports that the
<target> has been robotized successfully 50% of the time. Otherwise, it reports that the robotomy failed.
- PresidentialPardonForm: Required grades: sign 25, exec 5. This form reports that the <target> has been pardoned by Zaphod Beeblebrox.
- All forms should take only one parameter in their constructor: the target of the form, for example, "home" if you want
to plant shrubbery at home.

3. execute() Method:
- Add the execute(Bureaucrat const & executor) const method to the base class AForm and implement a function to execute
the form's action in the concrete classes.
- You should check if the form is signed and if the grade of the bureaucrat attempting to execute the form is high enough.
Otherwise, throw an appropriate exception.
- You can choose to check the requirements in each concrete class or in the base class and then call another function to execute the form.

4. executeForm() Method:
Add the executeForm(AForm const & form) method to the Bureaucrat class. This method must attempt to execute the form. If successful,
it should print something like "<bureaucrat> executed <form>". Otherwise, it should print an explicit error message.

5. Tests:
Implement and provide tests to ensure everything works as expected.