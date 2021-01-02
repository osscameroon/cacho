#include <boost/python.hpp>
#include "./headers/cacho.hpp"

BOOST_PYTHON_MODULE(cacho)
{
    using namespace boost::python;
    def("set", set);
    def("get", get);
    def("exists", exists);
}
