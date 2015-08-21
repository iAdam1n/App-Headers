/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SASFileDownloaderDelegate;
@class NSMutableData, NSURL, NSString;

@interface SASFileDownloader : NSObject {

	NSMutableData* _receivedData;
	NSURL* _finalURL;
	NSString* _mimeType;
	id<SASFileDownloaderDelegate> _delegate;

}

@property (nonatomic,retain) NSMutableData * receivedData;                        //@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,retain) NSURL * finalURL;                                    //@synthesize finalURL=_finalURL - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                                   //@synthesize mimeType=_mimeType - In the implementation block
@property (assign,nonatomic) id<SASFileDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setFinalURL:(NSURL *)arg1 ;
-(NSURL *)finalURL;
-(void)downloadContentOfURL:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SASFileDownloaderDelegate>)arg1 ;
-(id<SASFileDownloaderDelegate>)delegate;
-(NSString *)mimeType;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

