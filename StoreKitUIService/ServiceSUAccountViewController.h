//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUAccountViewController.h>

#import "SUStorePageViewControllerResponder-Protocol.h"
#import "ServiceAccountPageEmbedded-Protocol.h"

@class NSString;
@protocol ServiceAccountPageEmbeddedParent;

@interface ServiceSUAccountViewController : SUAccountViewController <SUStorePageViewControllerResponder, ServiceAccountPageEmbedded>
{
    id <ServiceAccountPageEmbeddedParent> _embeddedParent;
}

@property(nonatomic) __weak id <ServiceAccountPageEmbeddedParent> embeddedParent; // @synthesize embeddedParent=_embeddedParent;
- (void).cxx_destruct;
- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

