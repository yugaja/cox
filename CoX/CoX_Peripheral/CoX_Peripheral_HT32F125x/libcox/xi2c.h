//*****************************************************************************
//
//! \file xi2c.h
//! \brief Prototypes for the I2C Driver.
//! \version V2.1.1.0
//! \date 03/06/2012
//! \author CooCox
//! \copy
//!
//! Copyright (c)  2011, CooCox 
//! All rights reserved.
//! 
//! Redistribution and use in source and binary forms, with or without 
//! modification, are permitted provided that the following conditions 
//! are met: 
//! 
//!     * Redistributions of source code must retain the above copyright 
//! notice, this list of conditions and the following disclaimer. 
//!     * Redistributions in binary form must reproduce the above copyright
//! notice, this list of conditions and the following disclaimer in the
//! documentation and/or other materials provided with the distribution. 
//!     * Neither the name of the <ORGANIZATION> nor the names of its 
//! contributors may be used to endorse or promote products derived 
//! from this software without specific prior written permission. 
//! 
//! THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//! AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
//! IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//! ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE 
//! LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
//! CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
//! SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//! INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
//! CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
//! ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
//! THE POSPIBILITY OF SUCH DAMAGE.
//
//*****************************************************************************

#ifndef __xI2C_H__
#define __xI2C_H__

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
//extern "C"
//{
#endif

//*****************************************************************************
//
//! \addtogroup CoX_Peripheral_Lib
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup I2C
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xI2C
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xI2C_INT_Master xI2C Master Interrupt
//! 
//! \verbatim
//! +------------------------+----------------+------------------------+
//! |xI2C Master Interrupts  |       CoX      |        HT32F125x       |
//! |------------------------|----------------|------------------------|
//! |xI2C_MASTER_INT_DATA    |    Mandatory   |            Y           |
//! +------------------------+----------------+------------------------+
//! \endverbatim
//! @{
//
//*****************************************************************************

//
// Transmit / Receive a data, or an error occurs
//
#define xI2C_MASTER_INT_DATA    I2C_INT_EVT

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xI2C_Event_Master xI2C Master Event
//! 
//! \verbatim
//! +------------------------+----------------+------------------------+
//! |xI2C Master Event       |       CoX      |        HT32F125x       |
//! |------------------------|----------------|------------------------|
//! |xI2C_MASTER_EVENT_TX    |    Mandatory   |            Y           |
//! |xI2C_MASTER_EVENT_RX    |    Mandatory   |            Y           |
//! +------------------------+----------------+------------------------+
//! \endverbatim
//! @{
//
//*****************************************************************************

//
// Transmit address/data, or some error occurs
//
#define xI2C_MASTER_EVENT_TX    0

//
// Receive a data, or some error occurs
//
#define xI2C_MASTER_EVENT_RX    0

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xI2C_INT_Slave xI2C Slave Interrupt
//! 
//!
//! \verbatim
//! +------------------------+----------------+------------------------+
//! |xI2C Slave Interrupts   |       CoX      |        HT32F125x       |
//! |------------------------|----------------|------------------------|
//! |xI2C_SLAVE_INT_START    |    Optional    |            N           |
//! |xI2C_SLAVE_INT_STOP     |    Optional    |            N           |
//! |xI2C_SLAVE_INT_DATA     |    Mandatory   |            Y           |
//! +------------------------+----------------+------------------------+
//! \endverbatim
//! @{
//
//*****************************************************************************

//
//! Start Condition
//
#define xI2C_SLAVE_INT_START   0

//
//! Stop Condition
//
#define xI2C_SLAVE_INT_STOP    0

//
//! A data received or data requested or error occurs
//
#define xI2C_SLAVE_INT_DATA    I2C_INT_EVT


//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xI2C_Event_Slave xI2C Slave Event
//!
//! \verbatim
//! +------------------------+----------------+------------------------+
//! |xI2C Slave Event        |       CoX      |        HT32F125x       |
//! |------------------------|----------------|------------------------|
//! |xI2C_SLAVE_EVENT_START  |    Optional    |            N           |
//! |xI2C_SLAVE_EVENT_STOP   |    Optional    |            N           |
//! |xI2C_SLAVE_EVENT_TREQ   |    Mandatory   |            Y           |
//! |xI2C_SLAVE_EVENT_RREQ   |    Mandatory   |            Y           |
//! +------------------------+----------------+------------------------+
//! \endverbatim
//! @{
//
//*****************************************************************************

//
//! Start Condition
//
#define xI2C_SLAVE_EVENT_START  0

//
//! Stop Condition
//
#define xI2C_SLAVE_EVENT_STOP   0

//
//! Transmit Request( or address matched in slave transmit mode)
//
#define xI2C_SLAVE_EVENT_TREQ   0

