/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSArray;


@protocol WAViewControllerExtensions <NSObject>
@property (nonatomic,readonly) unsigned long long visibleConnectionStatus; 
@property (nonatomic,retain) NSArray * defaultPreviewActionItems; 
@required
-(void)showDropDownAlertView:(id)arg1 animated:(BOOL)arg2;
-(void)dismissDropDownAlertView:(id)arg1 animated:(BOOL)arg2;
-(void)wa_tintColorDidChange;
-(void)wa_fontSizeDidChange;
-(void)wa_applicationDidEnterBackground;
-(unsigned long long)visibleConnectionStatus;
-(void)visibleConnectionStatusDidChange;
-(void)wa_applicationWillEnterForeground;
-(void)wa_applicationDidBecomeActive;
-(BOOL)wa_isBeingPreviewed;
-(NSArray *)defaultPreviewActionItems;
-(void)dismissAllDropDownAlertViewsWithAnimation:(BOOL)arg1;
-(void)performAfterTransitionEnds:(/*^block*/id)arg1;
-(void)setDefaultPreviewActionItems:(id)arg1;
-(void)wa_applicationWillResignActive;
-(BOOL)wa_is3DTouchAvailable;
-(id)uniqueIdentifier;

@end
