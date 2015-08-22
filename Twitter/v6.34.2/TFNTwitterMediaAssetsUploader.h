/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNTwitterMediaAssetUploaderDelegate;
@class NSMutableSet, TFNTwitterMediaUploadConfiguration, TFNTwitterAccount, NSArray;

@interface TFNTwitterMediaAssetsUploader : NSObject {

	NSMutableSet* _uploadSessions;
	long long _uploadPolicy;
	unsigned long long _currentAssetIndexForSequentialUpload;
	unsigned long long _successCount;
	unsigned long long _failureCount;
	unsigned long long _cancelCount;
	TFNTwitterMediaUploadConfiguration* _configuration;
	TFNTwitterAccount* _account;
	NSArray* _assets;
	long long _source;
	double _startTime;
	double _endTime;
	id<TFNTwitterMediaAssetUploaderDelegate> _delegate;

}

@property (nonatomic,readonly) TFNTwitterAccount * account;                                         //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                                                    //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic) long long source;                                                      //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) double startTime;                                                    //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                                                      //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic,__weak) id<TFNTwitterMediaAssetUploaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithAccount:(id)arg1 configuration:(id)arg2 ;
-(id)initWithAsset:(id)arg1 account:(id)arg2 configuration:(id)arg3 ;
-(id)initWithAssetsArray:(id)arg1 account:(id)arg2 configuration:(id)arg3 ;
-(void)_uploadDidComplete:(id)arg1 ;
-(void)_uploadProgressDidUpdate:(id)arg1 ;
-(void)_updateUploadPolicy;
-(BOOL)_uploadAsset:(id)arg1 ;
-(BOOL)_uploadNextAsset;
-(void)_incrementUploadResultsCount:(id)arg1 ;
-(void)_uploaderDidComplete;
-(void)_scribeUploaderResults;
-(long long)_uploadMethodForMediaType:(long long)arg1 ;
-(BOOL)_segmentedUploadForAsset:(id)arg1 ;
-(BOOL)_nonSegmentedUploadForAsset:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<TFNTwitterMediaAssetUploaderDelegate>)arg1 ;
-(id<TFNTwitterMediaAssetUploaderDelegate>)delegate;
-(BOOL)start;
-(long long)source;
-(void)setSource:(long long)arg1 ;
-(double)startTime;
-(TFNTwitterAccount *)account;
-(NSArray *)assets;
-(double)endTime;
@end
