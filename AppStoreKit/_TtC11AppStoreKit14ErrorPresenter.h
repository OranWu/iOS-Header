//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreKit-1103/ASKAirplaneModeInquiryDelegate-Protocol.h>

@class NSError, NSString, NSURL;

@interface _TtC11AppStoreKit14ErrorPresenter : NSObject <ASKAirplaneModeInquiryDelegate>
{
    // Error parsing type: , name: networkObserver
    // Error parsing type: , name: airplaneModeInquiry
    // Error parsing type: , name: cellularDataInquiry
    // Error parsing type: , name: view
    // Error parsing type: , name: reasonForNoInternet
    // Error parsing type: , name: error
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)networkReachabilityDidChangeTo:(unsigned int)arg1;
- (void)networkActivityDidEnd;
- (void)networkActivityDidBegin;
- (void)airplaneModeInquiryDidObserveChange:(id)arg1;
@property(nonatomic, copy) NSError *error; // @synthesize error;
@property(nonatomic, readonly) NSURL *settingsURL;
@property(nonatomic, readonly) NSString *message;
@property(nonatomic, readonly) NSString *title;
- (void)update;

@end

