/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebViewControllerShareOptionsDelegate.h>

@class MNBusinessButtonAttribution, MNBusinessWebShareHandler, FBMobileConfigContextManager, NSDictionary, NSString;

@interface MNWebViewControllerShareOptionsDelegate : NSObject <FBWebViewControllerShareOptionsDelegate> {

	MNBusinessButtonAttribution* _attribution;
	MNBusinessWebShareHandler* _businessWebShareHandler;
	FBMobileConfigContextManager* _configManager;
	BOOL _showingCustomSendInMessenger;
	NSDictionary* _additionalShareOptionsMapping;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupAdditionalShareOptions;
-(void)_performBusinessWebLinkShareWithURL:(id)arg1 ;
-(id)additionalShareOptionsForWebViewController:(id)arg1 ;
-(void)webViewController:(id)arg1 didSelectAdditionalShareOptionAtIndex:(unsigned long long)arg2 ;
-(id)initWithAttribution:(id)arg1 businessWebShareHandler:(id)arg2 configManager:(id)arg3 ;
-(BOOL)disableDefaultSendAsMessageAction;
@end
