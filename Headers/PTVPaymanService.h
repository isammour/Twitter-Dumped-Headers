//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/PTVCoinPackageLoaderDelegate-Protocol.h>
#import <PeriscopeViewer/SKPaymentTransactionObserver-Protocol.h>
#import <PeriscopeViewer/SKRequestDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableSet, NSString, PTVCoinPackageLoader, PTVLoggedInAPI, SKPaymentQueue, SKReceiptRefreshRequest;
@protocol PTVLoggedInUserProtocol;

@interface PTVPaymanService : NSObject <PTVCoinPackageLoaderDelegate, SKRequestDelegate, SKPaymentTransactionObserver>
{
    id <PTVLoggedInUserProtocol> _loggedInUser;
    SKPaymentQueue *_observedQueue;
    PTVPaymanService *_weakSelf;
    CDUnknownBlockType _coinPackageCompletion;
    PTVCoinPackageLoader *_coinPackageLoader;
    NSMutableSet *_pendingTransactions;
    SKReceiptRefreshRequest *_receiptRefreshRequest;
    _Bool _failedAuthentication;
    PTVLoggedInAPI *_loggedInAPI;
    NSArray *_currentCoinPackages;
    NSArray *_cachedGiftCatalog;
    NSDictionary *_cachedGiftStyles;
}

@property(nonatomic) _Bool failedAuthentication; // @synthesize failedAuthentication=_failedAuthentication;
@property(retain, nonatomic) id <PTVLoggedInUserProtocol> loggedInUser; // @synthesize loggedInUser=_loggedInUser;
@property(retain, nonatomic) NSDictionary *cachedGiftStyles; // @synthesize cachedGiftStyles=_cachedGiftStyles;
@property(retain, nonatomic) NSArray *cachedGiftCatalog; // @synthesize cachedGiftCatalog=_cachedGiftCatalog;
@property(retain, nonatomic) NSArray *currentCoinPackages; // @synthesize currentCoinPackages=_currentCoinPackages;
@property(retain, nonatomic) PTVLoggedInAPI *loggedInAPI; // @synthesize loggedInAPI=_loggedInAPI;
- (void).cxx_destruct;
- (void)makeCachedRequestWithEndPoint:(id)arg1 requestType:(unsigned long long)arg2 responseClass:(Class)arg3 queryParameters:(id)arg4 postParameters:(id)arg5 workClient:(id)arg6 cachePolicy:(long long)arg7 cacheKey:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)makeRequestWithEndPoint:(id)arg1 requestType:(unsigned long long)arg2 responseClass:(Class)arg3 queryParameters:(id)arg4 postParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)stopObservingTransactionsOnQueue:(id)arg1;
- (void)startObservingTransactionsOnQueue:(id)arg1;
- (void)userDidPurchasePackageWithID:(id)arg1 inTransaction:(id)arg2 withReceipt:(id)arg3;
- (void)transactionDidFail:(id)arg1 withReceipt:(id)arg2 error:(id)arg3;
- (void)transactionDidSucceed:(id)arg1 withReceipt:(id)arg2;
- (void)refreshReceiptForTransaction:(id)arg1;
- (void)completeTransaction:(id)arg1 onQueue:(id)arg2 receipt:(id)arg3 canRetry:(_Bool)arg4;
- (void)processTransactions:(id)arg1 onQueue:(id)arg2;
- (void)fetchCashOutApplicationStatusWithResult:(CDUnknownBlockType)arg1;
- (void)fetchTransactionHistoryWorkClient:(id)arg1 cachePolicy:(long long)arg2;
@property(readonly, nonatomic) PTVCoinPackageLoader *coinPackageLoader;
- (void)fetchTopContributorsWithChatAuthToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUserStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendGift:(id)arg1 forBroadcast:(id)arg2 chatToken:(id)arg3 ntpForCurrentFrame:(unsigned long long)arg4 ntpForBroadcasterFrame:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchStarTotalForBroadcastWithID:(id)arg1 chatToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchStarTotalForBroadcast:(id)arg1 chatToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purchaseCoinPackageWithTransactionID:(id)arg1 receipt:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchCoinPackagesWithWorkClient:(id)arg1 cachePolicy:(long long)arg2;
- (void)fetchCoinPackagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchGiftStylesForIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchGiftCatalogWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchGiftCatalogAndStylesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchGiftCatalogAndStylesWithWorkClient:(id)arg1 cachePolicy:(long long)arg2;
- (void)reloadUserBalanceWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchUserEarningsForUserWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchUserEarningsWithResult:(CDUnknownBlockType)arg1;
- (void)fetchBalancesWithResult:(CDUnknownBlockType)arg1;
- (id)initWithLoggedInUser:(id)arg1;
- (void)dealloc;
- (void)coinPackageLoader:(id)arg1 requestsLoadWithWorkClient:(id)arg2 cachePolicy:(long long)arg3;
- (void)coinPackageLoader:(id)arg1 didUpdateCoinPackages:(id)arg2;
- (void)coinPackageLoader:(id)arg1 didLoadCoinPackages:(id)arg2;
- (void)coinPackageLoader:(id)arg1 didGetStoreKitError:(id)arg2;
- (void)coinPackageLoader:(id)arg1 didGetAPIError:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

