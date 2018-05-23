//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MNNLoggerOutput;

@interface MNNLogger : NSObject
{
    long long _minimumLogLevel;
    id <MNNLoggerOutput> _delegate;
}

+ (id)timeInLocalZone:(id)arg1;
+ (id)sharedLogger;
@property(nonatomic) __weak id <MNNLoggerOutput> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long minimumLogLevel; // @synthesize minimumLogLevel=_minimumLogLevel;
- (void).cxx_destruct;
- (_Bool)logWithLevel:(long long)arg1 file:(const char *)arg2 function:(const char *)arg3 lineNumber:(int)arg4 format:(id)arg5;
- (_Bool)logWithLevel:(long long)arg1 file:(const char *)arg2 function:(const char *)arg3 lineNumber:(int)arg4 message:(id)arg5;
- (long long)defaultMinimumLogLevel;
- (id)init;

@end

