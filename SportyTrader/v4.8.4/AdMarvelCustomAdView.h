/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@protocol AdMarvelDelegate;
@class NSObject, AdMarvelCustomViewAdHandler, NSMutableDictionary, NSString, UIView, AdMarvelCustomAction;

@interface AdMarvelCustomAdView : UIView {

	NSObject*<AdMarvelDelegate> adMarvelDelegate;
	AdMarvelCustomViewAdHandler* urlHandlerObject;
	NSMutableDictionary* customAdAttributes;
	NSString* originalActiveViewId;
	NSString* activeViewId;
	NSMutableDictionary* imageViews;
	NSMutableDictionary* imageViewButtons;
	NSMutableDictionary* imageViewTimers;
	UIView* initialSuperView;
	CGRect initialFrame;
	AdMarvelCustomAction* initialAction;
	BOOL isAdExpanded;
	BOOL startingStatusBarHidden;
	BOOL animationsDisabled;
	UIView* touchSensorView;

}
-(void)collapseAd;
-(void)expandAd;
-(void)noLongerViewable;
-(void)setAdMarvelDelegate:(id)arg1 ;
-(void)cleanupViewBeforeRelease;
-(void)performInitialAction;
-(void)setupFrame;
-(BOOL)createViewFromXMLDetails:(id)arg1 ;
-(BOOL)createButtonFromXMLDetails:(id)arg1 forViewId:(id)arg2 ;
-(BOOL)createTimerFromXMLDetails:(id)arg1 forViewId:(id)arg2 ;
-(void)handleTimers:(id)arg1 ;
-(void)notifyAdMarvelDelegateOfStateChange:(id)arg1 ;
-(void)stopTimersForViewId:(id)arg1 ;
-(void)startTimersForViewId:(id)arg1 ;
-(BOOL)expandsUp;
-(BOOL)expandsLeft;
-(id)getCollapsedViewId;
-(id)getExpandedViewId;
-(BOOL)isAdCurrentlyExpanded;
-(BOOL)isExpandableAd;
-(id)initWithAdMarvelDelegate:(id)arg1 URLHandler:(id)arg2 superView:(id)arg3 ;
-(BOOL)parseCustomAdXMLData:(id)arg1 attributes:(id)arg2 ofType:(id)arg3 ;
-(void)setActiveImageView:(id)arg1 ;
-(void)stopTimersForActiveViewId;
-(void)startTimersForActiveViewId;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end
