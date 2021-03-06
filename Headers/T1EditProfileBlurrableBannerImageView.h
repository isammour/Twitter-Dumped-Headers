//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, TFNTwitterUser, UIImage;

@interface T1EditProfileBlurrableBannerImageView : UIImageView
{
    NSString *_accountID;
    TFNTwitterUser *_user;
    UIImage *_customImage;
    UIImage *_fetchedImage;
}

@property(retain, nonatomic) UIImage *fetchedImage; // @synthesize fetchedImage=_fetchedImage;
@property(retain, nonatomic) UIImage *customImage; // @synthesize customImage=_customImage;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)_t1_updateBaseImage;
- (void)setTip_fetchedImage:(id)arg1;
- (id)tip_fetchedImage;
- (void)_commonInitEditProfileBlurrableBannerImageView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

