/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, MNAttributionAppSupplementaryInfoDownloaderDelegate;
@class FBUserSession, MNPlatformAppRequestParameters, FBMThreadKey, NSString;

@interface MNAttributionAppSupplementaryInfoDownloader : NSObject {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _token;
	MNPlatformAppRequestParameters* _platformAppRequestParameters;
	double _maxCacheAge;
	id<MNAttributionAppSupplementaryInfoDownloaderDelegate> _delegate;
	FBMThreadKey* _threadKey;

}

@property (assign,nonatomic,__weak) id<MNAttributionAppSupplementaryInfoDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * appID; 
@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                                                      //@synthesize threadKey=_threadKey - In the implementation block
-(id)initWithSession:(id)arg1 requestParameters:(id)arg2 maxCacheAge:(double)arg3 threadKey:(id)arg4 ;
-(void)setDelegate:(id<MNAttributionAppSupplementaryInfoDownloaderDelegate>)arg1 ;
-(id<MNAttributionAppSupplementaryInfoDownloaderDelegate>)delegate;
-(void)start;
-(FBMThreadKey *)threadKey;
-(NSString *)appID;
@end

