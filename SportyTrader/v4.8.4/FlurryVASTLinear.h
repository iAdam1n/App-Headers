/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, FlurryVASTMediaFile;

@interface FlurryVASTLinear : NSObject {

	int duration;
	int skipOffset;
	NSMutableDictionary* trackingEventDic;
	NSMutableDictionary* videoClickDic;
	FlurryVASTMediaFile* _mediaFile;

}

@property (assign,nonatomic) int duration; 
@property (assign,nonatomic) int skipOffset; 
@property (nonatomic,retain) NSMutableDictionary * trackingEventDic; 
@property (nonatomic,retain) NSMutableDictionary * videoClickDic; 
@property (nonatomic,retain) FlurryVASTMediaFile * mediaFile;                     //@synthesize mediaFile=_mediaFile - In the implementation block
+(id)trackingEventEnumToString:(int)arg1 ;
+(int)trackingEventStringToEnum:(id)arg1 ;
-(int)skipOffset;
-(void)setSkipOffset:(int)arg1 ;
-(NSMutableDictionary *)trackingEventDic;
-(void)setTrackingEventDic:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)videoClickDic;
-(void)setVideoClickDic:(NSMutableDictionary *)arg1 ;
-(FlurryVASTMediaFile *)mediaFile;
-(void)setMediaFile:(FlurryVASTMediaFile *)arg1 ;
-(int)duration;
-(void)setDuration:(int)arg1 ;
@end