//
//! Receive Request
//
#define xI2C_SLAVE_EVENT_RREQ   1

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xI2C_Master_Error xI2C Master Error
//!
//! \verbatim
//! +------------------------+----------------+------------------------+
//! |xI2C Master Error       |       CoX      |        HT32F125x       |
//! |------------------------|----------------|------------------------|
//! |xI2C_MASTER_ERR_NONE    |    Mandatory   |            Y           |
//! |xI2C_MASTER_ERR_ADDR_ACK|    Mandatory   |            Y           |
//! |xI2C_MASTER_ERR_DATA_ACK|    Mandatory   |            Y           |
//! |xI2C_MASTER_ERR_ARB_LOST|    Mandatory   |            Y           |
//! +------------------------+----------------+------------------------+
//! \endverbatim
//! @{
//
//*****************************************************************************

//
//! Every thing is OK
//
#define xI2C_MASTER_ERR_NONE    I2C_MASTER_ERR_NONE

//
//! The transmitted address was not acknowledged
//
#define xI2C_MASTER_ERR_ADDR_ACK                                              \
                                I2C_MASTER_ERR_ADDR_ACK

//
//! The transmitted data was not acknowledged.
//
#define xI2C_MASTER_ERR_DATA_ACK                                              \
                                I2C_MASTER_ERR_DATA_ACK

//
//! The I2C controller lost arbitration
//
#define xI2C_MASTER_ERR_ARB_LOST                                              \
                                I2C_MASTER_ERR_ARB_LOST

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xI2C_Exported_APIs xI2C API
//!
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \brief Initialize the I2C controller.
//!
//! \param ulBase is the I2C module base address.
//! \param ulI2CClk is the I2C clock bit rate.
//!
//! This function initializes operation of the I2C Master block.  Upon
//! successful initialization of the I2C block, this function will have set the
//! bus speed for the master, and will have enabled the I2C Master block.
//!
//! The parameter \e ulBase can be:
//! - \ref xI2C0_BASE
//! - \ref xI2C1_BASE
//!
//! The parameter \e ulI2CClk can only be:
//! - \b 100000 - I2C works under standard-mode (Sm), with a bit rate up to 
//!               100 kbit/s
//! - \b 400000 - I2C works under fast-mode (Fm), with a bit rate up to 
//!               400 kbit/s
//!
//! \return None.
//
//*****************************************************************************
#define xI2CMasterInit(ulBase, ulI2CClk)                                      \
        do                                                                    \
        {                                                                     \
            xASSERT(ulI2CClk == 100000 || ulI2CClk == 400000);                \
            I2CMasterInitExpClk(ulBase, SysCtlClockGet(),                     \
                (ulI2CClk == 400000) ? xtrue : xfalse);                       \
        }while(0)


//*****************************************************************************
//
//! \brief Enables the I2C Master block.
//!
//! \param ulBase is the base address of the I2C module.
//!
//! This will enable operation of the I2C Master block.
//!
//! \return None.
//
//*****************************************************************************
#define xI2CMasterEnable(ulBase)                                              \
        I2CMasterEnable(ulBase)

//*****************************************************************************
//
//! \brief Disables the I2C master block.
//!
//! \param ulBase is the base address of the I2C module.
//!
//! This will disable operation of the I2C master block.
//!
//! \return None.
//
//*****************************************************************************            
#define xI2CMasterDisable(ulBase)                                             \
        I2CMasterDisable(ulBase)

//*****************************************************************************
//
//! \brief Indicates whether or not the I2C bus is busy.
//!
//! \param ulBase is the base address of the I2C module.
//!
//! This function returns an indication of whether or not the I2C bus is busy.
//! This function can be used in a multi-master environment to determine if
//! another master is currently using the bus.
//!
//! \return Returns \b xtrue if the I2C bus is busy; otherwise, returns
//! \b xfalse.
//
//*****************************************************************************
#define xI2CMasterBusBusy(ulBase)                                             \
        I2CMasterBusBusy(ulBase)

//*****************************************************************************
//
//! \brief Indicates whether or not the I2C Master is busy.
//!
//! \param ulBase is the base address of the I2C Master module.
//!
//! This function returns an indication of whether or not the I2C Master is
//! busy transmitting or receiving data.
//!
//! \return Returns \b xtrue if the I2C Master is busy; otherwise, returns
//! \b xfalse.
//
//*****************************************************************************
#define xI2CMasterBusy(ulBase)                                                \
        I2CMasterBusy(ulBase)

//*****************************************************************************
//
//! Gets the error status of the I2C Master module.
//!
//! \param ulBase is the base address of the I2C Master module.
//!
//! This function is used to obtain the error status of the Master module send
//! and receive operations.
//!
//! \return Returns the error status, as one of \b I2C_MASTER_ERR_NONE,
//! \b I2C_MASTER_ERR_ADDR_ACK, \b I2C_MASTER_ERR_DATA_ACK, or
//! \b I2C_MASTER_ERR_ARB_LOST.
//
//*****************************************************************************
#define xI2CMasterError(ulBase)                                               \
        I2CMasterErr(ulBase)

//*****************************************************************************
//
//! Transmits a byte from the I2C Master.
//!
//! \param ulBase is the base address of the I2C module.
//! \param ucData data to be transmitted from the I2C Master
//!
//! This function will place the supplied data into I2C Master Data Register.
//!
//! \return None.
//
//*****************************************************************************
#define xI2CMasterDataPut(ulBase, ucData)                                     \
        I2CMasterDataPut(ulBase, ucData)

