//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNButton.h>

#import <T1Twitter/T1UserViewActionControl-Protocol.h>

@class NSString, TFNTwitterAccount, TFNTwitterUserDataSource, TFSTwitterScribeContext;

@interface T1ListMemberRemoveButton : TFNButton <T1UserViewActionControl>
{
    TFNTwitterAccount *account;
    TFSTwitterScribeContext *scribeContext;
    TFNTwitterUserDataSource *userDataSource;
}

@property(retain, nonatomic) TFNTwitterUserDataSource *userDataSource; // @synthesize userDataSource;
@property(retain, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

