//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TFNTwitterStatus, TFNTwitterUser;
@protocol TFNDirectMessageConversation, TFNDirectMessageEntry;

@interface T1BlockOrReportActionContext : NSObject
{
    _Bool _shouldDismissModals;
    unsigned long long _blockOrReportSource;
    TFNTwitterUser *_targetUser;
    TFNTwitterStatus *_targetStatus;
    NSString *_targetMomentID;
    id <TFNDirectMessageConversation> _targetDirectMessageConversation;
    id <TFNDirectMessageEntry> _targetDirectMessage;
    NSString *_scribePage;
    NSString *_scribeSection;
    NSString *_scribeComponent;
    NSString *_scribeElement;
    NSString *_sourcePage;
    unsigned long long _contextType;
    CDUnknownBlockType _completion;
}

+ (id)contextForReportingDirectMessageConversation:(id)arg1 directMessage:(id)arg2 scribePage:(id)arg3 scribeSection:(id)arg4 scribeComponent:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)contextForReportingMomentID:(id)arg1 status:(id)arg2 user:(id)arg3 scribePage:(id)arg4 scribeSection:(id)arg5 scribeComponent:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (id)contextForReportingStatus:(id)arg1 scribePage:(id)arg2 scribeSection:(id)arg3 scribeComponent:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)contextForReportingUser:(id)arg1 scribePage:(id)arg2 scribeSection:(id)arg3 scribeComponent:(id)arg4 sourcePage:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)contextForBlockingStatus:(id)arg1 scribePage:(id)arg2 scribeSection:(id)arg3 scribeComponent:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)contextForBlockingUser:(id)arg1 scribePage:(id)arg2 scribeSection:(id)arg3 scribeComponent:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_configureScribeElementForReportingContext:(id)arg1;
+ (id)contextForBlockingOrReportingWithSource:(id)arg1 targetStatus:(id)arg2 targetMomentID:(id)arg3 targetDirectMessageConversation:(id)arg4 targetDirectMessage:(id)arg5 scribePage:(id)arg6 scribeSection:(id)arg7 scribeComponent:(id)arg8 sourcePage:(id)arg9 mode:(unsigned long long)arg10 contextType:(unsigned long long)arg11 completion:(CDUnknownBlockType)arg12;
+ (id)contextForBlockingOrReporting:(id)arg1 targetStatus:(id)arg2 targetMomentID:(id)arg3 scribePage:(id)arg4 scribeSection:(id)arg5 scribeComponent:(id)arg6 mode:(unsigned long long)arg7 contextType:(unsigned long long)arg8 completion:(CDUnknownBlockType)arg9;
@property(nonatomic) _Bool shouldDismissModals; // @synthesize shouldDismissModals=_shouldDismissModals;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long contextType; // @synthesize contextType=_contextType;
@property(copy, nonatomic) NSString *sourcePage; // @synthesize sourcePage=_sourcePage;
@property(copy, nonatomic) NSString *scribeElement; // @synthesize scribeElement=_scribeElement;
@property(copy, nonatomic) NSString *scribeComponent; // @synthesize scribeComponent=_scribeComponent;
@property(copy, nonatomic) NSString *scribeSection; // @synthesize scribeSection=_scribeSection;
@property(copy, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
@property(retain, nonatomic) id <TFNDirectMessageEntry> targetDirectMessage; // @synthesize targetDirectMessage=_targetDirectMessage;
@property(retain, nonatomic) id <TFNDirectMessageConversation> targetDirectMessageConversation; // @synthesize targetDirectMessageConversation=_targetDirectMessageConversation;
@property(copy, nonatomic) NSString *targetMomentID; // @synthesize targetMomentID=_targetMomentID;
@property(retain, nonatomic) TFNTwitterStatus *targetStatus; // @synthesize targetStatus=_targetStatus;
@property(retain, nonatomic) TFNTwitterUser *targetUser; // @synthesize targetUser=_targetUser;
@property(nonatomic) unsigned long long blockOrReportSource; // @synthesize blockOrReportSource=_blockOrReportSource;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *conversationSection;
- (id)clientLocation;

@end

