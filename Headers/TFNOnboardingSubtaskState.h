//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TFNOnboardingSubtaskState : NSObject
{
    NSString *_subtaskID;
    NSString *_subtaskTypeName;
    NSString *_selectedLinkID;
}

@property(retain, nonatomic) NSString *selectedLinkID; // @synthesize selectedLinkID=_selectedLinkID;
- (void).cxx_destruct;
- (void)addStateToJSONDictionary:(id)arg1;
- (id)JSONDictionary;
- (id)initForSubtask:(id)arg1;

@end

