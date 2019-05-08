/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include "client.hpp"

int main(void) {
  // TODO host and port as CLI parameter
  API::Client client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));

  { auto response = client.addNeighbors(); }

  { auto response = client.attachToTangle(); }

  { auto response = client.broadcastTransactions(); }

  { auto response = client.checkConsistency(); }

  { auto response = client.findTransactions(); }

  { auto response = client.getBalances(); }

  { auto response = client.getInclusionStates(); }

  { auto response = client.getMissingTransactions(); }

  { auto response = client.getNeighbors(); }

  { auto response = client.getNodeInfo(); }

  { auto response = client.getTips(); }

  { auto response = client.getTransactionsToApprove(); }

  { auto response = client.getTrytes(); }

  { auto response = client.interruptAttachingToTangle(); }

  { auto response = client.removeNeighbors(); }

  { auto response = client.storeTransactions(); }

  { auto response = client.wereAddressesSpentFrom(); }

  return 0;
}
