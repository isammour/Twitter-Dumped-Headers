//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVBroadcastDetailsTableViewCell.h>

@class PTVTitleAndIconView, UILabel;

@interface PTVBroadcastTotalStarsCell : PTVBroadcastDetailsTableViewCell
{
    UILabel *_titleLabel;
    PTVTitleAndIconView *_starAmountLabel;
    long long _starAmount;
}

+ (double)CellHeight;
@property(nonatomic) long long starAmount; // @synthesize starAmount=_starAmount;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

