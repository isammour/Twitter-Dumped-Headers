//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DeleteContactsOperationDelegate-Protocol.h>
#import <T1Twitter/T1UploadContactsOperationDelegate-Protocol.h>

@class NSOperation;

@protocol T1SynchronizeContactsOperationDelegate <T1DeleteContactsOperationDelegate, T1UploadContactsOperationDelegate>
- (void)synchronizeContactsOperationDidFinish:(NSOperation *)arg1;
@end
