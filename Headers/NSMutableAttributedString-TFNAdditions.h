//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (TFNAdditions)
- (void)tfn_insertImage:(id)arg1 atIndex:(long long)arg2;
- (void)tfn_insertVectorImageNamed:(id)arg1 tintColor:(id)arg2 pointSize:(double)arg3 atIndex:(long long)arg4;
- (double)_lineHeightForFont:(id)arg1;
- (void)_setDefaultParagraphStyleWithFont:(id)arg1;
- (void)_setFont:(id)arg1 lineSpacing:(double)arg2;
- (void)_setFont:(id)arg1 lineHeight:(double)arg2 firstLineHeadIndent:(double)arg3;
- (void)_setFont:(id)arg1 alignment:(long long)arg2 lineBreakMode:(long long)arg3 paragraphSpacing:(double)arg4 lineHeight:(double)arg5;
- (struct _NSRange)_stringRange;
- (void)setColor:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)setColor:(id)arg1;
- (void)setParagraphStyle:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)setParagraphStyle:(id)arg1;
- (void)setFont:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)setFont:(id)arg1;
- (id)initWithString:(id)arg1 font:(id)arg2 lineHeight:(double)arg3 firstLineHeadIndent:(double)arg4;
- (id)initWithString:(id)arg1 font:(id)arg2 alignment:(long long)arg3 lineBreakMode:(long long)arg4 paragraphSpacing:(double)arg5 lineHeight:(double)arg6;
- (id)initWithString:(id)arg1 font:(id)arg2 alignment:(long long)arg3 lineBreakMode:(long long)arg4 paragraphSpacing:(double)arg5;
- (id)initWithString:(id)arg1 font:(id)arg2 alignment:(long long)arg3 lineBreakMode:(long long)arg4;
- (id)initWithString:(id)arg1 font:(id)arg2 lineSpacing:(double)arg3;
- (id)initWithString:(id)arg1 font:(id)arg2;
@end

