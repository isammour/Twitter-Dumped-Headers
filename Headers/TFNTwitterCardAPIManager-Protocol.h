//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, TFNTwitterAccount;

@protocol TFNTwitterCardAPIManager
- (void)unregisterForPeriodicReadsForCardIdentifier:(NSString *)arg1;
- (void)registerForPeriodicReadsFromCapiURL:(NSString *)arg1 atInterval:(double)arg2 requestData:(NSDictionary *)arg3 account:(TFNTwitterAccount *)arg4 forCardIdentifier:(NSString *)arg5 fireImmediately:(_Bool)arg6;
@end
