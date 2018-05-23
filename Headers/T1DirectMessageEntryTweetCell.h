//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageEntryBaseCell.h>

@class NSArray, T1DirectMessageAbstractConversationEntryViewModel;
@protocol T1DirectMessageAbstractEntryCellDelegate;

@interface T1DirectMessageEntryTweetCell : T1DirectMessageEntryBaseCell
{
    // Error parsing type: , name: tweetDelegate
    // Error parsing type: , name: statusView
    // Error parsing type: , name: statusBubbleView
    // Error parsing type: , name: statusHeightConstraint
}

- (CDUnknownBlockType).cxx_destruct;
- (void)statusDidUpdate:(id)arg1;
- (void)updateConstraints;
- (void)tintColorDidChange;
@property(nonatomic, retain) T1DirectMessageAbstractConversationEntryViewModel *entryViewModel;
@property(nonatomic, readonly) NSArray *accessibilityLinks;
@property(nonatomic) __weak id <T1DirectMessageAbstractEntryCellDelegate> delegate;
- (id)initWithFrame:(struct CGRect)arg1;

@end

