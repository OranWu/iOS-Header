//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SKUIItem, SKUIStorePageViewController;

@protocol SKUIStorePageDelegate <NSObject>

@optional
- (void)storePage:(SKUIStorePageViewController *)arg1 showStorePageForURL:(NSURL *)arg2;
- (void)storePage:(SKUIStorePageViewController *)arg1 showProductPageForItem:(SKUIItem *)arg2;
@end

