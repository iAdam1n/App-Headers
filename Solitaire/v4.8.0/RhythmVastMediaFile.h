/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RhythmVastMediaFile : NSObject {

	NSString* urlString;
	NSString* fileType;
	NSString* apiFramework;
	int bitrate;
	int width;

}

@property (nonatomic,retain) NSString * urlString; 
@property (nonatomic,retain) NSString * fileType; 
@property (nonatomic,retain) NSString * apiFramework; 
@property (assign) int bitrate; 
@property (assign) int width; 
-(NSString *)apiFramework;
-(void)setApiFramework:(NSString *)arg1 ;
-(void)dealloc;
-(int)width;
-(void)setWidth:(int)arg1 ;
-(NSString *)fileType;
-(void)setFileType:(NSString *)arg1 ;
-(void)setBitrate:(int)arg1 ;
-(int)bitrate;
-(void)setUrlString:(NSString *)arg1 ;
-(NSString *)urlString;
@end

