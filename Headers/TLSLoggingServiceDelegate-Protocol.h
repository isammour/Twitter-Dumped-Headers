//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, TLSLoggingService;

@protocol TLSLoggingServiceDelegate <NSObject>

@optional
- (unsigned long long)tls_loggingService:(TLSLoggingService *)arg1 lengthToLogForMessageExceedingMaxSafeLength:(unsigned long long)arg2 level:(unsigned long long)arg3 channel:(NSString *)arg4 file:(NSString *)arg5 function:(NSString *)arg6 line:(long long)arg7 contextObject:(id)arg8 message:(NSString *)arg9;
@end