//*****************************************************************************
//
//! Receives a byte that has been sent to the I2C Master.
//!
//! \param ulBase is the base address of the I2C module.
//!
//! This function reads a byte of data from the I2C Master Data Register.
//!
//! \return Returns the byte(unsigned char) received from by the I2C Master.
//
//*****************************************************************************
#define xI2CMasterDataGet(ulBase)                                             \
        I2CMasterDataGet(ulBase)

//*****************************************************************************
//
//! \brief Transmite the STOP condition, master goes to idle state.
//!
//! \param ulBase is the base address of the I2C Master module.
//!
//! This function free the I2C bus. When the master no longer need send or 
//! receive any more data, or need to terminate this transmition after getting
//! some errors, call this function.
//!
//! \return None.
//
//*****************************************************************************
#define xI2CMasterStop(ulBase)                                                \
        I2CMasterStop(ulBase)

//*****************************************************************************
//
//! \brief Send a master transmit request when the bus is idle.(Write Step1)
//!
//! \param ulBase is the base address of the I2C Master module.
//! \param ucSlaveAddr is the 7-bit slave address.
//! \param ucData is the byte to transmit.
//! \param bEndTransmition is flag to control if transmit the STOP condition and
//! terminate this transmition. 
//!
//! This function init a new write transmition. When the master have not obtained
//! control of the bus, This function send request to transmit the START 
//! condition, the slave address and the data, Then it returns immediately, no 
//! waiting any bus transmition to complete. 
//!
//! Users can call xI2CMasterBusy() to check if all the bus  transmition
//! complete, the call xI2CMasterError() to check if any error occurs. 
//!
//! After the master obtained control of the bus, and haven't release it, users 
//! can call xI2CMasterWriteRequestS2() to continue transmit data to slave.
//! Users can also call xI2CMasterStop() to terminate this transmition and 
//! release the I2C bus.
//!
//! For this function returns immediately, it is always using in the interrupt
//! hander.
//!
//! \return None.
//
//*****************************************************************************
#define xI2CMasterWriteRequestS1(ulBase, ucSlaveAddr, ucData, bEndTransmition) \
        I2CMasterWriteRequestS1(ulBase, ucSlaveAddr, ucData, bEndTransmition)

//*****************************************************************************
//
//! \brief Send a master data transmit request when the master have obtained 
//! control of the bus.(Write Step2)
//!
//! \param ulBase is the base address of the I2C Master module.
//! \param ucData is the byte to transmit.
//! \param bEndTransmition is flag to control if transmit the STOP condition and
//! terminate this transmition. 
//!
//! After the master obtained control of the bus(have called  
//! xI2CMasterWriteRequestS1() without any error), and haven't release it, users 
//! can call this function to continue transmit data to slave.
//!
//! This function just send request to transmit the data, and it returns 
//! immediately, no waiting any bus transmition to complete. 
//!
//! Users can call xI2CMasterBusy() to check if all the bus transmition 
//! complete, the call xI2CMasterError() to check if any error occurs. Users call
//! also can xI2CMasterStop() to terminate this transmition and release the 
//! I2C bus.
//!
//! For this function returns immediately, it is always using in the interrupt
//! hander.
//!
//! \return None.
//
//*****************************************************************************
#define xI2CMasterWriteRequestS2(ulBase, ucData, bEndTransmition)             \
        I2CMasterWriteRequestS2(ulBase, ucData, bEndTransmition)

//*****************************************************************************
//
//! \brief Write a data to the slave when the bus is idle, and waiting for all 
//! bus transmiton complete.(Write Step1)
//!
//! \param ulBase is the base address of the I2C Master module.
//! \param ucSlaveAddr is the 7-bit slave address.
//! \param ucData is the byte to transmit.
//! \param bEndTransmition is flag to control if transmit the STOP condition and
//! terminate this transmition. 
//!
//! This function init a new write transmition. When the master have not obtained
//! control of the bus, This function transmit the START condition, the slave 
//! address and the data, then waiting for all bus transmition complete.
//!
//! Users can then check the return value to see if any error occurs:
//! - \ref xI2C_MASTER_ERR_NONE     - \b 0, no error
//! - \ref xI2C_MASTER_ERR_ADDR_ACK - The transmitted address was not acknowledged
//! - \ref xI2C_MASTER_ERR_DATA_ACK - The transmitted data was not acknowledged
//! - \ref xI2C_MASTER_ERR_ARB_LOST - The I2C controller lost arbitration.
//!
//! After the master obtained control of the bus, and haven't release it, users 
//! can call xI2CMasterWriteS2() to continue transmit data to slave.
//! Users call also can xI2CMasterStop() to terminate this transmition and 
//! release the I2C bus.
//!
//! This function is always used in thread mode.
//!
//! \return Returns the master error status.
//
//*****************************************************************************
#define xI2CMasterWriteS1(ulBase, ucSlaveAddr, ucData, bEndTransmition)       \
        I2CMasterWriteS1(ulBase, ucSlaveAddr, ucData, bEndTransmition)

