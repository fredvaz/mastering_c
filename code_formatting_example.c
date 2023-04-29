/**
 * @brief Code Standards and Formatting
 *
 * @author fredvaz
 * @date 2023-04=29
 * @version 0.2
 */

// ------------------------------------------------------------------------------------------------
// Private Header Includes
// ------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// ------------------------------------------------------------------------------------------------
// Private Macros Declaration
// ------------------------------------------------------------------------------------------------

#define MAGIC_NUMBER                    (0xFFFFU)
#define SIZE                                 (2U)

// ------------------------------------------------------------------------------------------------
// Private Types Declaration
// ------------------------------------------------------------------------------------------------

/**
 * @struct example_t
 * @brief example data type
 */
typedef struct
{
    uint32_t magic;
    bool state[ SIZE ];
} example_t;

// ------------------------------------------------------------------------------------------------
// Private Functions Declaration
// ------------------------------------------------------------------------------------------------

bool example( example_t * ptr, const bool state );

// ------------------------------------------------------------------------------------------------
// Private Global Variables Declaration
// ------------------------------------------------------------------------------------------------

example_t example_init[ ] =
{
    { 0, { 0, 1 } },
    {1,{1,0}}
};

/// Local diagnostic's counters
example_t    g_local[ SIZE ];

/// Public/shared diagnostic states
example_t * g_shared = NULL;

// ------------------------------------------------------------------------------------------------
// Public Functions Implementation
// ------------------------------------------------------------------------------------------------

bool example( example_t * ptr, const bool state )
{

    if ( true == state )
    {
        uint32_t i;

        for ( i = 0; SIZE > i; i++ )
        {
            g_shared->state[ i ] = state;
        }

        ptr->magic = (uint32_t) MAGIC_NUMBER;
    }
    else {
        // Nothing to do
    }

    return state;
}


int main()
{
    bool state = true;

    example( &g_shared, state );

    return 0;
}