
#define GPIO_PATH "/sys/class/gpio/" 
#define GPIO_STR  "gpio"

#define MAX_GPIO_NAME_LEN 	6
#define MAX_PATH_LEN 		128

#define TRUE  1
#define FALSE 0

enum GPIO_DIRECTION 
{
	INPUT, 
	OUTPUT, 
	NO_DIRECTION
};
a
enum GPIO_VALUE
{
	LOW, 
	HIGH, 
	NO_VALUE
};

typedef int boolean;
typedef int GPIO_DIRECTION_T;
typedef int GPIO_VALUE_T;
typedef struct GPIO GPIO_T;

// GPIO Layout
struct GPIO
{
	int number;
	char name[MAX_GPIO_NAME_LEN + 1];
	char path[MAX_PATH_LEN];
};

/*
 *	Interface Methods 
 */

// To instantiate gpio struct, comapatible to call other methods of gpio
// Param 1 : Which GPIO is to be instantiated. eg : 4
// Returns : An instance of struct GPIO, 
// 			 And in case of failure returns NULL.
GPIO_T *gpio_init(int number);

// To uninstantiate gpio struct
// Param 1 : [in] : GPIO's instance 
// Returns : TRUE on success, else FALSE 
boolean gpio_uninit(GPIO_T *);

// Get the GPIO's number 
// Param 1 : [in] : GPIO's instance
// Returns : The GPIO's number which was instantiated at first 
int gpio_get_number(GPIO_T *);

// Set the gpio's direction. 
// Param 1 : [in] : GPIO's instance 
// Param 2 : [in] : Direction to be set
// Returns : TRUE on success, else FALSE
boolean gpio_set_direction(GPIO_T *, GPIO_DIRECTION_T);
									 
// Get the gpio's direction
// Param 1 : [in] : GPIO's instance
// Returns : GPIO's direction
GPIO_DIRECTION_T gpio_get_direction(GPIO_T *);

// Sets the value to gpio
// Param 1 : [in] : GPIO's Instance 
// Param 2 : [in] : Value to be set
// Returns : TRUE on success and FALSE on failure
int gpio_set_value(GPIO_T *, GPIO_VALUE_T);

// Gets the currently set value
// Param 1 : [in] : GPIO's instance 
// Returns : GPIO's value i.e. LOW / HIGH
GPIO_VALUE_T gpio_get_value(GPIO_T *);

// Toggles the current state of GPIO
// Param 1 : [in] : GPIO's instance
// Returns : TRUE on success, else FALSE
boolean gpio_toggle_value(GPIO_T *);

/*
 *	Helper Functions
 */

// Exports the gpio 
// Param 1 : [in] : GPIO's instance
// Returns : TRUE on success, else FALSE
boolean gpio_export(GPIO_T *gpio);

// Unxports the gpio 
// Param 1 : [in] : GPIO's instance
// Returns : TRUE on success, else FALSE
boolean gpio_unexport(GPIO_T *gpio);

// Writes to the file specified, with the value specified 
// Param 1 : [in] : path calculated in gpio_init()
// Param 2 : [in] : target file name 
// Param 3 : [in] : string value to write 
// Returns : TRUE on success, else FALSE 
boolean gpio_write_str_value(char *base_path, char *file_name, char *value);

// Writes to the file specified, with the value specified 
// Param 1 : [in] : path calculated in gpio_init()
// Param 2 : [in] : target file name 
// Param 3 : [in] : int value to write 
// Returns : TRUE on success, else FALSE 
boolean gpio_write_int_value(char *base_path, char *file_name, int value);

// Reads from file, fills the retBuffer with contents
// Param 1 : [in] : path calculated in gpio_init()
// Param 2 : [in] : target file name 
// Param 3 : [out] : file contents 
// Returns : TRUE on success, else FALSE 
boolean gpio_read(char *base_path, char *file_name, size_t size, char *retBuffer);

// Allocates memory and zeros out the memory
// Param 1 : [in] : Count of elements 
// Param 2 : [in] : Size of each element
// Returns : void* ptr to allocated memory
void *xcalloc(size_t, size_t);
	
// Logger method 
// Param 1 : [in] : string to log 
void gpio_log(char *);