//*****************************************************************************
//
//! \brief Write a data to the slave, when the master have obtained control of 
//! the bus, and waiting for all bus transmiton complete.(Write Step2)
//!
//! \param ulBase is the base address of the I2C Master module.
//! \param ucData is the byte to transmit.
//! \param bEndTransmition is flag to control if transmit the STOP condition and
//! terminate this transmition. 
//!
//! After the master obtained control of the bus(have called  
//! xI2CMasterWriteS1() without any error), and haven't release it, users 
//! can call this function to continue transmit data to slave.
//!
//! This function transmit the data to the slave, and waiting for all bus 
//! transmition complete.
//!
//! Users can then check the return value to see if any error occurs:
//! - \ref xI2C_MASTER_ERR_NONE     - \b 0, no error
//! - \ref xI2C_MASTER_ERR_ADDR_ACK - The transmitted address was not acknowledged
//! - \ref xI2C_MASTER_ERR_DATA_ACK - The transmitted data was not acknowledged
//! - \ref xI2C_MASTER_ERR_ARB_LOST - The I2C controller lost arbitration.
//!
//! Then users can call this function to continue transmit data to slave.
//! Users call also call xI2CMasterStop() to terminate this transmition and 
//! release the I2C bus.
//!
//! This function is always used in thread mode.
//!
//! \return Returns the master error status.
//
//*****************************************************************************
#define xI2CMasterWriteS2(ulBase, ucData, bEndTransmition)                    \
        I2CMasterWriteS2(ulBase, ucData, bEndTransmition)

//*****************************************************************************
//
//! \brief Write a data buffer to the slave when the bus is idle, and waiting   
//! for all bus transmiton complete.(Write Buffer Step1)
//!
//! \param ulBase is the base address of the I2C Master module.
//! \param ucSlaveAddr is the 7-bit slave address.
//! \param pucDataBuf is the data buffer to transmit.
//! \param ulLen is the data buffer byte size.
//! \param bEndTransmition is flag to control if transmit the STOP condition and
//! terminate this transmition.
//!
//! This function init a new data buffer write transmition. When the master have 
//! not obtained control of the bus, This function transmit the START condition,  
//! the slave address and the data, then waiting for the data transmition 
//! complete, and continue next data transmition, until all complete. If there 
//! is any error occurs, the remain data will be canceled.
//!
//! Users can then check the return value to see how many datas have been 
//! successfully transmited. if the number != ulLen, user can call 
//! xI2CMasterError() to see what error occurs.
//!
//! After the master obtained control of the bus, and haven't release it, users 
//! can call xI2CMasterWriteS2() / xI2CMasterWriteBufS2() to continue transmit data 
//! to slave. Users call also call xI2CMasterStop() to terminate this transmition 
//! and release the I2C bus.
//!
//! This function is always used in thread mode.
//!
//! \return Returns the data number that have been successully tranmited.
//
//*****************************************************************************
#define xI2CMasterWriteBufS1(ulBase, ucSlaveAddr, pucDataBuf, ulLen, bEndTransmition) \
        I2CMasterWriteBufS1(ulBase, ucSlaveAddr, pucDataBuf, ulLen, bEndTransmition)


//*****************************************************************************
//
//! \brief Write a data buffer to the slave, when the master have obtained  
//! control of the bus, and waiting for all bus transmiton complete.(Write
//! Buffer Step2)
//!
//! \param ulBase is the base address of the I2C Master module.
//! \param pucDataBuf is the data buffer to transmit.
//! \param ulLen is the data buffer byte size.
//! \param bEndTransmition is flag to control if transmit the STOP condition and
//! terminate this transmition.
//!
//! After the master obtained control of the bus(have called  
//! xI2CMasterWriteS1() or xI2CMasterWriteBufS1() without any error), and haven't 
//! release it, users can call this function to continue transmit data to slave.
//!
//! This function transmit the data one by one to the slave, waiting for every  
//! data transmition complete, and continue next data transmition, until all  
//! complete. If there is any error occurs, the remain data will be canceled.
//!
//! Users can then check the return value to see how many datas have been 
//! successfully transmited. if the number != ulLen, user can call 
//! xI2CMasterError() to see what error occurs.
//!
//! Then users can call xI2CMasterWriteS2() or this function to continue  
//! transmit data to slave. Users call also call xI2CMasterStop() to terminate  
//! this transmition and release the I2C bus.
//!
//! This function is always used in thread mode.
//!
//! \return Returns the data number that have been successully tranmited.
//
//*****************************************************************************
#define xI2CMasterWriteBufS2(ulBase, pucDataBuf, ulLen, bEndTransmition)      \
        I2CMasterWriteBufS2(ulBase, pucDataBuf, ulLen, bEndTransmition)

