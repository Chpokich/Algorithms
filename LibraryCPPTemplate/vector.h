<<<<<<< HEAD
#ifndef VECTOR_TEMPLATE_H
#define VECTOR_TEMPLATE_H

#include <cstddef>

template <typename Data> class Vector
{
public:
    // Creates vector
    Vector()
    {
    }

    // copy constructor
    template <typename T>
    Vector(const Vector<T> &a)
    {
    }

    // assignment operator
    template <typename T>
    Vector &operator=(const Vector<T> &a)
    {
        return *this;
    }

    // Deletes vector structure and internal data
    ~Vector()
    {
    }

    // Retrieves vector element with the specified index
    Data get(size_t index) const
    {
        return Data();
    }

    // Sets vector element with the specified index
    void set(size_t index, Data value)
    {
    }

    // Retrieves current vector size
    size_t size() const
    {
        return 0;
    }

    // Changes the vector size (may increase or decrease)
    // Should be O(1) on average
    void resize(size_t size)
    {
    }

private:
    // private data should be here
};

#endif
=======
#ifndef VECTOR_TEMPLATE_H
#define VECTOR_TEMPLATE_H

#include <cstddef>

template <typename Data> class Vector
{
public:
    // Creates vector
    Vector()
    {
    }

    // copy constructor
    Vector(const Vector &a)
    {
    }

    // assignment operator
    Vector &operator=(const Vector &a)
    {
        return *this;
    }

    // Deletes vector structure and internal data
    ~Vector()
    {
    }

    // Retrieves vector element with the specified index
    Data get(size_t index) const
    {
        return Data();
    }

    // Sets vector element with the specified index
    void set(size_t index, Data value)
    {
    }

    // Retrieves current vector size
    size_t size() const
    {
        return 0;
    }

    // Changes the vector size (may increase or decrease)
    // Should be O(1) on average
    void resize(size_t size)
    {
    }

private:
    // private data should be here
};

#endif
>>>>>>> b58458d4ca9eff800382dfb1b01e13b902ec3548
