//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVInChatPromptTableViewCell.h>

@class PTVMessage;

@interface PTVInChatPromptTableViewCellKVO : PTVInChatPromptTableViewCell
{
    PTVMessage *_message;
}

@property(retain, nonatomic) PTVMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)executeState;
- (void)beginFadeOutAnimation;

@end

