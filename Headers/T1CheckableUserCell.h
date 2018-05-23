//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UserCell.h>

@class TFNCheckmarkControl;

@interface T1CheckableUserCell : T1UserCell
{
    TFNCheckmarkControl *_checkmarkControl;
    long long _checkmarkStyle;
    CDUnknownBlockType _checkmarkDidChangeValueBlock;
}

+ (double)private_insetForCheckmarkStyle:(long long)arg1;
+ (id)private_insetLayoutMetricsForLayoutMetrics:(id)arg1 checkmarkStyle:(long long)arg2;
+ (double)estimatedHeightForUserViewModel:(id)arg1 cellStyle:(long long)arg2 avatarSize:(struct CGSize)arg3 showBio:(_Bool)arg4 bioMaxLines:(unsigned long long)arg5 showUserBlocked:(_Bool)arg6 showDesignatorBadge:(_Bool)arg7 expanded:(_Bool)arg8 layoutMetrics:(id)arg9 checkmarkStyle:(long long)arg10;
+ (double)heightForUserViewModel:(id)arg1 account:(id)arg2 cellStyle:(long long)arg3 followControlType:(unsigned long long)arg4 followControlVariant:(unsigned long long)arg5 avatarSize:(struct CGSize)arg6 showBio:(_Bool)arg7 bioMaxLines:(unsigned long long)arg8 showUserBlocked:(_Bool)arg9 showDesignatorBadge:(_Bool)arg10 expanded:(_Bool)arg11 layoutMetrics:(id)arg12 checkmarkStyle:(long long)arg13;
@property(copy, nonatomic) CDUnknownBlockType checkmarkDidChangeValueBlock; // @synthesize checkmarkDidChangeValueBlock=_checkmarkDidChangeValueBlock;
@property(nonatomic) long long checkmarkStyle; // @synthesize checkmarkStyle=_checkmarkStyle;
- (void).cxx_destruct;
- (void)private_checkmarkDidChangeValue:(id)arg1;
- (void)sizeThatFitsHelper:(id)arg1 layoutSubviewsForView:(id)arg2 atWidth:(double)arg3;
- (id)calculatedLayoutMetrics;
@property(nonatomic) _Bool checkmarkInteractionEnabled;
@property(nonatomic) _Bool checkmarkChecked;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

