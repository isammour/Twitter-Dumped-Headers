//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, T1DirectMessageAvatarImageView, T1DismissButton, TFNAttributedTextView, UIImageView, UILabel, _TtC9T1Twitter36DirectMessageSecretConversationBadge;

@interface T1DirectMessageInboxSummaryView : UIView
{
    // Error parsing type: , name: crashlyticsContext
    // Error parsing type: , name: thumbnailImageView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: titleBadgeView
    // Error parsing type: , name: secretConversationBadge
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: timestampLabel
    // Error parsing type: , name: bodyLabel
    // Error parsing type: , name: caretButton
    // Error parsing type: , name: accessoryImageView
    // Error parsing type: , name: columns
}

+ (_Bool)requiresConstraintBasedLayout;
+ (long long)defaultBodyNumberOfLines;
- (CDUnknownBlockType).cxx_destruct;
- (void)layoutMetricsDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) UIImageView *accessoryImageView; // @synthesize accessoryImageView;
@property(nonatomic, readonly) T1DismissButton *caretButton; // @synthesize caretButton;
@property(nonatomic, readonly) TFNAttributedTextView *bodyLabel; // @synthesize bodyLabel;
@property(nonatomic, readonly) UILabel *timestampLabel; // @synthesize timestampLabel;
@property(nonatomic, readonly) UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic, readonly) _TtC9T1Twitter36DirectMessageSecretConversationBadge *secretConversationBadge; // @synthesize secretConversationBadge;
@property(nonatomic, readonly) UIImageView *titleBadgeView; // @synthesize titleBadgeView;
@property(nonatomic, readonly) UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic, readonly) T1DirectMessageAvatarImageView *thumbnailImageView; // @synthesize thumbnailImageView;
@property(nonatomic, retain) NSDictionary *crashlyticsContext; // @synthesize crashlyticsContext;

@end
