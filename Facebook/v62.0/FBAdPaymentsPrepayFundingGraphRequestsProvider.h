/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAdPaymentsPrepayFundingGraphRequestsProvider : NSObject
-(id)prepayFundRequestForAdAccountId:(id)arg1 credentialId:(id)arg2 cscToken:(id)arg3 fundingAmount:(id)arg4 callbackPerformer:(id)arg5 ;
-(id)parsePrepayFundingResponse:(id)arg1 ;
-(id)prepayFundGetCachedCSCTokenForCredentialId:(id)arg1 securityCode:(id)arg2 callbackPerformer:(id)arg3 ;
-(id)parsePrepayFundingGetCachedCSCTokenResponse:(id)arg1 ;
@end
