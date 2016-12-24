/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/GSAd.h>
#import <UIKit/UIWebViewDelegate.h>
#import <SolitaireFree/GSTimerTargetDelegate.h>
#import <SolitaireFree/MFMessageComposeViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <SolitaireFree/PKAddPassesViewControllerDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <SolitaireFree/ABUnknownPersonViewControllerDelegate.h>

@protocol GSAdDelegate;
@class GSAdWebView, GSTribalFusionHandler, GSKeywordSet, GSParameterDictionary, NSTimer, GSTimerTarget, NSURL, UIViewController, UIImage, EKEventStore, NSString;

@interface GSAdModel : NSObject <GSAd, UIWebViewDelegate, GSTimerTargetDelegate, MFMessageComposeViewControllerDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, PKAddPassesViewControllerDelegate, SKStoreProductViewControllerDelegate, EKEventEditViewDelegate, ABUnknownPersonViewControllerDelegate> {

	GSAdWebView* m_webView;
	BOOL m_fetchSucceeded;
	BOOL m_adReady;
	BOOL m_isFetching;
	BOOL m_isFetched;
	GSTribalFusionHandler* m_tribalFusionHandler;
	BOOL m_didFinishIFrameLoad;
	BOOL m_didSetTFImage;
	id<GSAdDelegate> m_delegate;
	GSKeywordSet* m_keywords;
	GSParameterDictionary* m_parameters;
	NSTimer* m_timer;
	GSTimerTarget* m_timerTarget;
	long long m_readyStateCounter;
	NSURL* m_adRequestURL;
	UIViewController* m_rootViewController;
	BOOL m_hasClickedThrough;
	UIImage* m_savedImage;
	EKEventStore* m_eventStore;
	BOOL m_hasPresentedClickthroughViewController;
	NSString* m_adID;
	BOOL m_isWaitingForNetworkResponse;
	NSTimer* m_reachabilityTimer;
	BOOL m_canSetDefaultFrame;
	BOOL m_canSetCurrentFrame;
	BOOL m_allowOrientationChange;
	BOOL m_isExpanded;
	BOOL m_isTransparent;
	NSString* m_savePhotoURL;
	long long m_forcedOrientation;
	long long m_orientationWhenMraidLocked;
	CGRect m_positionRect;
	CGRect m_defaultPositionRect;

}

