/**
 * @file isaMIB.h
 * @author Natalia Holkova (xholko02), FIT
 * @date 18.11.2020
 *
 * Project for ISA, task variant - SNMP agent extension
 * 
 * Note: this file originally auto-generated by mib2c using
 */

#ifndef ISAMIB_H
#define ISAMIB_H

/* function declarations */
void init_isaMIB(void);
Netsnmp_Node_Handler handle_loginObject;
Netsnmp_Node_Handler handle_currentTimeObject;
Netsnmp_Node_Handler handle_numberObject;
Netsnmp_Node_Handler handle_operatingSystemObject;

#endif /* ISAMIB_H */
