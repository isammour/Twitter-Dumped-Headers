//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSMutableArray;

@interface T1AccessibleBadgesLabel : UILabel
{
    NSMutableArray *_accessibleElements;
}

- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (id)accessibleElements;
- (void)_updateAccessibilityFrames;
- (void)addAccessibleElementForLabel:(id)arg1;
- (void)resetAccessibleElements;

@end
