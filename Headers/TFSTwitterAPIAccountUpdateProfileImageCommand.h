//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSData, NSString, TFNTwitterAccountModel;

@interface TFSTwitterAPIAccountUpdateProfileImageCommand : TFSTwitterAPICommand
{
    TFNTwitterAccountModel *_accountModel;
    NSData *_imageData;
    NSString *_imageFileName;
    CDUnknownBlockType _responsePreprocessBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType responsePreprocessBlock; // @synthesize responsePreprocessBlock=_responsePreprocessBlock;
@property(readonly, nonatomic) NSString *imageFileName; // @synthesize imageFileName=_imageFileName;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) TFNTwitterAccountModel *accountModel; // @synthesize accountModel=_accountModel;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 imageData:(id)arg4 imageFileName:(id)arg5 source:(unsigned long long)arg6 responsePreprocessBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

