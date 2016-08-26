/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/FlurryLoadOperation.h>

@class NSPort, NSRunLoop, NSFileHandle, NSError, NSString;

@interface FlurryHttpLoadOperation : FlurryLoadOperation {

	int numRetries;
	BOOL failed;
	NSPort* port;
	NSRunLoop* runLoop;
	NSFileHandle* fileHandle_;
	NSError* operationError_;
	NSString* _cbKey;

}

@property (nonatomic,retain) NSString * cbKey;                       //@synthesize cbKey=_cbKey - In the implementation block
@property (nonatomic,retain) NSPort * port; 
@property (nonatomic,retain) NSRunLoop * runLoop; 
@property (nonatomic,retain) NSFileHandle * fileHandle; 
-(NSString *)cbKey;
-(void)setCbKey:(NSString *)arg1 ;
-(void)executeLoading;
-(id)initWithAssetName:(id)arg1 withUrlString:(id)arg2 withExpiryTime:(double)arg3 withTags:(id)arg4 delegate:(id)arg5 withSavePath:(id)arg6 withRelativePath:(id)arg7 withCBKey:(id)arg8 ;
-(void)setPort:(NSPort *)arg1 ;
-(BOOL)isConcurrent;
-(NSRunLoop *)runLoop;
-(id)operationError;
-(void)setOperationError:(id)arg1 ;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSPort *)port;
-(void)setRunLoop:(NSRunLoop *)arg1 ;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
@end
