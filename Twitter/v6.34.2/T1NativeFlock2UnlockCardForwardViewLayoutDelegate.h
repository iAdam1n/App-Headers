/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterBaseCardViewLayoutDelegate.h>
#import <Twitter/TFNTwitterBaseCardViewLayoutStateCreator.h>

@class NSString;

@interface T1NativeFlock2UnlockCardForwardViewLayoutDelegate : TFNTwitterBaseCardViewLayoutDelegate <TFNTwitterBaseCardViewLayoutStateCreator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLayoutDelegate;
-(id)layoutForCardContext:(id)arg1 displayAreaWidth:(double)arg2 contentRect:(CGRect)arg3 withPreviousLayoutState:(id)arg4 ;
-(void)layoutSubviewsForLayoutableView:(id)arg1 withState:(id)arg2 ;
-(id)_layoutForNativeCardViewModel:(id)arg1 width:(double)arg2 withPreviousLayoutState:(id)arg3 ;
-(id)init;
@end

