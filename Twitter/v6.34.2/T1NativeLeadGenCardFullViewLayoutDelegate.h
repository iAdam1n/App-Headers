/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterCardViewLayoutDelegate.h>

@class TFNTwitterCardStateManager, NSString;

@interface T1NativeLeadGenCardFullViewLayoutDelegate : NSObject <TFNTwitterCardViewLayoutDelegate> {

	TFNTwitterCardStateManager* _cardStateManager;

}

@property (nonatomic,retain) TFNTwitterCardStateManager * cardStateManager;              //@synthesize cardStateManager=_cardStateManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLayoutDelegate;
-(id)_layoutForNativeCardViewModel:(id)arg1 width:(double)arg2 withPreviousLayoutState:(id)arg3 ;
-(BOOL)_layoutState:(id)arg1 isValidForCardContext:(id)arg2 layoutMetrics:(id)arg3 ;
-(BOOL)_layoutState:(id)arg1 isValidForCardContext:(id)arg2 width:(double)arg3 ;
-(id)layoutForCardContext:(id)arg1 layoutMetrics:(id)arg2 withPreviousLayoutState:(id)arg3 ;
-(CGSize)sizeForLayoutState:(id)arg1 ;
-(id)layoutForCardContext:(id)arg1 width:(double)arg2 withPreviousLayoutState:(id)arg3 ;
-(void)layoutSubviewsForLayoutableView:(id)arg1 ;
-(void)setCardStateManager:(TFNTwitterCardStateManager *)arg1 ;
-(BOOL)_cardViewNeedsLayoutForCardContext:(id)arg1 ;
-(TFNTwitterCardStateManager *)cardStateManager;
@end

