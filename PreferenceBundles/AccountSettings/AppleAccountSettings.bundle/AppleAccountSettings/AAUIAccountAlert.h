//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AAUIAccountAlert : NSObject
{
    NSString *_alertTitle;
    NSString *_alertMsg;
    CDUnknownBlockType _alertAction;
    NSString *_alertActionMsg;
}

- (void).cxx_destruct;
- (void)performAction;
@property(readonly, copy, nonatomic) NSString *actionMessage;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithTitle:(id)arg1 message:(id)arg2 actionMessage:(id)arg3 action:(CDUnknownBlockType)arg4;

@end
