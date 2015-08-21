/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, UIScrollView;

@interface FBContentInsetTracker : NSObject {

	NSMutableDictionary* _adjustmentContributions;
	NSMutableDictionary* _scrollIndicatorAdjustmentContributions;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsetAdjustment; 
@property (nonatomic,readonly) UIEdgeInsets scrollIndicatorInsetAdjustment; 
-(UIEdgeInsets)_insetsInDictionary:(id)arg1 forKey:(id)arg2 ;
-(UIEdgeInsets)contentInsetForKey:(id)arg1 ;
-(UIEdgeInsets)scrollIndicatorInsetForKey:(id)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
-(void)setScrollIndicatorInset:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
-(void)removeContentInsetForKey:(id)arg1 ;
-(void)removeScrollIndicatorInsetForKey:(id)arg1 ;
-(UIEdgeInsets)_sumInsetsInDictionary:(id)arg1 ;
-(void)setContentAndScrollIndicatorInset:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
-(void)removeContentAndScrollIndicatorInsetForKey:(id)arg1 ;
-(UIEdgeInsets)contentInsetAdjustment;
-(UIEdgeInsets)scrollIndicatorInsetAdjustment;
-(id)init;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(id)initWithScrollView:(id)arg1 ;
@end

