//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVChatContributorTableViewCell.h>

@class PTVMessage;

@interface PTVChatContributorTableViewCellKVO : PTVChatContributorTableViewCell
{
    PTVMessage *_message;
}

+ (id)bottomStringForMessage:(id)arg1;
+ (id)topStringForMessage:(id)arg1;
@property(retain, nonatomic) PTVMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)handleTap;
- (void)executeState;
- (void)beginFadeOutAnimation;

@end