//*****************************************************************************
//
//! \brief Send a master receive request when the bus is idle.(Read Step1)
//!
//! \param ulBase is the base address of the I2C Master module.
//! \param ucSlaveAddr is the 7-bit slave address.
//! \param bEndTransmition is flag to control if transmit the STOP condition and
//! terminate this transmition. 
//!
//! This function init a new receive transmition. When the master have not obtained
//! control of the bus, This function send request to transmit the START 
//! condition, the slave address and the data request, Then it returns  
//! immediately, no waiting any bus transmition to complete. 
//!
//! If bEndTransmition is xtrue, the receive operation will followed by an 
//! negative ACK and STOP condition.
//!
//! Users can call xI2CMasterBusy() to check if all the bus transmition 
//! complete, then call xI2CMasterError() to check if any error occurs. Then user 
//! can get the data by calling xI2CMasterDataGet() if there is no error occurs.
//!
//! After the master obtained control of the bus, and haven't release it, users 
//! can call xI2CMasterReadRequestS2() to continue receive data from slave.
//! Users call also can xI2CMasterStop() to terminate this transmition and 
//! release the I2C bus.
//!
//! For this function returns immediately, it is always using in the interrupt
//! hander.
//!
//! \return None.
//
//*****************************************************************************
#define xI2CMasterReadRequestS1(ulBase, ucSlaveAddr, bEndTransmition)         \
        I2CMasterReadRequestS1(ulBase, ucSlaveAddr, bEndTransmition)

//*****************************************************************************
//
//! \brief Send a master data receive request when the master have obtained 
//! control of the bus.(Write Step2)
//!
//! \param ulBase is the base address of the I2C Master module.
//! \param bEndTransmition is flag to control if transmit the STOP condition and
//! terminate this transmition. 
//!
//! After the master obtained control of the bus(have called  
//! xI2CMasterReadRequestS1() without any error), and haven't release it, users 
//! can call this function to continue receive data from slave.
//!
//! If bEndTransmition is xtrue, the receive operation will followed by an 
//! negative ACK and STOP condition.
//!
//! Users can call xI2CMasterBusy() to check if all the bus transmition 
//! complete, then call xI2CMasterError() to check if any error occurs. Then user 
//! can get the data by calling xI2CMasterDataGet() if there is no error occurs.
//!
//! Then users can call this function to continue receive data from slave.
//! Users call also can xI2CMasterStop() to terminate this transmition and 
//! release the I2C bus.
//!
//! For this function returns immediately, it is always using in the interrupt
//! hander.
//!
//! \return None.
//
//*****************************************************************************
#define xI2CMasterReadRequestS2(ulBase, bEndTransmition)                      \
        I2CMasterReadRequestS2(ulBase, bEndTransmition)

//*****************************************************************************
//
//! \brief Send a master data receive request with an NACK when the master have  
//! obtained control of the bus(Write Step2).
//!
//! \param ulBase is the base address of the I2C Master module.
//!
//! This function is used to request the last data to receive, and signal the 
//! end of the transfer to the slave transmitter. Then the master can repeat
//! START condition, switch to transmit or other slaves without lost control
//! of the bus.
//!
//! Users can call xI2CMasterBusy() to check if all the bus transmition 
//! complete, then call xI2CMasterError() to check if any error occurs. Then user 
//! can get the data by calling xI2CMasterDataGet() if there is no error occurs.
//!
//! Users call also can xI2CMasterStop() to terminate this transmition and 
//! release the I2C bus.
//!
//! For this function returns immediately, it is always using in the interrupt
//! hander.
//!
//! \return None.
//
//*****************************************************************************
#define xI2CMasterReadLastRequestS2(ulBase)                                   \
        I2CMasterReadLastRequestS2(ulBase)


//*****************************************************************************
//
//! \brief Read a data from a slave when the bus is idle, and waiting for all 
//! bus transmiton complete.(Read Step1)
//!
//! \param ulBase is the base address of the I2C Master module.
//! \param ucSlaveAddr is the 7-bit slave address.
//! \param pucData is the buffer where to save the data.
//! \param bEndTransmition is flag to control if transmit the STOP condition and
//! terminate this transmition. 
//!
//! This function init a new receive transmition. When the master have not obtained
//! control of the bus, This function send request to transmit the START 
//! condition, the slave address and the data request, then waiting for all bus
//! transmition complete.
//!
//! If bEndTransmition is xtrue, the receive operation will followed by an 
//! negative ACK and STOP condition.
//!
//! Users can then check the return value to see if any error occurs:
//! - \ref xI2C_MASTER_ERR_NONE     - \b 0, no error
//! - \ref xI2C_MASTER_ERR_ADDR_ACK - The transmitted address was not acknowledged
//! - \ref xI2C_MASTER_ERR_DATA_ACK - The transmitted data was not acknowledged
//! - \ref xI2C_MASTER_ERR_ARB_LOST - The I2C controller lost arbitration.
//!
//! After the master obtained control of the bus, and haven't release it, users 
//! can call xI2CMasterReadS2() to continue receive data from slave.
//! Users call also can xI2CMasterStop() to terminate this transmition and 
//! release the I2C bus.
//!
//! This function is usually used in thread mode.
//!
//! \return Returns the master error status.
//
//*****************************************************************************
#define xI2CMasterReadS1(ulBase, ucSlaveAddr, pucData, bEndTransmition)       \
        I2CMasterReadS1(ulBase, ucSlaveAddr, pucData, bEndTransmition)

