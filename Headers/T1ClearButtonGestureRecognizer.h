//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class T1ClearButton, T1SectionClearHeaderCell;

@interface T1ClearButtonGestureRecognizer : UIGestureRecognizer
{
    T1ClearButton *_button;
    T1SectionClearHeaderCell *_clearCell;
}

@property(nonatomic) __weak T1SectionClearHeaderCell *clearCell; // @synthesize clearCell=_clearCell;
@property(nonatomic) __weak T1ClearButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
