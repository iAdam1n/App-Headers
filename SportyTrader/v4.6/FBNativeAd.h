/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FBAdCommandProcessorDelegate.h>
#import <SportyTrader/FBAdViewabilityValidatorDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBNativeAdDelegate;
@class FBAdCommandProcessor, FBAdViewabilityValidator, NSMutableArray, UIViewController, NSString, FBAdImage, FBNativeAdDataModel, NSURL, UIView;

@interface FBNativeAd : NSObject <FBAdCommandProcessorDelegate, FBAdViewabilityValidatorDelegate, UIGestureRecognizerDelegate> {

	FBAdCommandProcessor* _commandProcessor;
	BOOL _hasCalledLoadAd;
	BOOL _hasImpressionLogged;
	BOOL _hasClickLogged;
	FBAdViewabilityValidator* _viewabilityValidator;
	NSMutableArray* _gestureRecognizers;
	UIViewController* _viewController;
	int _minViewabilityPercentage;
	BOOL _viewabilityValidatorDisabled;
	NSString* _placementID;
	FBAdStarRating _starRating;
	NSString* _title;
	NSString* _socialContext;
	NSString* _callToAction;
	FBAdImage* _icon;
	FBAdImage* _coverImage;
	NSString* _body;
	id<FBNativeAdDelegate> _delegate;
	FBNativeAdDataModel* _dataModel;
	FBAdImage* _adChoicesIcon;
	NSURL* _adChoicesLinkURL;
	UIView* _nativeAdView;

}

@property (nonatomic,copy) NSString * placementID;                                //@synthesize placementID=_placementID - In the implementation block
@property (assign,nonatomic) FBAdStarRating starRating;                           //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * socialContext;                              //@synthesize socialContext=_socialContext - In the implementation block
@property (nonatomic,copy) NSString * callToAction;                               //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,retain) FBAdImage * icon;                                    //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) FBAdImage * coverImage;                              //@synthesize coverImage=_coverImage - In the implementation block
@property (nonatomic,copy) NSString * body;                                       //@synthesize body=_body - In the implementation block
@property (assign,nonatomic,__weak) id<FBNativeAdDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBNativeAdDataModel * dataModel;                     //@synthesize dataModel=_dataModel - In the implementation block
@property (nonatomic,retain) FBAdImage * adChoicesIcon;                           //@synthesize adChoicesIcon=_adChoicesIcon - In the implementation block
@property (nonatomic,copy) NSURL * adChoicesLinkURL;                              //@synthesize adChoicesLinkURL=_adChoicesLinkURL - In the implementation block
@property (assign,nonatomic,__weak) UIView * nativeAdView;                        //@synthesize nativeAdView=_nativeAdView - In the implementation block
@property (assign,nonatomic) BOOL viewabilityValidatorDisabled;                   //@synthesize viewabilityValidatorDisabled=_viewabilityValidatorDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewToNativeAdMap;
-(void)logImpression;
-(void)checkManualLoggingEligibility;
-(id)getManualLoggingExtraData;
-(void)handleClickWithViewController:(id)arg1 ;
-(void)unregisterViewInternal;
-(void)populateFromDataModel:(id)arg1 minViewabilityPercentage:(int)arg2 ;
-(void)setDataModel:(FBNativeAdDataModel *)arg1 ;
-(FBAdStarRating)starRating;
-(void)setStarRating:(FBAdStarRating)arg1 ;
-(NSString *)socialContext;
-(void)setSocialContext:(NSString *)arg1 ;
-(NSString *)callToAction;
-(void)setCallToAction:(NSString *)arg1 ;
-(FBAdImage *)adChoicesIcon;
-(void)setAdChoicesIcon:(FBAdImage *)arg1 ;
-(NSURL *)adChoicesLinkURL;
-(void)setAdChoicesLinkURL:(NSURL *)arg1 ;
-(void)setViewabilityValidatorDisabled:(BOOL)arg1 ;
-(FBNativeAdDataModel *)dataModel;
-(void)registerViewForInteraction:(id)arg1 withViewController:(id)arg2 withClickableViews:(id)arg3 ;
-(BOOL)isAdValid;
-(BOOL)viewabilityValidatorDisabled;
-(void)attachTapGestureRecognizer:(id)arg1 ;
-(void)detachTapGestureRecognizers;
-(void)handleClickWithViewController:(id)arg1 extraData:(id)arg2 ;
-(void)logImpressionWithExtraData:(id)arg1 ;
-(id)viewControllerForPresentingModalView;
-(void)viewControllerDismissed:(id)arg1 ;
-(BOOL)viewDidAppearOnScreen;
-(id)initWithPlacementID:(id)arg1 ;
-(void)loadAd;
-(void)disableViewabilityValidator;
-(void)registerViewForInteraction:(id)arg1 withViewController:(id)arg2 ;
-(void)unregisterView;
-(NSString *)placementID;
-(void)setPlacementID:(NSString *)arg1 ;
-(UIView *)nativeAdView;
-(void)setNativeAdView:(UIView *)arg1 ;
-(FBAdImage *)icon;
-(void)dealloc;
-(void)setDelegate:(id<FBNativeAdDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<FBNativeAdDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(NSString *)title;
-(NSString *)body;
-(void)setIcon:(FBAdImage *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(void)handleTap:(id)arg1 ;
-(void)setCoverImage:(FBAdImage *)arg1 ;
-(FBAdImage *)coverImage;
@end

