/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OnePasswordExtension : NSObject
+(id)sharedExtension;
+(id)systemAppExtensionAPINotAvailableError;
+(id)failedToContactExtensionErrorWithActivityError:(id)arg1 ;
+(id)extensionCancelledByUserError;
+(id)failedToObtainURLStringFromWebViewError;
+(id)failedToFillFieldsErrorWithLocalizedErrorMessage:(id)arg1 underlyingError:(id)arg2 ;
+(id)failedToLoadItemProviderDataErrorWithUnderlyingError:(id)arg1 ;
+(id)failedToCollectFieldsErrorWithUnderlyingError:(id)arg1 ;
-(BOOL)isAppExtensionAvailable;
-(void)findLoginForURLString:(id)arg1 forViewController:(id)arg2 sender:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isSystemAppExtensionAPIAvailable;
-(id)activityViewControllerForItem:(id)arg1 viewController:(id)arg2 sender:(id)arg3 typeIdentifier:(id)arg4 ;
-(void)processExtensionItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fillLoginIntoUIWebView:(id)arg1 webViewController:(id)arg2 sender:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)createExtensionItemForURLString:(id)arg1 webPageDetails:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)executeFillScript:(id)arg1 inWebView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)findLoginIn1PasswordWithURLString:(id)arg1 collectedPageDetails:(id)arg2 forWebViewController:(id)arg3 sender:(id)arg4 withWebView:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)storeLoginForURLString:(id)arg1 loginDetails:(id)arg2 passwordGenerationOptions:(id)arg3 forViewController:(id)arg4 sender:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)changePasswordForLoginForURLString:(id)arg1 loginDetails:(id)arg2 passwordGenerationOptions:(id)arg3 forViewController:(id)arg4 sender:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)fillLoginIntoWebView:(id)arg1 forViewController:(id)arg2 sender:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isOnePasswordExtensionActivityType:(id)arg1 ;
-(void)createExtensionItemForWebView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fillReturnedItems:(id)arg1 intoWebView:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
