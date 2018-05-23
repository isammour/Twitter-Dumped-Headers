//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSAttributedString, NSDictionary;

@interface T1StyledLabel : UILabel
{
    NSAttributedString *_shadowAttributedText;
    NSDictionary *_defaultAttributes;
    unsigned long long _textTransformation;
}

@property(nonatomic) unsigned long long textTransformation; // @synthesize textTransformation=_textTransformation;
@property(copy, nonatomic) NSDictionary *defaultAttributes; // @synthesize defaultAttributes=_defaultAttributes;
- (void).cxx_destruct;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
