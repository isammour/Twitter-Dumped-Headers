//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFSTwitterTimelinePlistSerialization-Protocol.h>

@class NSArray, NSString, NSURL;

@interface TFNTwitterFeedbackAction : NSObject <TFSTwitterTimelinePlistSerialization>
{
    _Bool _hasUndoAction;
    _Bool _dismiss;
    _Bool _shouldDismissReferencingEntries;
    NSString *_type;
    NSString *_URTActionKey;
    NSString *_prompt;
    NSString *_confirmation;
    NSURL *_actionURL;
    NSArray *_childActions;
}

+ (id)_feedbackActionMappingForType:(id)arg1;
@property(readonly, nonatomic) NSArray *childActions; // @synthesize childActions=_childActions;
@property(readonly, nonatomic) _Bool shouldDismissReferencingEntries; // @synthesize shouldDismissReferencingEntries=_shouldDismissReferencingEntries;
@property(readonly, nonatomic, getter=doDismiss) _Bool dismiss; // @synthesize dismiss=_dismiss;
@property(readonly, nonatomic) _Bool hasUndoAction; // @synthesize hasUndoAction=_hasUndoAction;
@property(readonly, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(readonly, nonatomic) NSString *confirmation; // @synthesize confirmation=_confirmation;
@property(readonly, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(readonly, nonatomic) NSString *URTActionKey; // @synthesize URTActionKey=_URTActionKey;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithType:(id)arg1 prompt:(id)arg2 confirmation:(id)arg3 actionURLString:(id)arg4;
- (id)initWithType:(id)arg1 prompt:(id)arg2 confirmation:(id)arg3 actionURLString:(id)arg4 childActions:(id)arg5;
- (id)initWithType:(id)arg1 URTActionKey:(id)arg2 prompt:(id)arg3 confirmation:(id)arg4 actionURLString:(id)arg5 hasUndoAction:(_Bool)arg6 dismiss:(_Bool)arg7 shouldDismissReferencingEntries:(_Bool)arg8 childActions:(id)arg9;
- (id)init;

@end

