//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView, _TtC11AppStoreKit18HttpTemplateAction, _TtC8AppStore16DynamicTypeLabel, _TtC8AppStore17StarRatingControl;

@interface _TtC8AppStore34ProductTapToRateCollectionViewCell : UICollectionViewCell
{
    // Error parsing type: , name: horizontalMinPadding
    // Error parsing type: , name: separatorView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: ratingControl
    // Error parsing type: , name: rateAction
}

+ (double)wrappedCellHeight;
+ (double)defaultCellHeight;
+ (long long)wrappedCharacterLimit;
- (CDUnknownBlockType).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (void)ratingChangedWithSender:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, retain) _TtC11AppStoreKit18HttpTemplateAction *rateAction; // @synthesize rateAction;
@property(nonatomic, readonly) _TtC8AppStore17StarRatingControl *ratingControl; // @synthesize ratingControl;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic, readonly) UIView *separatorView; // @synthesize separatorView;

@end

