//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, TFNTwitterActivityDisplayText;

@interface TFNTwitterGenericNotificationDismissOption : NSObject
{
    TFNTwitterActivityDisplayText *_text;
    NSString *_scribeAction;
    TFNTwitterActivityDisplayText *_ambientFeedbackText;
}

@property(readonly, nonatomic) TFNTwitterActivityDisplayText *ambientFeedbackText; // @synthesize ambientFeedbackText=_ambientFeedbackText;
@property(readonly, nonatomic) NSString *scribeAction; // @synthesize scribeAction=_scribeAction;
@property(readonly, nonatomic) TFNTwitterActivityDisplayText *text; // @synthesize text=_text;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *timelinePlistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithText:(id)arg1 scribeAction:(id)arg2 ambientFeedbackText:(id)arg3;

@end

