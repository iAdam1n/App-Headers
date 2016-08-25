/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUITabBarViewController.h>
#import <eBay/EBUAppNavigatorRootViewControllerProtocol.h>

@class EBUAccessibilityGroup, NSString;

@interface EBUAppTabBarViewController : EUITabBarViewController <EBUAppNavigatorRootViewControllerProtocol> {

	BOOL _onBoardingInitialized;
	EBUAccessibilityGroup* _accessibilityGroup;

}

@property (nonatomic,readonly) EBUAccessibilityGroup * accessibilityGroup;              //@synthesize accessibilityGroup=_accessibilityGroup - In the implementation block
@property (assign,nonatomic) BOOL onBoardingInitialized;                                //@synthesize onBoardingInitialized=_onBoardingInitialized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EBUAccessibilityGroup *)accessibilityGroup;
-(void)attemptShowOnBoarding;
-(BOOL)onBoardingInitialized;
-(void)setOnBoardingInitialized:(BOOL)arg1 ;
-(BOOL)tabBar:(id)arg1 shouldSelectTabIndex:(long long)arg2 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

