//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtP11AppStoreKit19ActionPresenterView_-Protocol.h"

@class NSString;

@protocol _TtP11AppStoreKit24OfferButtonPresenterView_ <_TtP11AppStoreKit19ActionPresenterView_>
@property(nonatomic, copy) NSString *accessibilityOfferButtonString;
- (void)removeAllActionsForTarget:(id)arg1;
- (void)addButtonTappedTarget:(id)arg1 action:(SEL)arg2;
- (void)showRedownloadWithAligned:(long long)arg1 theme:(long long)arg2;
- (void)showLoadingWithAligned:(long long)arg1 theme:(long long)arg2;
- (void)showWithProgress:(double)arg1 aligned:(long long)arg2 theme:(long long)arg3;
- (void)showWithText:(NSString *)arg1 theme:(long long)arg2;
- (void)showWithText:(NSString *)arg1 subtitleText:(NSString *)arg2 subtitlePosition:(long long)arg3 theme:(long long)arg4;
- (void)showWithEnabled:(_Bool)arg1;
@end
