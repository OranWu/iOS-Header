//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb  8 2018 12:17:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtP11AppStoreKit19ActionPresenterView_-Protocol.h"
#import "_TtP11AppStoreKit22PaginatedPresenterView_-Protocol.h"
#import "_TtP11AppStoreKit23ReloadablePresenterView_-Protocol.h"

@class NSArray, NSString;

@protocol _TtP11AppStoreKit26SearchResultsPresenterView_ <_TtP11AppStoreKit19ActionPresenterView_, _TtP11AppStoreKit22PaginatedPresenterView_, _TtP11AppStoreKit23ReloadablePresenterView_>
@property(nonatomic) _Bool isAutoPlayEnabled;
- (void)searchCompleted;
- (void)showResultsFor:(NSArray *)arg1;
- (void)showNoResultsFor:(NSString *)arg1;
@end
