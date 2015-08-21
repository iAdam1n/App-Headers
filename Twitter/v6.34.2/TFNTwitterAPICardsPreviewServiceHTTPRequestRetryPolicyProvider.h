/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterServiceHTTPRequestRetryPolicyProvider.h>

@class NSArray, TFNTwitterAPICardsPreviewHTTPRequestRetryPolicyProvider;

@interface TFNTwitterAPICardsPreviewServiceHTTPRequestRetryPolicyProvider : TFNTwitterServiceHTTPRequestRetryPolicyProvider {

	NSArray* _childProviders;
	TFNTwitterAPICardsPreviewHTTPRequestRetryPolicyProvider* _cardPreviewRetryPolicyProvider;

}

@property (nonatomic,retain) NSArray * childProviders;                                                                              //@synthesize childProviders=_childProviders - In the implementation block
@property (nonatomic,retain) TFNTwitterAPICardsPreviewHTTPRequestRetryPolicyProvider * cardPreviewRetryPolicyProvider;              //@synthesize cardPreviewRetryPolicyProvider=_cardPreviewRetryPolicyProvider - In the implementation block
-(id)initWithPermittedRetryCount:(unsigned long long)arg1 serviceFailurePermittedRetryCount:(unsigned long long)arg2 backoffMinRetryDelay:(double)arg3 backoffMaxRetryDelay:(double)arg4 ;
-(NSArray *)childProviders;
-(void)setChildProviders:(NSArray *)arg1 ;
-(TFNTwitterAPICardsPreviewHTTPRequestRetryPolicyProvider *)cardPreviewRetryPolicyProvider;
-(void)setCardPreviewRetryPolicyProvider:(TFNTwitterAPICardsPreviewHTTPRequestRetryPolicyProvider *)arg1 ;
-(id)init;
@end

