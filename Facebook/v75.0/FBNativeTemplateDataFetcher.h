/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNativeTemplateDataFetcherListener;
@class FBUserSession;

@interface FBNativeTemplateDataFetcher : NSObject {

	FBUserSession* _session;
	BOOL _didGetNetworkData;
	id<FBNativeTemplateDataFetcherListener> _listener;

}

@property (assign,nonatomic,__weak) id<FBNativeTemplateDataFetcherListener> listener;              //@synthesize listener=_listener - In the implementation block
-(id)initWithSession:(id)arg1 exampleID:(id)arg2 allowCachedData:(BOOL)arg3 enableCachedTemplates:(BOOL)arg4 ;
-(void)_didGetCachedData:(id)arg1 ;
-(void)_sendCallbackForVCConfig:(id)arg1 forSource:(unsigned long long)arg2 ;
-(id<FBNativeTemplateDataFetcherListener>)listener;
-(void)setListener:(id<FBNativeTemplateDataFetcherListener>)arg1 ;
@end