//*****************************************************************************
//
//! \brief Read a data from a slave when the master have obtained control of 
//! the bus, and waiting for all bus transmiton complete.(Read Step2)
//!
//! \param ulBase is the base address of the I2C Master module.
//! \param pucData is the buffer where to save the data.
//! \param bEndTransmition is flag to control if transmit the STOP condition and
//! terminate this transmition. 
//!
//! After the master obtained control of the bus(have called  
//! xI2CMasterReadS1() without any error), and haven't release it, users can 
//! call this function to continue receive data from the slave.
//!
//! If bEndTransmition is xtrue, the receive operation will followed by an 
//! negative ACK and STOP condition.
//!
//! It will be waiting for all bus transmition complete before return.
//! Users can then check the return value to see if any error occurs:
//! - \ref xI2C_MASTER_ERR_NONE     - \b 0, no error
//! - \ref xI2C_MASTER_ERR_ADDR_ACK - The transmitted address was not acknowledged
//! - \ref xI2C_MASTER_ERR_DATA_ACK - The transmitted data was not acknowledged
//! - \ref xI2C_MASTER_ERR_ARB_LOST - The I2C controller lost arbitration.
//!
//! Then useres can call this function to continue receive data from slave.
//! Users call also can xI2CMasterStop() to terminate this transmition and 
//! release the I2C bus.
//!
//! This function is usually used in thread mode.
//!
//! \return Returns the master error status.
//
//*****************************************************************************
#define xI2CMasterReadS2(ulBase, pucData, bEndTransmition)                    \
        I2CMasterReadS2(ulBase, pucData, bEndTransmition)

//*****************************************************************************
//
//! \brief Read some data from a slave when the bus is idle, and waiting for all 
//! bus transmiton complete.(Read Buffer Step1)
//!
//! \param ulBase is the base address of the I2C Master module.
//! \param ucSlaveAddr is the 7-bit slave address.
//! \param pucDataBuf is the buffer where to save the data.
//! \param ulLen is the data number to receive.
//! \param bEndTransmition is flag to control if transmit the STOP condition and
//! terminate this transmition. 
//!
//! This function init a new data buffer receive transmition. When the master 
//! have not obtained control of the bus, This function send request to transmit 
//! the START condition, the slave address and the data request, then waiting for 
//! the data transmition complete, and continue next data transmition, until all 
//! complete. If there is any error occurs, the remain data will be canceled.
//!
//! If bEndTransmition is xtrue, the receive operation will followed by an 
//! negative ACK and STOP condition.
//!
//! Users can then check the return value to see how many datas have been 
//! successfully received. if the number != ulLen, user can call 
//! xI2CMasterError() to see what error occurs.
//!
//! After the master obtained control of the bus, and haven't release it, users 
//! can call xI2CMasterReadS2() or xI2CMasterReadBufS2() to continue receive data .
//! from slave .Users call also can xI2CMasterStop() to terminate this transmition
//! and release the I2C bus.
//!
//! This function is usually used in thread mode.
//!
//! \return Returns the data number that have been successully received.
//
//*****************************************************************************
#define xI2CMasterReadBufS1(ulBase, ucSlaveAddr, pucDataBuf, ulLen, bEndTransmition) \
        I2CMasterReadBufS1(ulBase, ucSlaveAddr, pucDataBuf, ulLen, bEndTransmition)


//*****************************************************************************
//
//! \brief Read some data from a slave when the master have obtained control of
//! the bus, and waiting for all bus transmiton complete.(Write Buffer Step2)
//!
//! \param ulBase is the base address of the I2C Master module.
//! \param ucSlaveAddr is the 7-bit slave address.
//! \param pucDataBuf is the buffer where to save the data.
//! \param ulLen is the data number to receive.
//! \param bEndTransmition is flag to control if transmit the STOP condition and
//! terminate this transmition. 
//!
//! After the master obtained control of the bus(have called  
//! xI2CMasterReadS1() or xI2CMasterReadBufS1() without any error), and haven't 
//! release it, users can call this function to continue receive data from slave.
//!
//! This function receive data one by one from the slave, waiting for every  
//! data transmition complete, and continue next data transmition, until all  
//! complete. If there is any error occurs, the remain data will be canceled.
//!
//! If bEndTransmition is xtrue, the receive operation will followed by an 
//! negative ACK and STOP condition.
//!
//! Users can then check the return value to see how many datas have been 
//! successfully received. if the number != ulLen, user can call 
//! xI2CMasterError() to see what error occurs.
//!
//! After the master obtained control of the bus, and haven't release it, users 
//! can call xI2CMasterReadS2() or xI2CMasterReadBufS2() to continue receive data
//! from slave. Users call also can xI2CMasterStop() to terminate this transmition
//! and release the I2C bus.
//!
//! This function is usually used in thread mode.
//!
//! \return Returns the data number that have been successully received.
//
//*****************************************************************************
#define xI2CMasterReadBufS2(ulBase, pucDataBuf, ulLen, bEndTransmition)       \
        I2CMasterReadBufS2(ulBase, pucDataBuf, ulLen, bEndTransmition)


