//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSArray, NSString;

@interface T1PromptTextSpec : NSObject <TFNAttributedTextViewDelegate>
{
    NSString *_text;
    NSArray *_activeRanges;
    CDUnknownBlockType _handler;
    struct _NSRange _boldRange;
}

@property(readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSArray *activeRanges; // @synthesize activeRanges=_activeRanges;
@property(readonly, nonatomic) struct _NSRange boldRange; // @synthesize boldRange=_boldRange;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (id)attributedTextViewWithTextAlignment:(long long)arg1 color:(id)arg2 fontBlock:(CDUnknownBlockType)arg3;
- (id)initWithText:(id)arg1 activeRanges:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithText:(id)arg1 boldRange:(struct _NSRange)arg2;
- (id)initWithText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

