//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVChatTableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface PTVChatLiveOrLeftTableViewCell : PTVChatTableViewCell
{
    UIImageView *_liveAudioImage;
    UIView *_containerView;
    UILabel *_messageLabel;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)typeState;
- (id)containerView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end

