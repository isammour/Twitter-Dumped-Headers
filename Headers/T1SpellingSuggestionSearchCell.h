//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTextCell.h>

@class TFNAttributedTextView, TFNTwitterSearchSpellingCorrection;

@interface T1SpellingSuggestionSearchCell : TFNTextCell
{
    TFNAttributedTextView *_originalTextView;
    TFNAttributedTextView *_correctionTextView;
    TFNTwitterSearchSpellingCorrection *_correction;
}

+ (id)_subTitleForSpelling:(id)arg1;
+ (id)_titleForSpelling:(id)arg1;
+ (double)heightForCorrection:(id)arg1 layoutMetrics:(id)arg2;
+ (id)cellForTableView:(id)arg1 indexPath:(id)arg2 spellingCorrection:(id)arg3 layoutMetrics:(id)arg4;
@property(retain, nonatomic) TFNTwitterSearchSpellingCorrection *correction; // @synthesize correction=_correction;
@property(retain, nonatomic) TFNAttributedTextView *correctionTextView; // @synthesize correctionTextView=_correctionTextView;
@property(retain, nonatomic) TFNAttributedTextView *originalTextView; // @synthesize originalTextView=_originalTextView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
