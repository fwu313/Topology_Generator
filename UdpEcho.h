/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2009 Pierre Weiss
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * 
 */
/**
* \file UdpEcho.h
* \brief The udp echo class subclasse of Application.
* \author Pierre Weiss
* \date 2009
*/

#ifndef UDPECHO_H
#define UDPECHO_H

#include "Application.h"

#include <iostream>
#include <string>
#include <vector>

/**
 * \ingroup generator
 * \brief The Udp echo subclasse from Application.
 *
 * This class generate the code to udp echo source to destination.
 */
class UdpEcho : public Application
{
private:
  size_t port;
  
public:
  /**
   * \brief Constructor which set default value.
   * \param _indice
   * \param _senderNode
   * \param _receiverNode
   * \param _startTime
   * \param _endTime
   * \param port
   */
  UdpEcho(size_t _indice, std::string _senderNode, std::string _receiverNode, size_t _startTime, size_t _endTime, size_t port);
  
  /**
   * \brief Destructor
   */
  ~UdpEcho();
  
  /**
   * \brief Function used to generate the headers.
   * \return headers.
   */
  virtual std::vector<std::string> GenerateHeader();
  
  /**
   * \brief Function used to generate the application.
   * 
   * \param netDeviceContainer
   * \param numberIntoNetDevice
   * \return application code.
   */
  virtual std::vector<std::string> GenerateApplication(std::string netDeviceContainer, size_t numberIntoNetDevice);
  
};

#endif /* UDPECHO_H */
