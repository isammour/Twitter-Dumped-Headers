//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TFNApplicationBackgroundTaskHandle-Protocol.h>

@class NSString;

@interface TFNApplicationBackgroundTaskHandleInternal : NSObject <TFNApplicationBackgroundTaskHandle>
{
    unsigned long long _backgroundTaskIdentifier;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (void)endBackgroundTask;
- (id)initWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

