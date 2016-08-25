/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ADCAsset, NSURLConnection, NSError, NSOutputStream, NSURL;

@interface ADCAssetDownloader : NSObject {

	ADCAsset* _asset;
	NSURLConnection* _connection;
	NSError* _error;
	NSOutputStream* _stream;
	NSURL* _download_url;
	NSURL* _temp_compressed_file_url;
	NSURL* _temp_decompressed_file_url;
	BOOL _finished;
	BOOL _executing;

}

@property (nonatomic,readonly) BOOL finished;               //@synthesize finished=_finished - In the implementation block
@property (nonatomic,readonly) BOOL executing;              //@synthesize executing=_executing - In the implementation block
-(id)init:(id)arg1 ;
-(void)cancel;
-(void)start;
-(void)done;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(BOOL)finished;
-(BOOL)executing;
@end

