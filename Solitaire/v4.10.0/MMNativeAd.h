/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/MMAd.h>
#import <SolitaireFree/MMNativeEventForwarder.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MMNativeAdDelegate, MMNativeAdapter;
@class NSString, UIViewController, MMNativeLink, NSArray, NSRecursiveLock, MMReport, NSMutableDictionary, NSDate, NSTimer, NSDictionary, UILabel, UIImageView, UIButton;

@interface MMNativeAd : MMAd <MMNativeEventForwarder, UIGestureRecognizerDelegate> {

	BOOL _isValid;
	BOOL _nativeLoadInProgress;
	BOOL _firedImpression;
	id<MMNativeAdDelegate> _delegate;
	NSString* _type;
	id<MMNativeAdapter> _adapter;
	UIViewController* _viewControllerForPresentingModalView;
	MMNativeLink* _defaultActionLink;
	UIViewController* _currentRootViewController;
	NSArray* _supportedTypes;
	NSRecursiveLock* _downloadLock;
	MMReport* _activeReport;
	NSMutableDictionary* _accessedComponents;
	NSMutableDictionary* _loadedComponents;
	NSDate* _expirationDate;
	NSTimer* _timer;

}

@property (nonatomic,readonly) NSArray * supportedTypes; 
@property (nonatomic,readonly) NSString * titleText; 
@property (nonatomic,readonly) NSString * bodyText; 
@property (nonatomic,readonly) NSString * callToActionText; 
@property (nonatomic,readonly) NSDictionary * iconImageInfo; 
@property (nonatomic,readonly) NSDictionary * mainImageInfo; 
@property (nonatomic,readonly) NSString * disclaimerText; 
@property (nonatomic,retain) id<MMNativeAdapter> adapter;                                          //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,retain) UIViewController * viewControllerForPresentingModalView;              //@synthesize viewControllerForPresentingModalView=_viewControllerForPresentingModalView - In the implementation block
@property (nonatomic,retain) MMNativeLink * defaultActionLink;                                     //@synthesize defaultActionLink=_defaultActionLink - In the implementation block
@property (nonatomic,retain) UIViewController * currentRootViewController;                         //@synthesize currentRootViewController=_currentRootViewController - In the implementation block
@property (nonatomic,retain) NSArray * supportedTypes;                                             //@synthesize supportedTypes=_supportedTypes - In the implementation block
@property (nonatomic,retain) NSString * type;                                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL isValid;                                                         //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * downloadLock;                                       //@synthesize downloadLock=_downloadLock - In the implementation block
@property (assign,nonatomic) BOOL nativeLoadInProgress;                                            //@synthesize nativeLoadInProgress=_nativeLoadInProgress - In the implementation block
@property (nonatomic,retain) MMReport * activeReport;                                              //@synthesize activeReport=_activeReport - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessedComponents;                             //@synthesize accessedComponents=_accessedComponents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * loadedComponents;                               //@synthesize loadedComponents=_loadedComponents - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                                              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                      //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) BOOL firedImpression;                                                 //@synthesize firedImpression=_firedImpression - In the implementation block
@property (assign,nonatomic,__weak) id<MMNativeAdDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * disclaimer; 
@property (nonatomic,readonly) UIImageView * iconImageView; 
@property (nonatomic,readonly) UIImageView * mainImageView; 
@property (nonatomic,readonly) UILabel * body; 
@property (nonatomic,readonly) UILabel * title; 
@property (nonatomic,readonly) UIButton * callToActionButton; 
@property (nonatomic,readonly) UILabel * rating; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nativeTypeConfig;
+(id)trackingQueue;
-(UIButton *)callToActionButton;
-(UIViewController *)viewControllerForPresentingModalView;
-(void)reportClick;
-(void)setAdapter:(id<MMNativeAdapter>)arg1 ;
-(void)setViewControllerForPresentingModalView:(UIViewController *)arg1 ;
-(void)invokeCallToAction;
-(NSString *)callToActionText;
-(NSString *)disclaimerText;
-(NSDictionary *)iconImageInfo;
-(NSDictionary *)mainImageInfo;
-(void)contentWillLeaveApplication;
-(BOOL)firedImpression;
-(void)fireImpression;
-(id)adapterProtocol;
-(long long)componentIdForName:(id)arg1 ;
-(id)initWithPlacementId:(id)arg1 supportedTypes:(id)arg2 ;
-(NSRecursiveLock *)downloadLock;
-(BOOL)nativeLoadInProgress;
-(void)setNativeLoadInProgress:(BOOL)arg1 ;
-(void)setActiveReport:(MMReport *)arg1 ;
-(void)setDefaultActionLink:(MMNativeLink *)arg1 ;
-(NSMutableDictionary *)accessedComponents;
-(NSMutableDictionary *)loadedComponents;
-(void)setFiredImpression:(BOOL)arg1 ;
-(NSArray *)supportedTypes;
-(void)processNativeResponse;
-(id)title:(long long)arg1 ;
-(id)getComponentLabel:(int)arg1 componentName:(id)arg2 instanceId:(long long)arg3 fontSize:(double)arg4 ;
-(id)body:(long long)arg1 ;
-(id)callToActionButton:(long long)arg1 ;
-(id)assetInfo:(id)arg1 instanceIndex:(long long)arg2 ;
-(id)defaultCTAColor;
-(void)invokeCallToAction:(id)arg1 ;
-(long long)tagForComponentID:(long long)arg1 instanceIndex:(long long)arg2 ;
-(id)disclaimer:(long long)arg1 ;
-(id)iconImageView:(long long)arg1 ;
-(id)mainImageView:(long long)arg1 ;
-(id)rating:(long long)arg1 ;
-(void)setUpTapGestureRecognizer:(id)arg1 ;
-(void)markComponentAsAccessed:(id)arg1 instanceID:(long long)arg2 ;
-(id)componentNameForId:(long long)arg1 ;
-(MMNativeLink *)defaultActionLink;
-(void)handleLink:(id)arg1 ;
-(void)fireClick;
-(SCD_Struct_GA31)assetIDForTag:(long long)arg1 ;
-(void)invokeComponentAction:(id)arg1 ;
-(id)assetByAssetID:(SCD_Struct_GA31)arg1 ;
-(void)invokeDefaultAction;
-(MMReport *)activeReport;
-(BOOL)validatePublisherRequiredComponents;
-(void)fireImpressionTrackers;
-(SCD_Struct_GA31)assetIDForIdentifier:(long long)arg1 ;
-(id)configureImageViewForAsset:(id)arg1 withAssetID:(SCD_Struct_GA31)arg2 ;
-(void)succeed;
-(void)handleComponentTap:(id)arg1 ;
-(id)initWithPlacementId:(id)arg1 adType:(id)arg2 ;
-(UILabel *)disclaimer;
-(UIImageView *)mainImageView;
-(id)loadIntoLayoutFromBundle:(id)arg1 ;
-(id)mainImageInfo:(long long)arg1 ;
-(id)iconImageInfo:(long long)arg1 ;
-(UIViewController *)currentRootViewController;
-(void)setCurrentRootViewController:(UIViewController *)arg1 ;
-(void)setSupportedTypes:(NSArray *)arg1 ;
-(void)setDownloadLock:(NSRecursiveLock *)arg1 ;
-(void)setAccessedComponents:(NSMutableDictionary *)arg1 ;
-(void)setLoadedComponents:(NSMutableDictionary *)arg1 ;
-(void)sendTrackingRequest:(id)arg1 ;
-(id<MMNativeAdapter>)adapter;
-(void)load:(id)arg1 ;
-(void)setDelegate:(id<MMNativeAdDelegate>)arg1 ;
-(void)dealloc;
-(id<MMNativeAdDelegate>)delegate;
-(UILabel *)title;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(BOOL)isValid;
-(UILabel *)body;
-(NSString *)bodyText;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(UILabel *)rating;
-(NSString *)titleText;
-(id)presentationViewController;
-(void)failWithError:(id)arg1 ;
-(UIImageView *)iconImageView;
-(double)timeout;
-(void)setIsValid:(BOOL)arg1 ;
@end
