/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNSecureMessagingCryptoStateLoaderListening.h>

@class FBAnalytics, NSString;

@interface MNSecureMessagingCryptoKeychainStorageAnalyticsLogger : NSObject <MNSecureMessagingCryptoStateLoaderListening> {

	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnalytics:(id)arg1 ;
-(void)didFailToLoadRegisteredCryptoStateWithReason:(long long)arg1 existingCryptoState:(id)arg2 shouldRegisterNow:(BOOL)arg3 ;
-(void)didLoadRegisteredDeviceInfo:(id)arg1 ;
-(void)didLoadAllCryptoState:(id)arg1 ;
-(void)didUnloadCryptoState;
-(void)didDeleteMessagingStoreWithReason:(long long)arg1 error:(id)arg2 ;
@end