@property (readonly) GSAdWebView * webView; 
@property (readonly) BOOL hasClickedThrough; 
@property (assign) BOOL isFetched; 
@property (nonatomic,retain) UIImage * savedImage; 
@property (assign,nonatomic) CGRect positionRect; 
@property (assign,nonatomic) CGRect defaultPositionRect; 
@property (assign,nonatomic) BOOL canSetDefaultFrame; 
@property (assign,nonatomic) BOOL canSetCurrentFrame; 
@property (assign,nonatomic) BOOL allowOrientationChange; 
@property (assign,nonatomic) long long forcedOrientation; 
@property (assign,nonatomic) BOOL isExpanded; 
@property (assign,nonatomic) BOOL isTransparent; 
@property (nonatomic,retain) NSString * savePhotoURL; 
@property (assign) long long orientationWhenMraidLocked; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<GSAdDelegate> delegate; 
+(long long)uiInterfaceOrientation;
+(const char*)uiOrientationName:(long long)arg1 ;
+(long long)uiOrientationFromPosition:(int)arg1 ;
+(int)limitedOrientationFromUiOrientation:(long long)arg1 ;
+(const char*)limitedOrientationName:(int)arg1 ;
+(int)positionFromUiOrientation:(long long)arg1 ;
+(const char*)uiPositionName:(int)arg1 ;
+(BOOL)requestToDisplayViewController;
+(int)getRotationsFromAngle:(double)arg1 ;
+(void)viewControllerDidDismiss;
-(BOOL)isAdReady;
-(BOOL)allowOrientationChange;
-(id)dictionaryFromJSONString:(id)arg1 ;
-(void)setAllowOrientationChange:(BOOL)arg1 ;
-(void)setAdID:(id)arg1 ;
-(id)adID;
-(void)updateMaxSize;
-(void)setAdServerUrl:(id)arg1 ;
-(void)GPSDidUpdate;
-(void)fetchDidFinish;
-(void)checkReadyState;
-(void)checkStatusCode;
-(void)checkGSTimeout;
-(void)adReadyDidTimeout;
-(void)adFetchDidTimeout;
-(void)setMaxReadyStateQueries:(id)arg1 ;
-(void)setReadyStateQueryInterval:(id)arg1 ;
-(void)broadcastImageDidSave;
-(void)setSavePhotoURL:(NSString *)arg1 ;
-(void)displaySaveImageAlertView;
-(void)cacheImageInBackground:(id)arg1 ;
-(CGSize)getAdjustedSize;
-(CGRect)defaultPositionRect;
-(long long)orientationWhenMraidLocked;
-(void)setOrientationWhenMraidLocked:(long long)arg1 ;
-(void)handleCalendarEventURL:(id)arg1 ;
-(BOOL)URLWillOpenSMS:(id)arg1 ;
-(void)handleSMSURL:(id)arg1 ;
-(BOOL)URLWillAddCalendarEvent:(id)arg1 ;
-(BOOL)URLWillAddContact:(id)arg1 ;
-(void)handleContactURL:(id)arg1 ;
-(BOOL)URLWillAddPass:(id)arg1 ;
-(void)handlePassbookURL:(id)arg1 ;
-(BOOL)URLWillPostToFacebook:(id)arg1 ;
-(void)handleSocialURL:(id)arg1 forNetwork:(int)arg2 ;
-(void)displayAlertWithMessage:(id)arg1 ;
-(BOOL)URLWillPostToTwitter:(id)arg1 ;
-(void)handleTwitterURL:(id)arg1 ;
-(BOOL)URLWillOpenAppStore:(id)arg1 ;
-(void)handleAppStoreURL:(id)arg1 ;
-(void)handleClickthroughToExternalAppURL:(id)arg1 ;
-(BOOL)URLWillOpenSafari:(id)arg1 ;
-(void)handleSafariURL:(id)arg1 ;
-(id)recurrenceRuleFromCalendarRepeatRule:(id)arg1 ;
-(void)displayViewControllerForEvent:(id)arg1 ;
-(void)displayViewControllerForContact:(void*)arg1 ;
-(void)addContactCancelled;
-(BOOL)isPortraitSupported;
-(void)tribalFusionDidSucceed;
-(BOOL)performBridgeFunction:(id)arg1 forWebView:(id)arg2 ;
-(void)saveImageInBackground:(id)arg1 ;
-(NSString *)savePhotoURL;
-(void)dismissBrowserAnimated:(BOOL)arg1 ;
-(BOOL)canFetchAd;
-(void)adIsReady;
-(void)adDidExpire;
-(void)logMessage:(id)arg1 withLevel:(id)arg2 ;
-(void)closeFullscreenAd;
-(void)setAdFetchTimeoutInterval:(id)arg1 ;
-(void)setAdReadyTimeoutInterval:(id)arg1 ;
-(void)setExitItemDisplayTimeInterval:(id)arg1 ;
-(void)saveImage:(id)arg1 ;
-(void)logAdID:(id)arg1 ;
-(void)undoForcedOrientation;
-(void)updateOrientationPropertiesWithAllowOrientationChange:(id)arg1 ForceOrientation:(id)arg2 ;
-(void)createCalendarEventWithDescription:(id)arg1 Location:(id)arg2 Summary:(id)arg3 Start:(id)arg4 End:(id)arg5 Reminder:(id)arg6 Recurrence:(id)arg7 ;
-(void)makeBackgroundTransparent;
-(void)expandWithCustomClose:(id)arg1 toDestination:(id)arg2 ;
-(void)clickthroughToDestination:(id)arg1 ;
-(void)adDidFail;
-(void)setIsTF;
-(void)didSetTFImage;
-(BOOL)isFetched;
-(UIImage *)savedImage;
-(void)setDefaultPositionRect:(CGRect)arg1 ;
-(void)setCanSetDefaultFrame:(BOOL)arg1 ;
-(void)setCanSetCurrentFrame:(BOOL)arg1 ;
-(void)setSizeParameter:(id)arg1 ;
-(BOOL)canSetDefaultFrame;
-(BOOL)canSetCurrentFrame;
-(long long)forcedOrientation;
-(BOOL)hasClickedThrough;
-(void)fireWillExit;
-(void)adDidDisplay;
-(void)setForcedOrientation:(long long)arg1 ;
-(void)resetRootViewController;
-(void)setIsFetched:(BOOL)arg1 ;
-(BOOL)sendWillDismissModalViewControllerNotification;
-(BOOL)sendDidDismissModalViewControllerNotification;
-(BOOL)sendWillPresentModalViewControllerNotification;
-(void)updateAdPosition;
-(void)setSavedImage:(UIImage *)arg1 ;
-(void)setTFJSON:(id)arg1 ;
-(void)tribalFusionDidFinishIFrameLoad;
-(void)tribalFusionDidFail;
-(id)init;
-(void)setDelegate:(id<GSAdDelegate>)arg1 ;
-(void)dealloc;
-(id<GSAdDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(GSAdWebView *)webView;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(BOOL)isTransparent;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(void)cacheImage:(id)arg1 ;
-(CGRect)positionRect;
-(void)setPositionRect:(CGRect)arg1 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(void)takeScreenshot;
-(void)stopTimers;
-(void)fetch;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)setIsTransparent:(BOOL)arg1 ;
-(void)orientationChanged:(id)arg1 ;
-(void)playVideo:(id)arg1 ;
-(void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
@end
