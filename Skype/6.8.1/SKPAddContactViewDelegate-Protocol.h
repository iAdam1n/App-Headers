//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, SKPAddContactView;

@protocol SKPAddContactViewDelegate <NSObject>
- (void)addContactViewSearchStringWasCleanUp:(SKPAddContactView *)arg1;
- (void)addContactView:(SKPAddContactView *)arg1 textDidChange:(NSString *)arg2;
- (void)addContactView:(SKPAddContactView *)arg1 searchDidTap:(NSString *)arg2;
- (void)addContactView:(SKPAddContactView *)arg1 didSelectContactAtIndexPath:(NSIndexPath *)arg2;
@end
