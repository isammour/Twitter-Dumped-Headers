//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class T1PeopleAddressBookAccessController;

@interface T1PeopleDefaultAddressBookService : NSObject
{
    // Error parsing type: , name: addressBook
    // Error parsing type: , name: settings
    // Error parsing type: , name: commandService
    // Error parsing type: , name: accountID
    // Error parsing type: , name: accountModel
    // Error parsing type: , name: synchronizationController
    // Error parsing type: , name: currentOptInOperation
    // Error parsing type: , name: accessController.storage
}

+ (void)initiateContactsSynchronizationWithAccount:(id)arg1;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)fetchActiveContactsRecommendationsWithDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchContactsWithDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)optOutWithReason:(long long)arg1;
- (id)optIn;
- (id)optInAfterDelayWithDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)initiateContactsSynchronization;
@property(nonatomic, retain) T1PeopleAddressBookAccessController *accessController;
@property(nonatomic, readonly) _Bool contactsSynchronizationOptedOut;
@property(nonatomic, readonly) _Bool contactsSynchronizationAuthorized;
@property(nonatomic, readonly) _Bool contactsFetchAuthorized;

@end