//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HT32F125x_I2C
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HT32F125x_I2C_Int_Type Interrupt defines
//! \brief Values that show I2C Interrupt Type
//! Values that can be passed to xx
//! as the xx parameter.
//! @{
//
//*****************************************************************************

//
//! START Condition Transmit Interrupt Enable Bit
//
#define I2C_INT_STA             0x00000001

//
//! STOP Condition Detected Interrupt Enable
//
#define I2C_INT_STO             0x00000002

//
//! Slave Address Match Interrupt Enable
//
#define I2C_INT_ADRS            0x00000004

//
//! General Call Slave Interrupt Enable
//
#define I2C_INT_GCS             0x00000008

//
//! Arbitration Loss Interrupt Enable Bit in I2C multi-master mode
//
#define I2C_INT_ARBLOS          0x00000100

//
//! Received Not Acknowledge Interrupt Enable Bit
//
#define I2C_INT_RXNACK          0x00000200

//
//! Bus Error Interrupt Enable Bit
//
#define I2C_INT_BUSERR          0x00000400

//
//! Data Register Not Empty Interrupt Enable Bit in Receiver Mode
//
#define I2C_INT_RXDNE           0x00010000

//
//! Data Register Empty Interrupt Enable Bit in Transmitter Mode
//
#define I2C_INT_TXDE            0x00020000

//
//! RX Buffer Full Interrupt Enable Bit
//
#define I2C_INT_RXBF            0x00040000


//
//! All Interrupt Enable Bit
//
#define I2C_INT_ALL             0x0007070F

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HT32F125x_I2C_Event_Type Event defines
//! \brief Values that show I2C Event Type
//! Values that can be passed to xx
//! as the xx parameter.
//! @{
//
//*****************************************************************************

//
//! START Condition Transmit Event
//
#define I2C_EVENT_STA           0x00000001

//
//! STOP Condition Detected Event
//
#define I2C_EVENT_STO           0x00000002

//
//! Slave Address Match Event
//
#define I2C_EVENT_ADRS          0x00000004

//
//! General Call Slave Event
//
#define I2C_EVENT_GCS           0x00000008

//
//! Arbitration Loss Event in I2C multi-master mode
//
#define I2C_EVENT_ARBLOS        0x00000100

//
//! Received Not Acknowledge Event
//
#define I2C_EVENT_RXNACK        0x00000200

//
//! Bus Error Event
//
#define I2C_EVENT_BUSERR        0x00000400

//
//! Data Register Not Empty Event in Receiver Mode
//
#define I2C_EVENT_RXDNE         0x00010000

//
//! Data Register Empty Event in Transmitter Mode
//
#define I2C_EVENT_TXDE          0x00020000

//
//! RX Buffer Full Event
//
#define I2C_EVENT_RXBF          0x00040000

//
//! Bus Busy Event
//
#define I2C_EVENT_BUSBUSY       0x00080000

//
//! Master Mode Event
//
#define I2C_EVENT_MASTER        0x00100000

//
//! Transmitter / Receiver Event
//
#define I2C_EVENT_TXNRX         0x00200000


//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HT32F125x_I2C_Master_Event I2C Master Events
//! \brief Values that show I2C Master Events
//! Values that can be passed to xx
//! as the xx parameter.
//! @{
//
//*****************************************************************************

#define I2C_MASTER_SEND_START   0x00180001

#define I2C_MASTER_RECEIVER_MODE                                              \
                                0x00180000
                                
#define I2C_MASTER_TRANSMITTER_MODE                                           \
                                0x003A0004

#define I2C_MASTER_RX_NOT_EMPTY 0x00190000

#define I2C_MASTER_RX_NOT_EMPTY_NOBUSY                                        \
                                0x00010000

#define I2C_MASTER_TX_EMPTY     0x003A0000

#define I2C_MASTER_RX_BUFFER_FULL                                             \
                                0x001D0000

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HT32F125x_I2C_Slave_Event I2C Slave Events
//! \brief Values that show I2C Slave Events
//! Values that can be passed to xx
//! as the xx parameter.
//! @{
//
//*****************************************************************************

#define I2C_SLAVE_ACK_TRANSMITTER_ADDESS                                      \
                                0x002A0004

#define I2C_SLAVE_ACK_RECEIVER_ADDRESS                                        \
                                0x00080004

#define I2C_SLAVE_ACK_GCALL_ADDRESS                                           \
                                0x00080008

#define I2C_SLAVE_RX_NOT_EMPTY  0x00090000

#define I2C_SLAVE_RX_NOT_EMPTY_STOP                                           \
                                0x00010002

#define I2C_SLAVE_TX_EMPTY      0x002A0000

#define I2C_SLAVE_RX_BUFFER_FULL                                              \
                                0x000D0000

#define I2C_SLAVE_RECEIVED_NACK 0x00080200

#define I2C_SLAVE_RECEIVED_NACK_STOP                                          \
                                0x00000202

#define I2C_SLAVE_STOP_DETECED  0x00000002

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HT32F125x_I2C_Slave_Error I2C Master error status
//! \brief Values that show I2C Master error status
//! Values that can be passed to xx
//! as the xx parameter.
//! @{
//
//*****************************************************************************

