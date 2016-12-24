/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBHTMLEmbedBlockController.h>
#import <Messenger/FBHTMLAdDiagnosticsDelegate.h>
#import <Messenger/FBInlineAdHeaderNodeDelegate.h>
#import <Messenger/FBPopoverControllerDelegate.h>

@class FBHTMLAdDiagnostics, FBUserSession, FBRichStoryBlock, FBRichStoryBlockDisplayContext, FBInlineAdHeaderNode, FBPopoverActionSheet, NSMutableSet, NSString;

@interface FBHTMLAdBlockController : FBHTMLEmbedBlockController <FBHTMLAdDiagnosticsDelegate, FBInlineAdHeaderNodeDelegate, FBPopoverControllerDelegate> {

	FBHTMLAdDiagnostics* _diagnostics;
	FBUserSession* _session;
	FBRichStoryBlock* _storyBlock;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBInlineAdHeaderNode* _sponsoredHeaderNode;
	FBPopoverActionSheet* _popoverActionSheet;
	BOOL _needsToFireImpressionEvent;
	BOOL _didFireDiagnosticsEvent;
	BOOL _isAdNetworkRequest;
	BOOL _shouldShowReportSentConfirmation;
	BOOL _didReportAdUnit;
	BOOL _isAdDropDownEnabled;
	BOOL _enableSampledWebviewAdRequests;
	BOOL _shouldResizeAds;
	NSMutableSet* _adLinks;
	NSMutableSet* _adImages;
	NSMutableSet* _adVideos;
	NSMutableSet* _adRequestURLs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)annotationDictionaryForBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 ;
+(id)blockControllerClassesForAnnotationRegistry;
+(void)setUserReportingEnabled:(BOOL)arg1 ;
+(void)setInlineMediaAutoplayEnabled:(BOOL)arg1 ;
+(id)webViewUserScriptsOnDocumentLoad;
+(BOOL)webViewAllowsInlineMediaAutoplay;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(id)renderableForOverlayAnnotation:(id)arg1 withKey:(id)arg2 annotationController:(id)arg3 ;
-(void)didEnterWorkingRange;
-(void)didReceiveFocusWithInteraction:(unsigned long long)arg1 ;
-(void)didLoseFocusWithInteraction:(unsigned long long)arg1 ;
-(BOOL)wantsCentermostFocus;
-(void)didGainCentermostFocus;
-(void)didLoseCentermostFocus;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(void)logWebviewAdRequest;
-(id)renderableForSponsoredHeaderAnnotationBlock:(id)arg1 ;
-(void)_startDiagnosticsIfNecessary;
-(void)_stopDiagnostics;
-(void)_updateContentSize:(CGSize)arg1 ;
-(void)_measureContentSizeWithCallback:(/*^block*/id)arg1 ;
-(void)_applyCSSOverride;
-(void)_explainAdUnit;
-(void)_reportAdUnit;
-(void)_dismissPopover;
-(void)_reportAdUnitIfPossible;
-(void)htmlAdDiagnostics:(id)arg1 didFinishWithDiagnosis:(unsigned long long)arg2 screenshotImage:(id)arg3 ;
-(void)setAdNetworkRequest:(BOOL)arg1 ;
-(void)didLoadLastRequestWithFinishTime:(double)arg1 ;
-(id)analyticsExtrasForRequest:(id)arg1 ;
-(BOOL)htmlEmbedNode:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(long long)arg3 sourceFrame:(id)arg4 targetFrame:(id)arg5 ;
-(void)htmlEmbedNode:(id)arg1 didFinishNavigationRequest:(id)arg2 ;
-(void)htmlEmbedNode:(id)arg1 didUpdateContentSize:(CGSize)arg2 ;
-(void)htmlEmbedNode:(id)arg1 didReceiveUserScriptMessage:(id)arg2 ;
-(void)inlineAdHeaderNode:(id)arg1 didTapChevronButton:(id)arg2 ;
-(unsigned long long)interactionType;
@end
