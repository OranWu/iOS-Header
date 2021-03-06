//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface AppReceiptRefreshOperationOptions : NSObject <NSCopying>
{
    _Bool _needsAuthentication;
    _Bool _performSinfMirartionCheckBeforeFailing;
    _Bool _skipAttribution;
    unsigned long long _receiptFlags;
    NSString *_bundleIdentifier;
    long long _authenticationPromptStyle;
    NSNumber *_targetAccountID;
}

@property(copy, nonatomic) NSNumber *targetAccountID; // @synthesize targetAccountID=_targetAccountID;
@property(nonatomic) _Bool skipAttribution; // @synthesize skipAttribution=_skipAttribution;
@property(nonatomic) _Bool performSinfMirartionCheckBeforeFailing; // @synthesize performSinfMirartionCheckBeforeFailing=_performSinfMirartionCheckBeforeFailing;
@property(nonatomic) _Bool needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(nonatomic) long long authenticationPromptStyle; // @synthesize authenticationPromptStyle=_authenticationPromptStyle;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) unsigned long long receiptFlags; // @synthesize receiptFlags=_receiptFlags;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *URLBagKey;
- (id)initWithReceiptFlags:(unsigned long long)arg1;

@end

