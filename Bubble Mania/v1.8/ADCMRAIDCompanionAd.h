/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/ADCCompanionAd.h>
#import <UIKit/UIWebViewDelegate.h>
#import <BubbleMania/MFMessageComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class NSDictionary, NSString, UIView, UIColor, UIWebView, WKWebView, UIActivityIndicatorView, ADCAlert;

@interface ADCMRAIDCompanionAd : ADCCompanionAd <UIWebViewDelegate, MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate, WKNavigationDelegate> {

	NSDictionary* tracking;
	NSDictionary* third_party_tracking;
	NSString* html5_tag;
	int last_container_width;
	int last_container_height;
	BOOL mraid_viewable;
	BOOL is_html5_loaded;
	BOOL mraid;
	BOOL mraid_ready;
	BOOL can_show_html5;
	BOOL is_prepared;
	BOOL html5_tag_is_url;
	UIView* html5_background;
	UIColor* background_color;
	UIWebView* html5_view;
	WKWebView* wk_html5_view;
	UIActivityIndicatorView* loading_spinner;
	int download_attempts;
	BOOL load_spinner_enabled;
	BOOL load_timeout_enabled;
	double load_timeout;
	ADCAlert* curr_alert;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init:(id)arg1 inAd:(id)arg2 ;
-(void)willHideEndCard;
-(void)prepare_html5:(id)arg1 ;
-(void)layout:(id)arg1 ;
-(id)convertHTML5ToMRAID:(id)arg1 ;
-(void)downloadHTML5Data;
-(void)fireStateChangeScreenSize:(CGSize)arg1 ;
-(void)fireReady;
-(void)fireViewableChange:(BOOL)arg1 ;
-(void)handleMRAIDCommand:(id)arg1 ;
-(void)onWebViewDidFinishLoad:(id)arg1 ;
-(void)onWebViewFail:(id)arg1 ;
-(BOOL)shouldLoadWebViewRequest:(id)arg1 ;
-(id)parametersFromCommand:(id)arg1 ;
-(void)MRAIDCommandSendStandardADCEvent:(id)arg1 ;
-(void)MRAIDCommandClose;
-(void)MRAIDCommandOpenStore:(id)arg1 ;
-(void)MRAIDCommandOpen:(id)arg1 ;
-(void)MRAIDCommandExpand:(id)arg1 ;
-(void)MRAIDCommandCreateCalendarEvent:(id)arg1 ;
-(void)MRAIDCommandMail:(id)arg1 ;
-(void)MRAIDCommandSMS:(id)arg1 ;
-(void)MRAIDCommandTEL:(id)arg1 ;
-(void)MRAIDCommandCustomEvent:(id)arg1 ;
-(void)MRAIDCommandLaunchApp:(id)arg1 ;
-(void)MRAIDCommandCheckAppPresence:(id)arg1 ;
-(void)MRAIDCommandAutoPlay:(id)arg1 ;
-(void)MRAIDCommandSocialPost:(id)arg1 ;
-(void)MRAIDCommandCheckSocialPresence:(id)arg1 ;
-(void)MRAIDCommandVibrate;
-(void)MRAIDCommandSaveScreenshot;
-(void)MRAIDCommandMakeInAppPurchase;
-(id)executeJavascript:(id)arg1 ;
-(id)executeJavascript:(id)arg1 withVarArgs:(char*)arg2 ;
-(void)sendFeaturesToMRAID;
-(void)fireStateChangeExpanded;
-(id)parseCalendarEventRecurrence:(id)arg1 ;
-(void)promptCalendar:(id)arg1 calendarEvent:(id)arg2 calendarEventStore:(id)arg3 ;
-(id)findButtonInView:(id)arg1 ;
-(id)getCanonicalSocialName:(id)arg1 ;
-(void)sendHTML5DataRequest:(id)arg1 ;
-(void)fireStateChangeDefault;
-(BOOL)show:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)reset;
-(void)update:(id)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
@end