#define I2C_MASTER_ERR_NONE     0
#define I2C_MASTER_ERR_ADDR_ACK 0x00000200
#define I2C_MASTER_ERR_DATA_ACK 0x00000200
#define I2C_MASTER_ERR_ARB_LOST 0x00000100

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
// Miscellaneous I2C driver definitions.
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HT32F125x_I2C_Miscellaneous Miscellaneous I2C driver definitions.
//! \brief Values that show Miscellaneous I2C driver definitions.
//! Values that can be passed to xx
//! as the xx parameter.
//! @{
//
//*****************************************************************************

#define I2C_MASTER_MAX_RETRIES  1000        // Number of retries

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HT32F125x_I2C_General_Call I2C General Call
//! \brief Values that show I2C General Call
//! Values that can be passed to I2CSlaveOwnAddressSet().
//! @{
//
//*****************************************************************************
#define I2C_GENERAL_CALL_EN     0x00000004
#define I2C_GENERAL_CALL_DIS    0x00000000

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HT32F125x_I2C_Address_Type I2C Address type
//! \brief Values that show I2C Address type
//! Values that can be passed to xx().
//! @{
//
//*****************************************************************************
#define I2C_ADDR_7BIT           0x00000000
#define I2C_ADDR_10BIT          0x00000080

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HT32F125x_I2C_Exported_APIs HT32F125x I2C API
//! \brief HT32F125x I2C API Reference.
//! @{
//
//*****************************************************************************
extern void I2CMasterInit(unsigned long ulBase, unsigned long ulI2CClk);
extern void I2CSlaveInit(unsigned long ulBase, unsigned long ulAddrConfig, 
                         unsigned short usSlaveAddr, unsigned long ulGeneralCall);
extern void I2CEnable(unsigned long ulBase);
extern void I2CDisable(unsigned long ulBase);
extern void I2CIntEnable(unsigned long ulBase, unsigned long ulIntType);
extern void I2CIntDisable(unsigned long ulBase, unsigned long ulIntType);

extern unsigned long I2CStatusGet(unsigned long ulBase);
extern void I2CFlagStatusClear(unsigned long ulBase, unsigned long ulFlag);
extern xtBoolean I2CBusBusy(unsigned long ulBase);
extern unsigned long I2CMasterErr(unsigned long ulBase);
extern void I2CDataPut(unsigned long ulBase, unsigned char ucData);
extern unsigned long I2CDataGet(unsigned long ulBase);
extern void I2CMasterWriteRequestS1(unsigned long ulBase, 
                                    unsigned char ucSlaveAddr,
                                    unsigned char ucData, 
                                    xtBoolean bEndTransmition);
extern void I2CMasterWriteRequestS2(unsigned long ulBase, unsigned char ucData,
                                    xtBoolean bEndTransmition);
extern unsigned long I2CMasterWriteS1(unsigned long ulBase, 
                                      unsigned char ucSlaveAddr,
                                      unsigned char ucData, 
                                      xtBoolean bEndTransmition);
extern unsigned long I2CMasterWriteS2(unsigned long ulBase, 
                                      unsigned char ucData,
                                      xtBoolean bEndTransmition);
extern unsigned long I2CMasterWriteBufS1(unsigned long ulBase, 
                                         unsigned char ucSlaveAddr,
                                         const unsigned char *pucDataBuf, 
                                         unsigned long ulLen, 
                                         xtBoolean bEndTransmition);
extern unsigned long I2CMasterWriteBufS2(unsigned long ulBase, 
                                         const unsigned char *pucDataBuf,
                                         unsigned long ulLen, 
                                         xtBoolean bEndTransmition);
extern void I2CMasterReadRequestS1(unsigned long ulBase, 
                                   unsigned char ucSlaveAddr,
                                   xtBoolean bEndTransmition);
extern void I2CMasterReadRequestS2(unsigned long ulBase, 
                                   xtBoolean bEndTransmition);
extern void I2CMasterReadLastRequestS2(unsigned long ulBase);
extern unsigned long I2CMasterReadS1(unsigned long ulBase, 
                                     unsigned char ucSlaveAddr,
                                     unsigned char *pucData,
                                     xtBoolean bEndTransmition);
extern unsigned long I2CMasterReadS2(unsigned long ulBase,
                                     unsigned char *pucData,
                                     xtBoolean bEndTransmition);
extern unsigned long I2CMasterReadBufS1(unsigned long ulBase, 
                                        unsigned char ucSlaveAddr,
                                        unsigned char* pucDataBuf, 
                                        unsigned long ulLen,
                                        xtBoolean bEndTransmition);
extern unsigned long I2CMasterReadBufS2(unsigned long ulBase, 
                                        unsigned char *pucDataBuf,
                                        unsigned long ulLen, 
                                        xtBoolean bEndTransmition);
extern void I2CIntCallbackInit(unsigned long ulBase, 
                               xtEventCallback xtI2CCallback);

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
//}
#endif

#endif // __xI2C_H__

