/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface VideoData : NSObject {

	long long idVideo;
	BOOL isHighlight;
	NSString* strikerName;
	NSString* time;
	NSString* score;
	NSString* source;
	NSURL* videoURL;

}

@property (assign,nonatomic) long long idVideo; 
@property (assign,nonatomic) BOOL isHighlight; 
@property (nonatomic,retain) NSString * strikerName; 
@property (nonatomic,retain) NSString * time; 
@property (nonatomic,retain) NSString * score; 
@property (nonatomic,retain) NSString * source; 
@property (nonatomic,retain) NSURL * videoURL; 
-(long long)idVideo;
-(void)setIdVideo:(long long)arg1 ;
-(void)setIsHighlight:(BOOL)arg1 ;
-(NSString *)strikerName;
-(void)setStrikerName:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)time;
-(void)setTime:(NSString *)arg1 ;
-(void)setScore:(NSString *)arg1 ;
-(NSString *)score;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(BOOL)isHighlight;
@end
