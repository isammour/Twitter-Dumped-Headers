//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface TFNDirectMessageQuickReplyOption : NSObject
{
    NSString *_optionID;
    NSString *_label;
    NSString *_descriptionLabel;
}

@property(readonly, copy, nonatomic) NSString *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) NSString *optionID; // @synthesize optionID=_optionID;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *valueDetail;
@property(readonly, copy, nonatomic) NSString *valueName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithOptionID:(id)arg1 label:(id)arg2 descriptionLabel:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIImage *valueIcon;
@property(readonly, copy, nonatomic) NSString *valueShortName;

@end

