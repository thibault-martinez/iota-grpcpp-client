/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "client.hpp"

namespace API {

Client::Client(std::shared_ptr<grpc::Channel> channel) : stub_(RPC::API::NewStub(channel)) {}

RPC::addNeighborsResponse Client::addNeighbors() {
  RPC::addNeighborsRequest request;
  RPC::addNeighborsResponse response;
  grpc::ClientContext context;

  auto status = stub_->addNeighbors(&context, request, &response);

  return response;
}

RPC::attachToTangleResponse Client::attachToTangle() {
  RPC::attachToTangleRequest request;
  RPC::attachToTangleResponse response;
  grpc::ClientContext context;

  auto status = stub_->attachToTangle(&context, request, &response);

  return response;
}

RPC::broadcastTransactionsResponse Client::broadcastTransactions() {
  RPC::broadcastTransactionsRequest request;
  RPC::broadcastTransactionsResponse response;
  grpc::ClientContext context;

  auto status = stub_->broadcastTransactions(&context, request, &response);

  return response;
}

RPC::checkConsistencyResponse Client::checkConsistency() {
  RPC::checkConsistencyRequest request;
  RPC::checkConsistencyResponse response;
  grpc::ClientContext context;

  auto status = stub_->checkConsistency(&context, request, &response);

  return response;
}

RPC::findTransactionsResponse Client::findTransactions() {
  RPC::findTransactionsRequest request;
  RPC::findTransactionsResponse response;
  grpc::ClientContext context;

  auto status = stub_->findTransactions(&context, request, &response);

  return response;
}

RPC::getBalancesResponse Client::getBalances() {
  RPC::getBalancesRequest request;
  RPC::getBalancesResponse response;
  grpc::ClientContext context;

  auto status = stub_->getBalances(&context, request, &response);

  return response;
}

RPC::getInclusionStatesResponse Client::getInclusionStates() {
  RPC::getInclusionStatesRequest request;
  RPC::getInclusionStatesResponse response;
  grpc::ClientContext context;

  auto status = stub_->getInclusionStates(&context, request, &response);

  return response;
}

RPC::getMissingTransactionsResponse Client::getMissingTransactions() {
  RPC::getMissingTransactionsRequest request;
  RPC::getMissingTransactionsResponse response;
  grpc::ClientContext context;

  auto status = stub_->getMissingTransactions(&context, request, &response);

  return response;
}

RPC::getNeighborsResponse Client::getNeighbors() {
  RPC::getNeighborsRequest request;
  RPC::getNeighborsResponse response;
  grpc::ClientContext context;

  auto status = stub_->getNeighbors(&context, request, &response);

  return response;
}

RPC::getNodeInfoResponse Client::getNodeInfo() {
  RPC::getNodeInfoRequest request;
  RPC::getNodeInfoResponse response;
  grpc::ClientContext context;

  auto status = stub_->getNodeInfo(&context, request, &response);

  return response;
}

RPC::getTipsResponse Client::getTips() {
  RPC::getTipsRequest request;
  RPC::getTipsResponse response;
  grpc::ClientContext context;

  auto status = stub_->getTips(&context, request, &response);

  return response;
}

RPC::getTransactionsToApproveResponse Client::getTransactionsToApprove() {
  RPC::getTransactionsToApproveRequest request;
  RPC::getTransactionsToApproveResponse response;
  grpc::ClientContext context;

  auto status = stub_->getTransactionsToApprove(&context, request, &response);

  return response;
}

RPC::getTrytesResponse Client::getTrytes() {
  RPC::getTrytesRequest request;
  RPC::getTrytesResponse response;
  grpc::ClientContext context;

  auto status = stub_->getTrytes(&context, request, &response);

  return response;
}

RPC::interruptAttachingToTangleResponse Client::interruptAttachingToTangle() {
  RPC::interruptAttachingToTangleRequest request;
  RPC::interruptAttachingToTangleResponse response;
  grpc::ClientContext context;

  auto status = stub_->interruptAttachingToTangle(&context, request, &response);

  return response;
}

RPC::removeNeighborsResponse Client::removeNeighbors() {
  RPC::removeNeighborsRequest request;
  RPC::removeNeighborsResponse response;
  grpc::ClientContext context;

  auto status = stub_->removeNeighbors(&context, request, &response);

  return response;
}

RPC::storeTransactionsResponse Client::storeTransactions() {
  RPC::storeTransactionsRequest request;
  RPC::storeTransactionsResponse response;
  grpc::ClientContext context;

  auto status = stub_->storeTransactions(&context, request, &response);

  return response;
}

RPC::wereAddressesSpentFromResponse Client::wereAddressesSpentFrom() {
  RPC::wereAddressesSpentFromRequest request;
  RPC::wereAddressesSpentFromResponse response;
  grpc::ClientContext context;

  auto status = stub_->wereAddressesSpentFrom(&context, request, &response);

  return response;
}

}  // namespace API
