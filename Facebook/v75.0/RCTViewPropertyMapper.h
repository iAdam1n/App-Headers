/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, UIView, RCTUIManager;

@interface RCTViewPropertyMapper : NSObject {

	NSNumber* _viewTag;
	UIView* _cachedView;
	RCTUIManager* _uiManager;

}

@property (assign,nonatomic,__weak) UIView * cachedView;                   //@synthesize cachedView=_cachedView - In the implementation block
@property (assign,nonatomic,__weak) RCTUIManager * uiManager;              //@synthesize uiManager=_uiManager - In the implementation block
@property (nonatomic,readonly) NSNumber * viewTag;                         //@synthesize viewTag=_viewTag - In the implementation block
-(RCTUIManager *)uiManager;
-(id)initWithViewTag:(id)arg1 uiManager:(id)arg2 ;
-(void)updateViewWithDictionary:(id)arg1 ;
-(NSNumber *)viewTag;
-(UIView *)cachedView;
-(void)setCachedView:(UIView *)arg1 ;
-(void)setUiManager:(RCTUIManager *)arg1 ;
-(id)init;
@end
