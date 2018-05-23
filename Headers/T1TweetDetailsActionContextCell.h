//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class NSString, UILabel, UIView;

@interface T1TweetDetailsActionContextCell : TFNTableViewCell
{
    _Bool _showConversationConnector;
    UILabel *_actionLabel;
    UIView *_conversationConnectorView;
}

+ (double)heightForActionText:(id)arg1 tableWidth:(double)arg2 contentPadding:(struct UIEdgeInsets)arg3;
@property(retain, nonatomic) UIView *conversationConnectorView; // @synthesize conversationConnectorView=_conversationConnectorView;
@property(retain, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(nonatomic) _Bool showConversationConnector; // @synthesize showConversationConnector=_showConversationConnector;
- (void).cxx_destruct;
- (void)private_updateConversationConnector;
@property(copy, nonatomic) NSString *actionLabelText;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

