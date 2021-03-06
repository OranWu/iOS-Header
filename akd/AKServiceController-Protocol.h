//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol AKAuthHandler, AKURLRequestProvider;

@protocol AKServiceController <NSObject>
- (void)executeRequestWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)setAuthenticationDelegate:(id <AKAuthHandler>)arg1;
- (id)initWithRequestProvider:(id <AKURLRequestProvider>)arg1;
@end

