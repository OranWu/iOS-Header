//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtP11AppStoreKit19ActionPresenterView_-Protocol.h"
#import "_TtP11AppStoreKit23ReloadablePresenterView_-Protocol.h"

@class _TtC11AppStoreKit24InAppPurchaseInstallPage, _TtC11AppStoreKit29InstallPageOfferConfiguration;

@protocol _TtP11AppStoreKit37InAppPurchaseInstallPagePresenterView_ <_TtP11AppStoreKit19ActionPresenterView_, _TtP11AppStoreKit23ReloadablePresenterView_>
- (void)removeAllActionsForTarget:(id)arg1;
- (void)addButtonTappedTarget:(id)arg1 action:(SEL)arg2;
- (void)finish;
- (void)showWithProgress:(double)arg1 configuration:(_TtC11AppStoreKit29InstallPageOfferConfiguration *)arg2;
- (void)showPreInstallRedownloadWithConfiguration:(_TtC11AppStoreKit29InstallPageOfferConfiguration *)arg1;
- (void)showPreInstallWithConfiguration:(_TtC11AppStoreKit29InstallPageOfferConfiguration *)arg1;
- (void)showWithConfiguration:(_TtC11AppStoreKit29InstallPageOfferConfiguration *)arg1;
- (void)processWithPage:(_TtC11AppStoreKit24InAppPurchaseInstallPage *)arg1;
@end
