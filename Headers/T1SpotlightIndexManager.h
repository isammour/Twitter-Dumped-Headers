//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/_TtP9T1Twitter29SpotlightIndexManagerDelegate_-Protocol.h>

@interface T1SpotlightIndexManager : NSObject <_TtP9T1Twitter29SpotlightIndexManagerDelegate_>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: account
    // Error parsing type: , name: operationQueue
    // Error parsing type: , name: dispatchQueue
    // Error parsing type: , name: taskManager
}

+ (id)sharedInstance;
- (CDUnknownBlockType).cxx_destruct;
- (_Bool)buildIndex:(CDUnknownBlockType)arg1;
- (id)currentAccount;
- (id)init;
- (void)didDeleteIndex:(id)arg1 domainIdentifiers:(id)arg2 error:(id)arg3;
- (void)didEndIndexing:(id)arg1 domainIdentifiers:(id)arg2 error:(id)arg3;
- (void)didStartIndexing:(id)arg1 domainIdentifiers:(id)arg2 error:(id)arg3;
- (void)featureSwitchDidUpdateWithNotification:(id)arg1;
- (void)appDidEnterBackgroundWithNotification:(id)arg1;
- (void)accountDidBecomeActiveWithNotification:(id)arg1;
- (void)appDidBecomeActiveWithNotification:(id)arg1;
- (id)scribePage:(id)arg1;

@end

