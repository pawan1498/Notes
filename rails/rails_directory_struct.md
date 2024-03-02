# Concern 
- Concerns are modules containing reusable code that can be shared across different parts of the Rails application, such as models, controllers, or even other concerns. Concerns are typically used to encapsulate shared behavior or functionality that doesn't belong in a single model or controller but is still relevant to multiple components.
- concern can be used in model, controller, services, view-helper, jobs, API-controller and helper 

# lib/
- The lib/ directory is a standard directory in Rails applications where you can place arbitrary Ruby code that doesn't fit into the conventional Rails structure.

- The lib/ directory is meant for housing generic, standalone Ruby modules, classes, or libraries that are not directly tied to the Rails framework or any specific component of the application.

# Helper 
- Helpers are modules containing methods that can be used to encapsulate logic related to views in Rails applications. They are primarily used to assist with generating HTML, formatting data, or performing other view-related tasks. Helpers are often used to extract repetitive view logic and keep views cleaner and more readable.
- Helper are automatically included in views 
- like for user model we created CRUD in Usercontroller for the view pages user helper is autoamtically included.













--------------------------------------------------------------------------------------------------
