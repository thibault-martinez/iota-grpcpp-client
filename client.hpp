/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#pragma once

#include <grpcpp/grpcpp.h>

#include "ciri/api/grpc/proto/api.grpc.pb.h"
#include "ciri/api/grpc/proto/api.pb.h"

namespace API {

class Client {
 public:
  Client(std::shared_ptr<grpc::Channel> channel);

 public:
  RPC::addNeighborsResponse addNeighbors();

  RPC::attachToTangleResponse attachToTangle();

  RPC::broadcastTransactionsResponse broadcastTransactions();

  RPC::checkConsistencyResponse checkConsistency();

  RPC::findTransactionsResponse findTransactions();

  RPC::getBalancesResponse getBalances();

  RPC::getInclusionStatesResponse getInclusionStates();

  RPC::getMissingTransactionsResponse getMissingTransactions();

  RPC::getNeighborsResponse getNeighbors();

  RPC::getNodeInfoResponse getNodeInfo();

  RPC::getTipsResponse getTips();

  RPC::getTransactionsToApproveResponse getTransactionsToApprove();

  RPC::getTrytesResponse getTrytes();

  RPC::interruptAttachingToTangleResponse interruptAttachingToTangle();

  RPC::removeNeighborsResponse removeNeighbors();

  RPC::storeTransactionsResponse storeTransactions();

  RPC::wereAddressesSpentFromResponse wereAddressesSpentFrom();

 private:
  std::unique_ptr<RPC::API::Stub> stub_;
};

}  // namespace API
