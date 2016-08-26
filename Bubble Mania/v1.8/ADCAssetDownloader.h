/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ADCAsset, NSURLConnection, NSError, NSOutputStream, NSURL;

@interface ADCAssetDownloader : NSObject {

	ADCAsset* asset;
	BOOL executing_;
	BOOL finished_;
	int reference_count_;
	NSURLConnection* connection_;
	NSError* error_;
	NSOutputStream* stream;
	NSURL* download_url;
	NSURL* temp_compressed_file_url;
	NSURL* temp_decompressed_file_url;

}

@property (nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) BOOL executing; 
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
