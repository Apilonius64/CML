#if !defined(CML_H_CML_AP64_2024)
#define CML_H_CML_AP64_2024

#include <common/common.h>

#define DEFINE_TAG(_Name) typedef stream _Name

namespace cml
{
    using namespace common;

    template <typename T>
    class Named {
    public:
        Named operator=(T value) const {
            return value;
        }
    };

    class Xml {
    public:
        template <typename... X>
        Xml() {

        }
    };

    namespace xml
    {
        class tag {

        };

        typedef stream;

        template <typename... T>
        class x : public stream {
            
        };

        class stream {
            public:
                stream operator<(const stream& stream);
                template <typename... T>
                stream operator<(const x<T...>& stream);
                stream operator>(const String string);
                stream operator>(const stream& stream);
                template <typename... T>
                stream operator>(const x<T...>& stream);

                template <typename T>
                stream operator>>(const T& what);

                template <typename T>
                stream operator<<(const T& what);
        };

        class streamidentifier : public stream {
            
        };

        DEFINE_TAG(p);
        DEFINE_TAG(form);
        DEFINE_TAG(input);
    } // namespace xml
    
} // namespace cml


#endif // CML_H_CML_AP64_2024
