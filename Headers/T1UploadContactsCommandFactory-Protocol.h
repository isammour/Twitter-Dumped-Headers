//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, TFSTwitterAPICommand;

@protocol T1UploadContactsCommandFactory
- (TFSTwitterAPICommand *)createUploadCommand:(NSArray *)arg1 uploadProgressBlock:(void (^)(float))arg2 completionBlock:(void (^)(_Bool, id, NSError *))arg3;
@end

