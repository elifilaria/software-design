/** Represents a canine */
class MyDog {
protected:
  char *name;  /**< the name of the Dog */
  int age;  /**< the age of the Dog (years) */

public:
  /** 2-argument constructor
      @param n A parameter to copy the name of this Dog using dynamic allocation
      @param a A parameter for the age value of this Dog */
  Dog(const char *n, int a);

  /** obtain name state variable
      @return The name for this Dog */
  char *get_name();
};

