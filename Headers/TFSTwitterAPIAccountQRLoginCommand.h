//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSString;

@interface TFSTwitterAPIAccountQRLoginCommand : TFSTwitterAPICommand
{
    NSString *_qrCode;
}

@property(retain, nonatomic) NSString *qrCode; // @synthesize qrCode=_qrCode;
- (void).cxx_destruct;
- (id)initWithService:(id)arg1 accountID:(id)arg2 qrCode:(id)arg3 source:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

