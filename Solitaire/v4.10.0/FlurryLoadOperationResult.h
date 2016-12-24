/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface FlurryLoadOperationResult : NSObject {

	double queuedTime;
	double loadTime;
	NSData* data;
	NSString* assetName;
	NSString* assetPath;

}

@property (assign,nonatomic) double queuedTime; 
@property (assign,nonatomic) double loadTime; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSString * assetName; 
@property (nonatomic,retain) NSString * assetPath; 
-(double)queuedTime;
-(void)setQueuedTime:(double)arg1 ;
-(double)loadTime;
-(void)setLoadTime:(double)arg1 ;
-(id)init;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)assetName;
-(void)setAssetName:(NSString *)arg1 ;
-(NSString *)assetPath;
-(void)setAssetPath:(NSString *)arg1 ;
@end
