//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNAuthorizedServiceRequestPolicy-Protocol.h>

@class NSString;

@interface TFNAuthorizedServiceAlwaysPromptRequestPolicy : NSObject <TFNAuthorizedServiceRequestPolicy>
{
}

- (_Bool)shouldExecuteRequest:(id)arg1 withCurrentInAppStatus:(long long)arg2 systemStatus:(long long)arg3 metadata:(id)arg4 authorized:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

