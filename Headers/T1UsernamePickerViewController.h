//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UsernameViewController.h>

#import <T1Twitter/TFNValuePicker-Protocol.h>

@class NSSet, NSString;
@protocol TFNPickableValue;

@interface T1UsernamePickerViewController : T1UsernameViewController <TFNValuePicker>
{
    CDUnknownBlockType _didPickValueBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didPickValueBlock; // @synthesize didPickValueBlock=_didPickValueBlock;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *pickedValues;
@property(readonly, nonatomic) id <TFNPickableValue> pickedValue;
@property(readonly, nonatomic) _Bool canPickMultipleValues;
- (void)submitForm;
- (id)initWithAccount:(id)arg1 options:(long long)arg2 prefillUsername:(id)arg3 scribeContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long index;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *valueQuery;

@end
