//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@class NSError, PTVMergeParticipantUser, PTVUserModelController;

@protocol PTVUserModelControllerDelegate <NSObject>
- (void)userModelController:(PTVUserModelController *)arg1 didLoadUser:(PTVMergeParticipantUser *)arg2 withError:(NSError *)arg3;
@end

