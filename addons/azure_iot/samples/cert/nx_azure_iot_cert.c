/**************************************************************************/
/*                                                                        */
/*       Copyright (c) Microsoft Corporation. All rights reserved.        */
/*                                                                        */
/*       This software is licensed under the Microsoft Software License   */
/*       Terms for Microsoft Azure RTOS. Full text of the license can be  */
/*       found in the LICENSE file at https://aka.ms/AzureRTOS_EULA       */
/*       and in the root directory of this software.                      */
/*                                                                        */
/**************************************************************************/

/* This file contains certs needed to communicate with Azure (IoT) */

#include "nx_azure_iot_cert.h"

/* DigiCert Baltimore Root --Used Globally--  */
const unsigned char _nx_azure_iot_root_cert[] = {
  0x30, 0x82, 0x03, 0x77, 0x30, 0x82, 0x02, 0x5f, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x04, 0x02,
  0x00, 0x00, 0xb9, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x05,
  0x05, 0x00, 0x30, 0x5a, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x49,
  0x45, 0x31, 0x12, 0x30, 0x10, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x09, 0x42, 0x61, 0x6c, 0x74,
  0x69, 0x6d, 0x6f, 0x72, 0x65, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x13, 0x0a,
  0x43, 0x79, 0x62, 0x65, 0x72, 0x54, 0x72, 0x75, 0x73, 0x74, 0x31, 0x22, 0x30, 0x20, 0x06, 0x03,
  0x55, 0x04, 0x03, 0x13, 0x19, 0x42, 0x61, 0x6c, 0x74, 0x69, 0x6d, 0x6f, 0x72, 0x65, 0x20, 0x43,
  0x79, 0x62, 0x65, 0x72, 0x54, 0x72, 0x75, 0x73, 0x74, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x30, 0x1e,
  0x17, 0x0d, 0x30, 0x30, 0x30, 0x35, 0x31, 0x32, 0x31, 0x38, 0x34, 0x36, 0x30, 0x30, 0x5a, 0x17,
  0x0d, 0x32, 0x35, 0x30, 0x35, 0x31, 0x32, 0x32, 0x33, 0x35, 0x39, 0x30, 0x30, 0x5a, 0x30, 0x5a,
  0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x49, 0x45, 0x31, 0x12, 0x30,
  0x10, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x09, 0x42, 0x61, 0x6c, 0x74, 0x69, 0x6d, 0x6f, 0x72,
  0x65, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x13, 0x0a, 0x43, 0x79, 0x62, 0x65,
  0x72, 0x54, 0x72, 0x75, 0x73, 0x74, 0x31, 0x22, 0x30, 0x20, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13,
  0x19, 0x42, 0x61, 0x6c, 0x74, 0x69, 0x6d, 0x6f, 0x72, 0x65, 0x20, 0x43, 0x79, 0x62, 0x65, 0x72,
  0x54, 0x72, 0x75, 0x73, 0x74, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x30, 0x82, 0x01, 0x22, 0x30, 0x0d,
  0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01,
  0x0f, 0x00, 0x30, 0x82, 0x01, 0x0a, 0x02, 0x82, 0x01, 0x01, 0x00, 0xa3, 0x04, 0xbb, 0x22, 0xab,
  0x98, 0x3d, 0x57, 0xe8, 0x26, 0x72, 0x9a, 0xb5, 0x79, 0xd4, 0x29, 0xe2, 0xe1, 0xe8, 0x95, 0x80,
  0xb1, 0xb0, 0xe3, 0x5b, 0x8e, 0x2b, 0x29, 0x9a, 0x64, 0xdf, 0xa1, 0x5d, 0xed, 0xb0, 0x09, 0x05,
  0x6d, 0xdb, 0x28, 0x2e, 0xce, 0x62, 0xa2, 0x62, 0xfe, 0xb4, 0x88, 0xda, 0x12, 0xeb, 0x38, 0xeb,
  0x21, 0x9d, 0xc0, 0x41, 0x2b, 0x01, 0x52, 0x7b, 0x88, 0x77, 0xd3, 0x1c, 0x8f, 0xc7, 0xba, 0xb9,
  0x88, 0xb5, 0x6a, 0x09, 0xe7, 0x73, 0xe8, 0x11, 0x40, 0xa7, 0xd1, 0xcc, 0xca, 0x62, 0x8d, 0x2d,
  0xe5, 0x8f, 0x0b, 0xa6, 0x50, 0xd2, 0xa8, 0x50, 0xc3, 0x28, 0xea, 0xf5, 0xab, 0x25, 0x87, 0x8a,
  0x9a, 0x96, 0x1c, 0xa9, 0x67, 0xb8, 0x3f, 0x0c, 0xd5, 0xf7, 0xf9, 0x52, 0x13, 0x2f, 0xc2, 0x1b,
  0xd5, 0x70, 0x70, 0xf0, 0x8f, 0xc0, 0x12, 0xca, 0x06, 0xcb, 0x9a, 0xe1, 0xd9, 0xca, 0x33, 0x7a,
  0x77, 0xd6, 0xf8, 0xec, 0xb9, 0xf1, 0x68, 0x44, 0x42, 0x48, 0x13, 0xd2, 0xc0, 0xc2, 0xa4, 0xae,
  0x5e, 0x60, 0xfe, 0xb6, 0xa6, 0x05, 0xfc, 0xb4, 0xdd, 0x07, 0x59, 0x02, 0xd4, 0x59, 0x18, 0x98,
  0x63, 0xf5, 0xa5, 0x63, 0xe0, 0x90, 0x0c, 0x7d, 0x5d, 0xb2, 0x06, 0x7a, 0xf3, 0x85, 0xea, 0xeb,
  0xd4, 0x03, 0xae, 0x5e, 0x84, 0x3e, 0x5f, 0xff, 0x15, 0xed, 0x69, 0xbc, 0xf9, 0x39, 0x36, 0x72,
  0x75, 0xcf, 0x77, 0x52, 0x4d, 0xf3, 0xc9, 0x90, 0x2c, 0xb9, 0x3d, 0xe5, 0xc9, 0x23, 0x53, 0x3f,
  0x1f, 0x24, 0x98, 0x21, 0x5c, 0x07, 0x99, 0x29, 0xbd, 0xc6, 0x3a, 0xec, 0xe7, 0x6e, 0x86, 0x3a,
  0x6b, 0x97, 0x74, 0x63, 0x33, 0xbd, 0x68, 0x18, 0x31, 0xf0, 0x78, 0x8d, 0x76, 0xbf, 0xfc, 0x9e,
  0x8e, 0x5d, 0x2a, 0x86, 0xa7, 0x4d, 0x90, 0xdc, 0x27, 0x1a, 0x39, 0x02, 0x03, 0x01, 0x00, 0x01,
  0xa3, 0x45, 0x30, 0x43, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0xe5,
  0x9d, 0x59, 0x30, 0x82, 0x47, 0x58, 0xcc, 0xac, 0xfa, 0x08, 0x54, 0x36, 0x86, 0x7b, 0x3a, 0xb5,
  0x04, 0x4d, 0xf0, 0x30, 0x12, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x08, 0x30,
  0x06, 0x01, 0x01, 0xff, 0x02, 0x01, 0x03, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x01, 0x01,
  0xff, 0x04, 0x04, 0x03, 0x02, 0x01, 0x06, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7,
  0x0d, 0x01, 0x01, 0x05, 0x05, 0x00, 0x03, 0x82, 0x01, 0x01, 0x00, 0x85, 0x0c, 0x5d, 0x8e, 0xe4,
  0x6f, 0x51, 0x68, 0x42, 0x05, 0xa0, 0xdd, 0xbb, 0x4f, 0x27, 0x25, 0x84, 0x03, 0xbd, 0xf7, 0x64,
  0xfd, 0x2d, 0xd7, 0x30, 0xe3, 0xa4, 0x10, 0x17, 0xeb, 0xda, 0x29, 0x29, 0xb6, 0x79, 0x3f, 0x76,
  0xf6, 0x19, 0x13, 0x23, 0xb8, 0x10, 0x0a, 0xf9, 0x58, 0xa4, 0xd4, 0x61, 0x70, 0xbd, 0x04, 0x61,
  0x6a, 0x12, 0x8a, 0x17, 0xd5, 0x0a, 0xbd, 0xc5, 0xbc, 0x30, 0x7c, 0xd6, 0xe9, 0x0c, 0x25, 0x8d,
  0x86, 0x40, 0x4f, 0xec, 0xcc, 0xa3, 0x7e, 0x38, 0xc6, 0x37, 0x11, 0x4f, 0xed, 0xdd, 0x68, 0x31,
  0x8e, 0x4c, 0xd2, 0xb3, 0x01, 0x74, 0xee, 0xbe, 0x75, 0x5e, 0x07, 0x48, 0x1a, 0x7f, 0x70, 0xff,
  0x16, 0x5c, 0x84, 0xc0, 0x79, 0x85, 0xb8, 0x05, 0xfd, 0x7f, 0xbe, 0x65, 0x11, 0xa3, 0x0f, 0xc0,
  0x02, 0xb4, 0xf8, 0x52, 0x37, 0x39, 0x04, 0xd5, 0xa9, 0x31, 0x7a, 0x18, 0xbf, 0xa0, 0x2a, 0xf4,
  0x12, 0x99, 0xf7, 0xa3, 0x45, 0x82, 0xe3, 0x3c, 0x5e, 0xf5, 0x9d, 0x9e, 0xb5, 0xc8, 0x9e, 0x7c,
  0x2e, 0xc8, 0xa4, 0x9e, 0x4e, 0x08, 0x14, 0x4b, 0x6d, 0xfd, 0x70, 0x6d, 0x6b, 0x1a, 0x63, 0xbd,
  0x64, 0xe6, 0x1f, 0xb7, 0xce, 0xf0, 0xf2, 0x9f, 0x2e, 0xbb, 0x1b, 0xb7, 0xf2, 0x50, 0x88, 0x73,
  0x92, 0xc2, 0xe2, 0xe3, 0x16, 0x8d, 0x9a, 0x32, 0x02, 0xab, 0x8e, 0x18, 0xdd, 0xe9, 0x10, 0x11,
  0xee, 0x7e, 0x35, 0xab, 0x90, 0xaf, 0x3e, 0x30, 0x94, 0x7a, 0xd0, 0x33, 0x3d, 0xa7, 0x65, 0x0f,
  0xf5, 0xfc, 0x8e, 0x9e, 0x62, 0xcf, 0x47, 0x44, 0x2c, 0x01, 0x5d, 0xbb, 0x1d, 0xb5, 0x32, 0xd2,
  0x47, 0xd2, 0x38, 0x2e, 0xd0, 0xfe, 0x81, 0xdc, 0x32, 0x6a, 0x1e, 0xb5, 0xee, 0x3c, 0xd5, 0xfc,
  0xe7, 0x81, 0x1d, 0x19, 0xc3, 0x24, 0x42, 0xea, 0x63, 0x39, 0xa9
};

const unsigned int _nx_azure_iot_root_cert_size = sizeof(_nx_azure_iot_root_cert);