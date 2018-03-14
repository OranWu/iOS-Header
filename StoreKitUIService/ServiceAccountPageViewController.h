//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SKUIRedeemViewCameraOverrideDelegate-Protocol.h"
#import "SKUIServiceAccountPageViewController-Protocol.h"
#import "SUClientInterfaceDelegate-Protocol.h"
#import "ServiceAccountPageEmbeddedParent-Protocol.h"

@class NSString, SKUIConfigurationPreloader, SKUIRedeemCameraViewController, SUClientInterface, SUNavigationController;
@protocol ServiceAccountPageEmbedded;

@interface ServiceAccountPageViewController : UIViewController <SKUIServiceAccountPageViewController, SUClientInterfaceDelegate, ServiceAccountPageEmbeddedParent, SKUIRedeemViewCameraOverrideDelegate>
{
    SKUIRedeemCameraViewController *_redeemCameraViewController;
    SUClientInterface *_clientInterface;
    SUNavigationController *_containerNavigationController;
    SKUIConfigurationPreloader *_configurationPreloader;
    UIViewController<ServiceAccountPageEmbedded> *_underlyingViewController;
    UIViewController *_childViewController;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(retain, nonatomic) UIViewController<ServiceAccountPageEmbedded> *underlyingViewController; // @synthesize underlyingViewController=_underlyingViewController;
@property(retain, nonatomic) SKUIConfigurationPreloader *configurationPreloader; // @synthesize configurationPreloader=_configurationPreloader;
@property(retain, nonatomic) SUNavigationController *containerNavigationController; // @synthesize containerNavigationController=_containerNavigationController;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void).cxx_destruct;
- (id)_clientViewControllerProxy;
- (void)clientInterface:(id)arg1 overrideCreditCardPresentationFromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)overrideIPadRedeemCamera:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performRedeemOperationWithCode:(id)arg1 cameraRecognized:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)loadWithURL:(id)arg1;
- (void)_willAppearInRemoteViewController;
- (void)viewDidLoad;
- (void)dismissHostViewControllerWithResult:(_Bool)arg1 error:(id)arg2;
- (void)dismissHostViewController;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

