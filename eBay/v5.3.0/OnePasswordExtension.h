/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OnePasswordExtension : NSObject
+(id)sharedExtension;
+(id)systemAppExtensionAPINotAvailableError;
+(id)failedToContactExtensionErrorWithActivityError:(id)arg1 ;
+(id)extensionCancelledByUserError;
+(id)failedToLoadItemProviderDataErrorWithUnderlyingError:(id)arg1 ;
+(id)failedToCollectFieldsErrorWithUnderlyingError:(id)arg1 ;
+(id)failedToFillFieldsErrorWithLocalizedErrorMessage:(id)arg1 underlyingError:(id)arg2 ;
-(BOOL)isAppExtensionAvailable;
-(void)findLoginForURLString:(id)arg1 forViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isSystemAppExtensionAPIAvailable;
-(id)activityViewControllerForItem:(id)arg1 typeIdentifier:(id)arg2 ;
-(void)processExtensionItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fillLoginIntoUIWebView:(id)arg1 webViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fillLoginIntoWKWebView:(id)arg1 forViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)findLoginIn1PasswordWithURLString:(id)arg1 collectedPageDetails:(id)arg2 forWebViewController:(id)arg3 withWebView:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)executeFillScript:(id)arg1 inWebView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)storeLoginForURLString:(id)arg1 loginDetails:(id)arg2 passwordGenerationOptions:(id)arg3 forViewController:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fillLoginIntoWebView:(id)arg1 forViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
