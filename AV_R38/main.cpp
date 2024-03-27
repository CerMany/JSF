// Operator.h
#include <LM_string.h> // Incorrect: creates unnecessary dependency
#include <Date.h> // Incorrect: creates unnecessary dependency
#include <Record.h> // Incorrect: creates unnecessary dependency
class Operator
{
 public:
 Operator (const LM_string &name,
 const Date &birthday,
 const Record &flying_record);
 LM_string get_name () const;
 int32_t get_age () const;
 Record get_record () const;
 …
 private:
 Operator_impl *impl;
};

// Operator.h The forward headers only contain declarations.
#include <LM_string_fwd.h>
#include <Date_fwd.h>
#include <Record_fwd.h>
#include <OperatorImpl.h>
class Operator
{
 public:
 Operator (const LM_string &name,
 const Date & birthday,
 const Record &flying_record);
 LM_string get_name() const;
 int32 get_age () const;
 record get_record () const;
 …
 private:
 Operator_impl *impl;
};
// Operator.cc
#include <Operator.h>
#include <Operator_impl.h> // Contains implementation details of the Operator object.
…
int32 Operator::get_age()
{
 impl->get_age();
}
