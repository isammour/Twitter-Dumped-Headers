//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormBaseCell.h>

@class TFNFormCustomItem, UIImageView;

@interface TFNFormCustomCell : TFNFormBaseCell
{
    UIImageView *_disclosureView;
}

+ (id)formViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 reuseIdentifier:(id)arg4 indexPath:(id)arg5 initialization:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)disclosureView;
@property(readonly, nonatomic) TFNFormCustomItem *customItem;

@end

