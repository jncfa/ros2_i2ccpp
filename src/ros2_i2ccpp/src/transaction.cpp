extern "C"
{
#include <linux/i2c.h>
}

#include "ros2_i2ccpp/transaction.hpp"
#include <execution>
#include <algorithm>


namespace ros2_i2ccpp
{


I2CTransaction I2CTransactionBuilderImpl::getTransaction()
{
  // return i2c message buf
  return I2CTransaction(mem_resource, std::move(transaction_segments));
}

}
